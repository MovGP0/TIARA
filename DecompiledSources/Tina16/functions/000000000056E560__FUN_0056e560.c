/* Ghidra address: 0056e560 */
/* Ghidra symbol: FUN_0056e560 */


undefined8 FUN_0056e560(longlong param_1,undefined8 param_2,uint param_3)

{
  if (*(uint *)(param_1 + 0x10) <= param_3) {
    FUN_00594f90();
  }
  FUN_00417c40(param_2,*(longlong *)(param_1 + 8) + (longlong)(int)param_3 * 0x10,&DAT_0053cfe0);
  return param_2;
}

