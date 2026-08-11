/* Ghidra address: 005c6c80 */
/* Ghidra symbol: FUN_005c6c80 */


undefined8 FUN_005c6c80(longlong param_1,undefined8 param_2,uint param_3)

{
  if (*(uint *)(param_1 + 0x10) <= param_3) {
    FUN_00594f90();
  }
  FUN_00417c40(param_2,*(longlong *)(param_1 + 8) + (longlong)(int)param_3 * 0x30,&DAT_005bc4e0);
  return param_2;
}

