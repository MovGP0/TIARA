/* Ghidra address: 009b0360 */
/* Ghidra symbol: FUN_009b0360 */


undefined8 FUN_009b0360(longlong param_1,undefined8 param_2,uint param_3)

{
  if (*(uint *)(param_1 + 0x10) <= param_3) {
    FUN_00594f90();
  }
  FUN_00417c40(param_2,*(longlong *)(param_1 + 8) + (longlong)(int)param_3 * 0x18,&DAT_009428e8);
  return param_2;
}

