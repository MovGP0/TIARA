/* Ghidra address: 006d3e20 */
/* Ghidra symbol: FUN_006d3e20 */


ulonglong FUN_006d3e20(undefined4 param_1)

{
  int iVar1;
  undefined8 unaff_RBX;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_20 = 8;
  local_1c = param_1;
  iVar1 = FUN_00611b00(&local_20);
  if (iVar1 == 0) {
    thunk_FUN_041d2dc3();
  }
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),iVar1 != 0) & 0xffffffff;
}

