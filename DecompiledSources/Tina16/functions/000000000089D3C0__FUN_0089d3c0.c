/* Ghidra address: 0089d3c0 */
/* Ghidra symbol: FUN_0089d3c0 */


ushort FUN_0089d3c0(undefined8 param_1,longlong param_2)

{
  ushort uVar1;
  int iVar2;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_10;
  
  local_18 = 0;
  local_10 = 0;
  local_20 = param_2;
  if (param_2 != 0) {
    local_20 = *(longlong *)(param_2 + -8);
  }
  for (; 1 < (int)local_20; local_20._0_4_ = (int)local_20 + -2) {
    uVar1 = FUN_00878390(param_2,local_10);
    local_18 = local_18 + uVar1;
    local_10 = local_10 + 2;
  }
  if (0 < (int)local_20) {
    local_18 = local_18 + *(byte *)(param_2 + local_10);
  }
  iVar2 = (local_18 >> 0x10) + (local_18 & 0xffff);
  local_18._0_2_ = (short)iVar2 + (short)((uint)iVar2 >> 0x10);
  return ~(ushort)local_18;
}

