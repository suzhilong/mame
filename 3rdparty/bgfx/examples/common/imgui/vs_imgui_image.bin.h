static const uint8_t vs_imgui_image_glsl[336] =
{
	0x56, 0x53, 0x48, 0x05, 0x6f, 0x1e, 0x3e, 0x3c, 0x01, 0x00, 0x0a, 0x75, 0x5f, 0x76, 0x69, 0x65, // VSH.o.><...u_vie
	0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x01, 0x00, 0x00, 0x01, 0x00, 0x30, 0x01, 0x00, 0x00, 0x61, // wProj......0...a
	0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, // ttribute highp v
	0x65, 0x63, 0x33, 0x20, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x3b, 0x0a, // ec3 a_position;.
	0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, // attribute highp 
	0x76, 0x65, 0x63, 0x32, 0x20, 0x61, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, // vec2 a_texcoord0
	0x3b, 0x0a, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, // ;.varying highp 
	0x76, 0x65, 0x63, 0x32, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, // vec2 v_texcoord0
	0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, // ;.uniform highp 
	0x6d, 0x61, 0x74, 0x34, 0x20, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x3b, // mat4 u_viewProj;
	0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a, // .void main ().{.
	0x20, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, //   highp vec4 tmp
	0x76, 0x61, 0x72, 0x5f, 0x31, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // var_1;.  tmpvar_
	0x31, 0x2e, 0x7a, 0x77, 0x20, 0x3d, 0x20, 0x76, 0x65, 0x63, 0x32, 0x28, 0x30, 0x2e, 0x30, 0x2c, // 1.zw = vec2(0.0,
	0x20, 0x31, 0x2e, 0x30, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, //  1.0);.  tmpvar_
	0x31, 0x2e, 0x78, 0x79, 0x20, 0x3d, 0x20, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, // 1.xy = a_positio
	0x6e, 0x2e, 0x78, 0x79, 0x3b, 0x0a, 0x20, 0x20, 0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, // n.xy;.  gl_Posit
	0x69, 0x6f, 0x6e, 0x20, 0x3d, 0x20, 0x28, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, // ion = (u_viewPro
	0x6a, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x29, 0x3b, 0x0a, 0x20, // j * tmpvar_1);. 
	0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x20, 0x3d, 0x20, 0x61, //  v_texcoord0 = a
	0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00, // _texcoord0;.}...
};
static const uint8_t vs_imgui_image_spv[2744] =
{
	0x56, 0x53, 0x48, 0x05, 0x6f, 0x1e, 0x3e, 0x3c, 0x01, 0x00, 0x0a, 0x75, 0x5f, 0x76, 0x69, 0x65, // VSH.o.><...u_vie
	0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x01, 0x00, 0x00, 0x01, 0x00, 0x98, 0x0a, 0x00, 0x00, 0x03, // wProj...........
	0x02, 0x23, 0x07, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x08, 0x00, 0x37, 0x62, 0x00, 0x00, 0x00, // .#.........7b...
	0x00, 0x00, 0x00, 0x11, 0x00, 0x02, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x06, 0x00, 0x01, // ................
	0x00, 0x00, 0x00, 0x47, 0x4c, 0x53, 0x4c, 0x2e, 0x73, 0x74, 0x64, 0x2e, 0x34, 0x35, 0x30, 0x00, // ...GLSL.std.450.
	0x00, 0x00, 0x00, 0x0e, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0f, // ................
	0x00, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x16, 0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, // ...........main.
	0x00, 0x00, 0x00, 0xa6, 0x14, 0x00, 0x00, 0x95, 0x0e, 0x00, 0x00, 0x95, 0x15, 0x00, 0x00, 0x8b, // ................
	0x17, 0x00, 0x00, 0x03, 0x00, 0x03, 0x00, 0x05, 0x00, 0x00, 0x00, 0xf4, 0x01, 0x00, 0x00, 0x05, // ................
	0x00, 0x04, 0x00, 0x1f, 0x16, 0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x05, // .......main.....
	0x00, 0x04, 0x00, 0x1a, 0x04, 0x00, 0x00, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x00, 0x00, 0x06, // .......Output...
	0x00, 0x06, 0x00, 0x1a, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x67, 0x6c, 0x5f, 0x50, 0x6f, // ...........gl_Po
	0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x00, 0x06, 0x00, 0x06, 0x00, 0x1a, 0x04, 0x00, 0x00, 0x01, // sition..........
	0x00, 0x00, 0x00, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x00, 0x05, // ...v_texcoord0..
	0x00, 0x06, 0x00, 0xbc, 0x0e, 0x00, 0x00, 0x40, 0x6d, 0x61, 0x69, 0x6e, 0x28, 0x76, 0x66, 0x33, // .......@main(vf3
	0x3b, 0x76, 0x66, 0x32, 0x3b, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0xa2, 0x3c, 0x00, 0x00, 0x61, // ;vf2;.......<..a
	0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0xc4, // _position.......
	0x1d, 0x00, 0x00, 0x61, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x00, 0x05, // ...a_texcoord0..
	0x00, 0x05, 0x00, 0x0f, 0x12, 0x00, 0x00, 0x5f, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x5f, // ......._varying_
	0x00, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x24, 0x47, 0x6c, 0x6f, 0x62, // .......;...$Glob
	0x61, 0x6c, 0x00, 0x06, 0x00, 0x06, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, // al.....;.......u
	0x5f, 0x76, 0x69, 0x65, 0x77, 0x52, 0x65, 0x63, 0x74, 0x00, 0x00, 0x06, 0x00, 0x06, 0x00, 0x3b, // _viewRect......;
	0x06, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x54, 0x65, 0x78, // .......u_viewTex
	0x65, 0x6c, 0x00, 0x06, 0x00, 0x05, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x75, // el.....;.......u
	0x5f, 0x76, 0x69, 0x65, 0x77, 0x00, 0x00, 0x06, 0x00, 0x06, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x03, // _view......;....
	0x00, 0x00, 0x00, 0x75, 0x5f, 0x69, 0x6e, 0x76, 0x56, 0x69, 0x65, 0x77, 0x00, 0x00, 0x00, 0x06, // ...u_invView....
	0x00, 0x05, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x70, 0x72, 0x6f, // ...;.......u_pro
	0x6a, 0x00, 0x00, 0x06, 0x00, 0x06, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x75, // j......;.......u
	0x5f, 0x69, 0x6e, 0x76, 0x50, 0x72, 0x6f, 0x6a, 0x00, 0x00, 0x00, 0x06, 0x00, 0x06, 0x00, 0x3b, // _invProj.......;
	0x06, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, // .......u_viewPro
	0x6a, 0x00, 0x00, 0x06, 0x00, 0x07, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x75, // j......;.......u
	0x5f, 0x69, 0x6e, 0x76, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x00, 0x00, 0x00, 0x06, // _invViewProj....
	0x00, 0x05, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x6d, 0x6f, 0x64, // ...;.......u_mod
	0x65, 0x6c, 0x00, 0x06, 0x00, 0x06, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x75, // el.....;.......u
	0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x00, 0x06, 0x00, 0x07, 0x00, 0x3b, // _modelView.....;
	0x06, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, // .......u_modelVi
	0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x00, 0x06, 0x00, 0x06, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x0b, // ewProj.....;....
	0x00, 0x00, 0x00, 0x75, 0x5f, 0x61, 0x6c, 0x70, 0x68, 0x61, 0x52, 0x65, 0x66, 0x34, 0x00, 0x05, // ...u_alphaRef4..
	0x00, 0x03, 0x00, 0x42, 0x13, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0xcb, // ...B............
	0x41, 0x00, 0x00, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x00, 0x00, 0x05, // A..a_position...
	0x00, 0x05, 0x00, 0xa6, 0x14, 0x00, 0x00, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, // .......a_positio
	0x6e, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0x2c, 0x3f, 0x00, 0x00, 0x61, 0x5f, 0x74, 0x65, 0x78, // n......,?..a_tex
	0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x00, 0x05, 0x00, 0x05, 0x00, 0x95, 0x0e, 0x00, 0x00, 0x61, // coord0.........a
	0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x00, 0x05, 0x00, 0x05, 0x00, 0x08, // _texcoord0......
	0x10, 0x00, 0x00, 0x66, 0x6c, 0x61, 0x74, 0x74, 0x65, 0x6e, 0x54, 0x65, 0x6d, 0x70, 0x00, 0x05, // ...flattenTemp..
	0x00, 0x04, 0x00, 0xab, 0x55, 0x00, 0x00, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x00, 0x00, 0x00, 0x05, // ....U..param....
	0x00, 0x04, 0x00, 0x9a, 0x16, 0x00, 0x00, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x00, 0x00, 0x00, 0x05, // .......param....
	0x00, 0x0a, 0x00, 0x95, 0x15, 0x00, 0x00, 0x40, 0x65, 0x6e, 0x74, 0x72, 0x79, 0x50, 0x6f, 0x69, // .......@entryPoi
	0x6e, 0x74, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x2e, 0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, // ntOutput.gl_Posi
	0x74, 0x69, 0x6f, 0x6e, 0x00, 0x00, 0x00, 0x05, 0x00, 0x0a, 0x00, 0x8b, 0x17, 0x00, 0x00, 0x40, // tion...........@
	0x65, 0x6e, 0x74, 0x72, 0x79, 0x50, 0x6f, 0x69, 0x6e, 0x74, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, // entryPointOutput
	0x2e, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x00, 0x00, 0x00, 0x47, // .v_texcoord0...G
	0x00, 0x04, 0x00, 0x94, 0x02, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x48, // ...........@...H
	0x00, 0x05, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x00, // ...;.......#....
	0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x23, // ...H...;.......#
	0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x02, // .......H...;....
	0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x02, // .......H...;....
	0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x3b, // ...#... ...H...;
	0x06, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, // ...............H
	0x00, 0x04, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, // ...;...........H
	0x00, 0x05, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x60, // ...;.......#...`
	0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x07, // ...H...;........
	0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x04, // .......H...;....
	0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x04, // .......H...;....
	0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x3b, // ...#.......H...;
	0x06, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, // ...............H
	0x00, 0x04, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, // ...;...........H
	0x00, 0x05, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0xe0, // ...;.......#....
	0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x07, // ...H...;........
	0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x06, // .......H...;....
	0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x06, // .......H...;....
	0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x20, 0x01, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x3b, // ...#... ...H...;
	0x06, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, // ...............H
	0x00, 0x04, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, // ...;...........H
	0x00, 0x05, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x60, // ...;.......#...`
	0x01, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x07, // ...H...;........
	0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x08, // .......H...;....
	0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x08, // .......H...;....
	0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0xa0, 0x01, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x3b, // ...#.......H...;
	0x06, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, // ...............H
	0x00, 0x04, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, // ...;...........H
	0x00, 0x05, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0xa0, // ...;.......#....
	0x09, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x07, // ...H...;........
	0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x0a, // .......H...;....
	0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x0a, // .......H...;....
	0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0xe0, 0x09, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x3b, // ...#.......H...;
	0x06, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, // ...............H
	0x00, 0x05, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x20, // ...;.......#... 
	0x0a, 0x00, 0x00, 0x47, 0x00, 0x03, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x47, // ...G...;.......G
	0x00, 0x04, 0x00, 0x42, 0x13, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, // ...B...".......G
	0x00, 0x04, 0x00, 0xa6, 0x14, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, // ...............G
	0x00, 0x04, 0x00, 0x95, 0x0e, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x47, // ...............G
	0x00, 0x04, 0x00, 0x95, 0x15, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, // ...............G
	0x00, 0x04, 0x00, 0x8b, 0x17, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x13, // ................
	0x00, 0x02, 0x00, 0x08, 0x00, 0x00, 0x00, 0x21, 0x00, 0x03, 0x00, 0x02, 0x05, 0x00, 0x00, 0x08, // .......!........
	0x00, 0x00, 0x00, 0x16, 0x00, 0x03, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x17, // ........... ....
	0x00, 0x04, 0x00, 0x18, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x20, // ............... 
	0x00, 0x04, 0x00, 0x95, 0x02, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x17, // ................
	0x00, 0x04, 0x00, 0x13, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x20, // ............... 
	0x00, 0x04, 0x00, 0x90, 0x02, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x17, // ................
	0x00, 0x04, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x1e, // ................
	0x00, 0x04, 0x00, 0x1a, 0x04, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x21, // ...............!
	0x00, 0x05, 0x00, 0x67, 0x07, 0x00, 0x00, 0x1a, 0x04, 0x00, 0x00, 0x95, 0x02, 0x00, 0x00, 0x90, // ...g............
	0x02, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x97, 0x06, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x1a, // ... ............
	0x04, 0x00, 0x00, 0x15, 0x00, 0x04, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, // ........... ....
	0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x0e, 0x0a, 0x00, 0x00, 0x01, // ...+............
	0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x0c, 0x0a, 0x00, 0x00, 0x00, // ...+............
	0x00, 0x00, 0x00, 0x2c, 0x00, 0x05, 0x00, 0x13, 0x00, 0x00, 0x00, 0x1f, 0x07, 0x00, 0x00, 0x0c, // ...,............
	0x0a, 0x00, 0x00, 0x0c, 0x0a, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x0b, // .......+........
	0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x8a, // .......+........
	0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3f, 0x18, 0x00, 0x04, 0x00, 0x65, 0x00, 0x00, 0x00, 0x1d, // ......?....e....
	0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x15, 0x00, 0x04, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x20, // ............... 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x6a, // .......+.......j
	0x0a, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x04, 0x00, 0x94, 0x02, 0x00, 0x00, 0x65, // ... ...........e
	0x00, 0x00, 0x00, 0x6a, 0x0a, 0x00, 0x00, 0x1e, 0x00, 0x0e, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x1d, // ...j.......;....
	0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x65, // .......e...e...e
	0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x94, // ...e...e...e....
	0x02, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x20, // ...e...e....... 
	0x00, 0x04, 0x00, 0xb8, 0x08, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x3b, // ...........;...;
	0x00, 0x04, 0x00, 0xb8, 0x08, 0x00, 0x00, 0x42, 0x13, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x2b, // .......B.......+
	0x00, 0x04, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x1d, 0x0a, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x20, // ............... 
	0x00, 0x04, 0x00, 0xe2, 0x02, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x20, // ...........e... 
	0x00, 0x04, 0x00, 0x9a, 0x02, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x20, // ............... 
	0x00, 0x04, 0x00, 0x96, 0x02, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x3b, // ...............;
	0x00, 0x04, 0x00, 0x96, 0x02, 0x00, 0x00, 0xa6, 0x14, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x20, // ............... 
	0x00, 0x04, 0x00, 0x91, 0x02, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x3b, // ...............;
	0x00, 0x04, 0x00, 0x91, 0x02, 0x00, 0x00, 0x95, 0x0e, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x20, // ............... 
	0x00, 0x04, 0x00, 0x9b, 0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x3b, // ...............;
	0x00, 0x04, 0x00, 0x9b, 0x02, 0x00, 0x00, 0x95, 0x15, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x20, // ............... 
	0x00, 0x04, 0x00, 0x92, 0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x3b, // ...............;
	0x00, 0x04, 0x00, 0x92, 0x02, 0x00, 0x00, 0x8b, 0x17, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x36, // ...............6
	0x00, 0x05, 0x00, 0x08, 0x00, 0x00, 0x00, 0x1f, 0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, // ................
	0x05, 0x00, 0x00, 0xf8, 0x00, 0x02, 0x00, 0x53, 0x61, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x97, // .......Sa..;....
	0x06, 0x00, 0x00, 0x08, 0x10, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x95, // ...........;....
	0x02, 0x00, 0x00, 0xab, 0x55, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x90, // ....U......;....
	0x02, 0x00, 0x00, 0x9a, 0x16, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x18, // ...........=....
	0x00, 0x00, 0x00, 0xcb, 0x41, 0x00, 0x00, 0xa6, 0x14, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x13, // ....A......=....
	0x00, 0x00, 0x00, 0x2c, 0x3f, 0x00, 0x00, 0x95, 0x0e, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0xab, // ...,?......>....
	0x55, 0x00, 0x00, 0xcb, 0x41, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x9a, 0x16, 0x00, 0x00, 0x2c, // U...A..>.......,
	0x3f, 0x00, 0x00, 0x39, 0x00, 0x06, 0x00, 0x1a, 0x04, 0x00, 0x00, 0x49, 0x26, 0x00, 0x00, 0xbc, // ?..9.......I&...
	0x0e, 0x00, 0x00, 0xab, 0x55, 0x00, 0x00, 0x9a, 0x16, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x08, // ....U......>....
	0x10, 0x00, 0x00, 0x49, 0x26, 0x00, 0x00, 0x41, 0x00, 0x05, 0x00, 0x9a, 0x02, 0x00, 0x00, 0x54, // ...I&..A.......T
	0x34, 0x00, 0x00, 0x08, 0x10, 0x00, 0x00, 0x0b, 0x0a, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x1d, // 4..........=....
	0x00, 0x00, 0x00, 0x1f, 0x1f, 0x00, 0x00, 0x54, 0x34, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x95, // .......T4..>....
	0x15, 0x00, 0x00, 0x1f, 0x1f, 0x00, 0x00, 0x41, 0x00, 0x05, 0x00, 0x90, 0x02, 0x00, 0x00, 0xee, // .......A........
	0x40, 0x00, 0x00, 0x08, 0x10, 0x00, 0x00, 0x0e, 0x0a, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x13, // @..........=....
	0x00, 0x00, 0x00, 0x13, 0x2d, 0x00, 0x00, 0xee, 0x40, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x8b, // ....-...@..>....
	0x17, 0x00, 0x00, 0x13, 0x2d, 0x00, 0x00, 0xfd, 0x00, 0x01, 0x00, 0x38, 0x00, 0x01, 0x00, 0x36, // ....-......8...6
	0x00, 0x05, 0x00, 0x1a, 0x04, 0x00, 0x00, 0xbc, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x67, // ...............g
	0x07, 0x00, 0x00, 0x37, 0x00, 0x03, 0x00, 0x95, 0x02, 0x00, 0x00, 0xa2, 0x3c, 0x00, 0x00, 0x37, // ...7........<..7
	0x00, 0x03, 0x00, 0x90, 0x02, 0x00, 0x00, 0xc4, 0x1d, 0x00, 0x00, 0xf8, 0x00, 0x02, 0x00, 0x5f, // ..............._
	0x57, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x97, 0x06, 0x00, 0x00, 0x0f, 0x12, 0x00, 0x00, 0x07, // W..;............
	0x00, 0x00, 0x00, 0x41, 0x00, 0x05, 0x00, 0x90, 0x02, 0x00, 0x00, 0x18, 0x2d, 0x00, 0x00, 0x0f, // ...A........-...
	0x12, 0x00, 0x00, 0x0e, 0x0a, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x18, 0x2d, 0x00, 0x00, 0x1f, // .......>....-...
	0x07, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x18, 0x00, 0x00, 0x00, 0x10, 0x19, 0x00, 0x00, 0xa2, // ...=............
	0x3c, 0x00, 0x00, 0x4f, 0x00, 0x07, 0x00, 0x13, 0x00, 0x00, 0x00, 0xbe, 0x2f, 0x00, 0x00, 0x10, // <..O......../...
	0x19, 0x00, 0x00, 0x10, 0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x51, // ...............Q
	0x00, 0x05, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x36, 0x62, 0x00, 0x00, 0xbe, 0x2f, 0x00, 0x00, 0x00, // .......6b.../...
	0x00, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x98, 0x1b, 0x00, 0x00, 0xbe, // ...Q............
	0x2f, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x50, 0x00, 0x07, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x84, // /......P........
	0x32, 0x00, 0x00, 0x36, 0x62, 0x00, 0x00, 0x98, 0x1b, 0x00, 0x00, 0x0c, 0x0a, 0x00, 0x00, 0x8a, // 2..6b...........
	0x00, 0x00, 0x00, 0x41, 0x00, 0x05, 0x00, 0xe2, 0x02, 0x00, 0x00, 0x29, 0x2c, 0x00, 0x00, 0x42, // ...A.......),..B
	0x13, 0x00, 0x00, 0x1d, 0x0a, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x65, 0x00, 0x00, 0x00, 0xf3, // .......=...e....
	0x3c, 0x00, 0x00, 0x29, 0x2c, 0x00, 0x00, 0x90, 0x00, 0x05, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x9f, // <..),...........
	0x3b, 0x00, 0x00, 0x84, 0x32, 0x00, 0x00, 0xf3, 0x3c, 0x00, 0x00, 0x41, 0x00, 0x05, 0x00, 0x9a, // ;...2...<..A....
	0x02, 0x00, 0x00, 0x5f, 0x38, 0x00, 0x00, 0x0f, 0x12, 0x00, 0x00, 0x0b, 0x0a, 0x00, 0x00, 0x3e, // ..._8..........>
	0x00, 0x03, 0x00, 0x5f, 0x38, 0x00, 0x00, 0x9f, 0x3b, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x13, // ..._8...;..=....
	0x00, 0x00, 0x00, 0x1d, 0x21, 0x00, 0x00, 0xc4, 0x1d, 0x00, 0x00, 0x41, 0x00, 0x05, 0x00, 0x90, // ....!......A....
	0x02, 0x00, 0x00, 0x2d, 0x3c, 0x00, 0x00, 0x0f, 0x12, 0x00, 0x00, 0x0e, 0x0a, 0x00, 0x00, 0x3e, // ...-<..........>
	0x00, 0x03, 0x00, 0x2d, 0x3c, 0x00, 0x00, 0x1d, 0x21, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x1a, // ...-<...!..=....
	0x04, 0x00, 0x00, 0x47, 0x3a, 0x00, 0x00, 0x0f, 0x12, 0x00, 0x00, 0xfe, 0x00, 0x02, 0x00, 0x47, // ...G:..........G
	0x3a, 0x00, 0x00, 0x38, 0x00, 0x01, 0x00, 0x00,                                                 // :..8....
};
static const uint8_t vs_imgui_image_dx9[284] =
{
	0x56, 0x53, 0x48, 0x05, 0x6f, 0x1e, 0x3e, 0x3c, 0x01, 0x00, 0x0a, 0x75, 0x5f, 0x76, 0x69, 0x65, // VSH.o.><...u_vie
	0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x01, 0x00, 0x00, 0x04, 0x00, 0xfc, 0x00, 0x00, 0x00, 0x00, // wProj...........
	0x03, 0xfe, 0xff, 0xfe, 0xff, 0x20, 0x00, 0x43, 0x54, 0x41, 0x42, 0x1c, 0x00, 0x00, 0x00, 0x53, // ..... .CTAB....S
	0x00, 0x00, 0x00, 0x00, 0x03, 0xfe, 0xff, 0x01, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, // ................
	0x91, 0x00, 0x00, 0x4c, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x04, // ...L...0........
	0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x76, 0x69, 0x65, // ...<.......u_vie
	0x77, 0x50, 0x72, 0x6f, 0x6a, 0x00, 0xab, 0x03, 0x00, 0x03, 0x00, 0x04, 0x00, 0x04, 0x00, 0x01, // wProj...........
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x76, 0x73, 0x5f, 0x33, 0x5f, 0x30, 0x00, 0x4d, 0x69, // .......vs_3_0.Mi
	0x63, 0x72, 0x6f, 0x73, 0x6f, 0x66, 0x74, 0x20, 0x28, 0x52, 0x29, 0x20, 0x48, 0x4c, 0x53, 0x4c, // crosoft (R) HLSL
	0x20, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x20, 0x43, 0x6f, 0x6d, 0x70, 0x69, 0x6c, 0x65, 0x72, //  Shader Compiler
	0x20, 0x31, 0x30, 0x2e, 0x31, 0x00, 0xab, 0x1f, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x80, 0x00, //  10.1...........
	0x00, 0x0f, 0x90, 0x1f, 0x00, 0x00, 0x02, 0x05, 0x00, 0x00, 0x80, 0x01, 0x00, 0x0f, 0x90, 0x1f, // ................
	0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x0f, 0xe0, 0x1f, 0x00, 0x00, 0x02, 0x05, // ................
	0x00, 0x00, 0x80, 0x01, 0x00, 0x03, 0xe0, 0x05, 0x00, 0x00, 0x03, 0x00, 0x00, 0x0f, 0x80, 0x01, // ................
	0x00, 0xe4, 0xa0, 0x00, 0x00, 0x55, 0x90, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x0f, 0x80, 0x00, // .....U..........
	0x00, 0xe4, 0xa0, 0x00, 0x00, 0x00, 0x90, 0x00, 0x00, 0xe4, 0x80, 0x02, 0x00, 0x00, 0x03, 0x00, // ................
	0x00, 0x0f, 0xe0, 0x00, 0x00, 0xe4, 0x80, 0x03, 0x00, 0xe4, 0xa0, 0x01, 0x00, 0x00, 0x02, 0x01, // ................
	0x00, 0x03, 0xe0, 0x01, 0x00, 0xe4, 0x90, 0xff, 0xff, 0x00, 0x00, 0x00,                         // ............
};
static const uint8_t vs_imgui_image_dx11[475] =
{
	0x56, 0x53, 0x48, 0x05, 0x6f, 0x1e, 0x3e, 0x3c, 0x01, 0x00, 0x0a, 0x75, 0x5f, 0x76, 0x69, 0x65, // VSH.o.><...u_vie
	0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0xb4, 0x01, 0x00, 0x00, 0x44, // wProj..........D
	0x58, 0x42, 0x43, 0x62, 0x0c, 0x7d, 0x32, 0x98, 0x4b, 0xbb, 0x29, 0xce, 0xaa, 0xb2, 0xca, 0x5d, // XBCb.}2.K.)....]
	0xc9, 0x55, 0xf0, 0x01, 0x00, 0x00, 0x00, 0xb4, 0x01, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x2c, // .U.............,
	0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0xd8, 0x00, 0x00, 0x00, 0x49, 0x53, 0x47, 0x4e, 0x4c, // ...........ISGNL
	0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, // ...........8....
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, // ................
	0x03, 0x00, 0x00, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, // ...A............
	0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x50, 0x4f, 0x53, 0x49, 0x54, // ...........POSIT
	0x49, 0x4f, 0x4e, 0x00, 0x54, 0x45, 0x58, 0x43, 0x4f, 0x4f, 0x52, 0x44, 0x00, 0xab, 0xab, 0x4f, // ION.TEXCOORD...O
	0x53, 0x47, 0x4e, 0x50, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x38, // SGNP...........8
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .......D........
	0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x0c, 0x00, 0x00, 0x53, // ...............S
	0x56, 0x5f, 0x50, 0x4f, 0x53, 0x49, 0x54, 0x49, 0x4f, 0x4e, 0x00, 0x54, 0x45, 0x58, 0x43, 0x4f, // V_POSITION.TEXCO
	0x4f, 0x52, 0x44, 0x00, 0xab, 0xab, 0xab, 0x53, 0x48, 0x44, 0x52, 0xd4, 0x00, 0x00, 0x00, 0x40, // ORD....SHDR....@
	0x00, 0x01, 0x00, 0x35, 0x00, 0x00, 0x00, 0x59, 0x00, 0x00, 0x04, 0x46, 0x8e, 0x20, 0x00, 0x00, // ...5...Y...F. ..
	0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x5f, 0x00, 0x00, 0x03, 0x32, 0x10, 0x10, 0x00, 0x00, // ......._...2....
	0x00, 0x00, 0x00, 0x5f, 0x00, 0x00, 0x03, 0x32, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x67, // ..._...2.......g
	0x00, 0x00, 0x04, 0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x65, // .... ..........e
	0x00, 0x00, 0x03, 0x32, 0x20, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x02, 0x01, // ...2 ......h....
	0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x08, 0xf2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x56, // ...8...........V
	0x15, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, // .......F. ......
	0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0a, 0xf2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, // ...2...........F
	0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x10, 0x10, 0x00, 0x00, // . ..............
	0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0xf2, // ...F............
	0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, //  ......F.......F
	0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x05, 0x32, // . .........6...2
	0x20, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x3e, //  ......F.......>
	0x00, 0x00, 0x01, 0x00, 0x02, 0x01, 0x00, 0x10, 0x00, 0x40, 0x00,                               // .........@.
};
static const uint8_t vs_imgui_image_mtl[686] =
{
	0x56, 0x53, 0x48, 0x05, 0x6f, 0x1e, 0x3e, 0x3c, 0x01, 0x00, 0x0a, 0x75, 0x5f, 0x76, 0x69, 0x65, // VSH.o.><...u_vie
	0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x01, 0x00, 0x00, 0x01, 0x00, 0x8e, 0x02, 0x00, 0x00, 0x75, // wProj..........u
	0x73, 0x69, 0x6e, 0x67, 0x20, 0x6e, 0x61, 0x6d, 0x65, 0x73, 0x70, 0x61, 0x63, 0x65, 0x20, 0x6d, // sing namespace m
	0x65, 0x74, 0x61, 0x6c, 0x3b, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, // etal;.struct xla
	0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x49, 0x6e, 0x70, 0x75, 0x74, 0x20, // tMtlShaderInput 
	0x7b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x33, 0x20, 0x61, 0x5f, 0x70, 0x6f, 0x73, // {.  float3 a_pos
	0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x5b, 0x5b, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, // ition [[attribut
	0x65, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x32, // e(0)]];.  float2
	0x20, 0x61, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x20, 0x5b, 0x5b, 0x61, //  a_texcoord0 [[a
	0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x28, 0x31, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x7d, // ttribute(1)]];.}
	0x3b, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, // ;.struct xlatMtl
	0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x20, 0x7b, 0x0a, 0x20, // ShaderOutput {. 
	0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, //  float4 gl_Posit
	0x69, 0x6f, 0x6e, 0x20, 0x5b, 0x5b, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x5d, 0x5d, // ion [[position]]
	0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x32, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, // ;.  float2 v_tex
	0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, // coord0;.};.struc
	0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x55, // t xlatMtlShaderU
	0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, // niform {.  float
	0x34, 0x78, 0x34, 0x20, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x3b, 0x0a, // 4x4 u_viewProj;.
	0x7d, 0x3b, 0x0a, 0x76, 0x65, 0x72, 0x74, 0x65, 0x78, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, // };.vertex xlatMt
	0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x20, 0x78, 0x6c, // lShaderOutput xl
	0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x78, 0x6c, 0x61, 0x74, 0x4d, // atMtlMain (xlatM
	0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x49, 0x6e, 0x70, 0x75, 0x74, 0x20, 0x5f, 0x6d, // tlShaderInput _m
	0x74, 0x6c, 0x5f, 0x69, 0x20, 0x5b, 0x5b, 0x73, 0x74, 0x61, 0x67, 0x65, 0x5f, 0x69, 0x6e, 0x5d, // tl_i [[stage_in]
	0x5d, 0x2c, 0x20, 0x63, 0x6f, 0x6e, 0x73, 0x74, 0x61, 0x6e, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, // ], constant xlat
	0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x55, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, // MtlShaderUniform
	0x26, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x20, 0x5b, 0x5b, 0x62, 0x75, 0x66, 0x66, 0x65, // & _mtl_u [[buffe
	0x72, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x78, 0x6c, 0x61, 0x74, // r(0)]]).{.  xlat
	0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x20, // MtlShaderOutput 
	0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, // _mtl_o;.  float4
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x30, 0x3b, 0x0a, 0x20, //  tmpvar_1 = 0;. 
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x7a, 0x77, 0x20, 0x3d, 0x20, 0x66, //  tmpvar_1.zw = f
	0x6c, 0x6f, 0x61, 0x74, 0x32, 0x28, 0x30, 0x2e, 0x30, 0x2c, 0x20, 0x31, 0x2e, 0x30, 0x29, 0x3b, // loat2(0.0, 1.0);
	0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x78, 0x79, 0x20, 0x3d, // .  tmpvar_1.xy =
	0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x69, 0x2e, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, //  _mtl_i.a_positi
	0x6f, 0x6e, 0x2e, 0x78, 0x79, 0x3b, 0x0a, 0x20, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x2e, // on.xy;.  _mtl_o.
	0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x3d, 0x20, 0x28, 0x5f, // gl_Position = (_
	0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, // mtl_u.u_viewProj
	0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x29, 0x3b, 0x0a, 0x20, 0x20, //  * tmpvar_1);.  
	0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x2e, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, // _mtl_o.v_texcoor
	0x64, 0x30, 0x20, 0x3d, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x69, 0x2e, 0x61, 0x5f, 0x74, 0x65, // d0 = _mtl_i.a_te
	0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, // xcoord0;.  retur
	0x6e, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,             // n _mtl_o;.}...
};
extern const uint8_t* vs_imgui_image_pssl;
extern const uint32_t vs_imgui_image_pssl_size;
