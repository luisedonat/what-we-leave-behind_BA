    Shader "Custom/object outline"
    {
        Properties
        {
            _OutlineColor("Outline Color", Color) = (0, 1, 0, 1)
            _OutlineWidth("Outline Width", Range(0.001, 0.1)) = 0.01
        }

            SubShader
        {
            Tags {"Queue" = "Transparent" }
            Pass
            {
                CGPROGRAM
                #pragma vertex vert
                #pragma fragment frag
                #include "UnityCG.cginc"

                struct appdata_t
                {
                    float4 vertex : POSITION;
                };
                struct v2f
                {
                    float4 pos : POSITION;
                };

                float4 _OutlineColor;
                float _OutlineWidth;

                v2f vert(appdata_t v)
                {
                    v2f o;
                    o.pos = UnityObjectToClipPos(v.vertex);
                    return o;
                }

                half4 frag(v2f i) : SV_Target
                {
                    half4 col = _OutlineColor;
                    col.a = 1 - smoothstep(0.0, _OutlineWidth, min(i.pos.x, min(i.pos.y, 1.0 - i.pos.x)));
                    return col;
                }
                ENDCG
            }
        }
    }