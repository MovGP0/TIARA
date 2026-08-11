/* Ghidra address: 005debd0 */
/* Ghidra symbol: FUN_005debd0 */


undefined8 FUN_005debd0(longlong param_1,undefined8 param_2,uint param_3)

{
  if (*(uint *)(param_1 + 0x10) <= param_3) {
    FUN_00594f90();
  }
  FUN_00417c40(param_2,*(longlong *)(param_1 + 8) + (longlong)(int)param_3 * 0x10,&DAT_005d3e40);
  return param_2;
}

