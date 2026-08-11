/* Ghidra address: 007e8760 */
/* Ghidra symbol: FUN_007e8760 */


longlong * FUN_007e8760(longlong *param_1,char param_2,undefined8 param_3)

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
  FUN_007e55d0(local_res8,0,param_3);
  *(undefined4 *)(local_res8 + 0x19) = 0xffffffff;
  *(undefined4 *)((longlong)local_res8 + 0xcc) = 0xffffffff;
  lVar1 = local_res8[0x10];
  *(longlong **)(lVar1 + 0x118) = local_res8;
  *(undefined8 *)(lVar1 + 0x110) = *(undefined8 *)(*local_res8 + 0xa0);
  local_res8[0x11] = *(longlong *)(*(longlong *)PTR_DAT_02004030 + 0x2d0);
  *(undefined1 *)((longlong)local_res8 + 0xd1) = 1;
  FUN_007e86e0(DAT_020125c0,local_res8);
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

