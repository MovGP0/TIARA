/* Ghidra address: 01331020 */
/* Ghidra symbol: FUN_01331020 */


longlong FUN_01331020(longlong param_1,char param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res8 = param_1;
  puVar1 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  *(undefined2 *)(local_res8 + 0x18) = 0;
  *(undefined2 *)(local_res8 + 0x1a) = 2;
  FUN_00414ad0(local_res8 + 0x20,L"Lx,Cx");
  *(undefined2 *)(local_res8 + 0x28) = 2;
  *(undefined8 *)(local_res8 + 0x30) = 0;
  *(undefined8 *)(local_res8 + 0x38) = 0;
  *(undefined8 *)(local_res8 + 0x40) = 0;
  *(undefined8 *)(local_res8 + 0x48) = 0x3fb999999999999a;
  *(undefined8 *)(local_res8 + 0x50) = 0x3f847ae147ae147b;
  *(undefined8 *)(local_res8 + 0x58) = 0x3f50624dd2f1a9fc;
  *(undefined8 *)(local_res8 + 0x60) = *(undefined8 *)(local_res8 + 0x50);
  *(undefined4 *)(local_res8 + 0x68) = 1000;
  *(undefined8 *)(local_res8 + 0x70) = 0x3ff0000000000000;
  *(undefined8 *)(local_res8 + 0x78) = 0;
  *(undefined8 *)(local_res8 + 0x80) = 0x3f50624dd2f1a9fc;
  *(undefined8 *)(local_res8 + 0x88) = 0;
  *(undefined8 *)(local_res8 + 0x90) = 0x40c3880000000000;
  *(undefined8 *)(local_res8 + 0x98) = 0xc0c3880000000000;
  *(undefined1 *)(local_res8 + 0xa0) = 0;
  *(undefined4 *)(local_res8 + 0xa4) = 0;
  *(undefined4 *)(local_res8 + 0xa8) = 1;
  *(undefined4 *)(local_res8 + 0xac) = 2;
  *(undefined8 *)(local_res8 + 0xb0) = 0;
  *(undefined4 *)(local_res8 + 0xb8) = 1;
  *(undefined8 *)(local_res8 + 0xc0) = 0x3f2a36e2eb1c432d;
  *(undefined8 *)(local_res8 + 200) = 0x3f60624dd2f1a9fc;
  *(undefined8 *)(local_res8 + 0xf8) = 0x3fb999999999999a;
  *(undefined8 *)(local_res8 + 0x100) = 0x3ff0000000000000;
  *(undefined8 *)(local_res8 + 0x108) = 0x3fb999999999999a;
  *(undefined8 *)(local_res8 + 0x110) = 0x3ddb7cdfd9d7bdbb;
  *(undefined8 *)(local_res8 + 0x118) = 0x3e7ad7f29abcaf48;
  *(undefined1 *)(local_res8 + 0x120) = 2;
  *(undefined8 *)(local_res8 + 0xd0) = 0;
  *(undefined8 *)(local_res8 + 0xd8) = 0;
  *(undefined8 *)(local_res8 + 0xe0) = 0;
  *(undefined8 *)(local_res8 + 0xe8) = 0;
  *(undefined1 *)(local_res8 + 0xf0) = 0;
  *(undefined1 *)(local_res8 + 0xf1) = 0;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x130) = uVar2;
  uVar2 = FUN_01330af0(&DAT_01330718,1,local_res8);
  *(undefined8 *)(local_res8 + 0x140) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x138) = uVar2;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

