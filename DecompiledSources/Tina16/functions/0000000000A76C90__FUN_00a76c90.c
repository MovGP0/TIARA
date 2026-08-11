/* Ghidra address: 00a76c90 */
/* Ghidra symbol: FUN_00a76c90 */


longlong * FUN_00a76c90(longlong *param_1,char param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  longlong *local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res8 = param_1;
  puVar2 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar2 = local_20;
  }
  local_20 = puVar2;
  FUN_00652880(local_res8,0,param_3);
  (**(code **)(*local_res8 + 0x3f8))(local_res8,0x4000000000000000);
  (**(code **)(*local_res8 + 0x400))(local_res8,0x4000000000000000);
  (**(code **)(*local_res8 + 0x408))(local_res8,0x4000000000000000);
  (**(code **)(*local_res8 + 0x3f0))(local_res8,0x4000000000000000);
  (**(code **)(*local_res8 + 0x410))(local_res8,2);
  (**(code **)(*local_res8 + 0x418))(local_res8,0x3ff0000000000000);
  (**(code **)(*local_res8 + 0x278))(local_res8,1);
  (**(code **)(*local_res8 + 0x2c8))(local_res8,5);
  (**(code **)(*local_res8 + 0x2d0))(local_res8,10);
  (**(code **)(*local_res8 + 0x288))(local_res8,0xff00000f);
  (**(code **)(*local_res8 + 0x290))(local_res8,0xff000012);
  (**(code **)(*local_res8 + 0x2b0))(local_res8,0xff0000);
  (**(code **)(*local_res8 + 0x270))(local_res8,0xff0000);
  (**(code **)(*local_res8 + 0x428))(local_res8,0x800080);
  (**(code **)(*local_res8 + 0x430))(local_res8,0x32);
  (**(code **)(*local_res8 + 0x2a0))(local_res8,0xc);
  (**(code **)(*local_res8 + 0x298))(local_res8,L"Serif");
  (**(code **)(*local_res8 + 1000))(local_res8,L"Monospace");
  (**(code **)(*local_res8 + 0x2b8))(local_res8,5);
  (**(code **)(*local_res8 + 0x268))(local_res8,1);
  (**(code **)(*local_res8 + 0x2c0))(local_res8,0xfff5);
  lVar1 = local_res8[0x26];
  *(undefined1 *)(lVar1 + 0x21) = 7;
  *(undefined1 *)(lVar1 + 0x20) = 2;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

