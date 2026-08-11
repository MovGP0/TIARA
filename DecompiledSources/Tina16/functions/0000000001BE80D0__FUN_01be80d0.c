/* Ghidra address: 01be80d0 */
/* Ghidra symbol: FUN_01be80d0 */


longlong * FUN_01be80d0(longlong *param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  longlong *local_res8;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  code *local_30;
  longlong *local_28;
  int local_1c [3];
  
  local_40 = auStack_68;
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar1 = local_40;
  }
  local_40 = puVar1;
  FUN_01be1570(local_res8,0,param_3);
  *(uint *)(local_res8 + 0x14) = *(uint *)(local_res8 + 0x14) | 0x10000;
  FUN_0069fa90(local_res8,0);
  FUN_0069fac0(local_res8,1);
  FUN_0069fae0(local_res8,2);
  thunk_FUN_03e0f7b4(0x100a,0,local_1c,0);
  FUN_0064c650(local_res8,1);
  (**(code **)(*local_res8 + 0x330))(local_res8,local_1c[0] != 0);
  *(undefined1 *)(local_res8 + 0x95) = 0;
  FUN_01c02820(local_res8,1);
  FUN_0064cc50(local_res8,0x1d);
  FUN_0065bce0(local_res8,0);
  *(undefined1 *)((longlong)local_res8 + 0x672) = 1;
  local_28 = local_res8;
  local_30 = FUN_01be9750;
  thunk_FUN_041b2403(*(undefined8 *)(*(longlong *)PTR_DAT_02004030 + 0x2d0),0xb020,0,&local_30);
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

