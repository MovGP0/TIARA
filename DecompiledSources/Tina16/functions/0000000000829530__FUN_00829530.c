/* Ghidra address: 00829530 */
/* Ghidra symbol: FUN_00829530 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_00829530(longlong *param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *local_res8;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined1 *local_20;
  
  local_20 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  lVar2 = FUN_008276e0(&DAT_00826f30,1);
  local_res8[100] = lVar2;
  *(longlong **)(lVar2 + 0x48) = local_res8;
  *(code **)(lVar2 + 0x40) = FUN_0082a530;
  FUN_0065f0e0(local_res8,0,param_3);
  local_38 = 0x16;
  (**(code **)(*local_res8 + 400))(local_res8,0,0,0x17);
  *(undefined4 *)(local_res8 + 0x14) = 0x82;
  FUN_0064df70(local_res8,1);
  FUN_0064e030(local_res8,0xff00000f);
  *(undefined4 *)((longlong)local_res8 + 0x32c) = 4;
  *(undefined4 *)((longlong)local_res8 + 0x334) = 0xffffffff;
  *(undefined1 *)((longlong)local_res8 + 0x32b) = 0;
  *(undefined1 *)(local_res8 + 0x66) = 1;
  _DAT_01e17890 = _DAT_01e17890 + 1;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

