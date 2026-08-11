/* Ghidra address: 013d1600 */
/* Ghidra symbol: FUN_013d1600 */


undefined8 FUN_013d1600(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  
  if ((((param_3 < *(int *)(param_1 + 0x24)) || (*(int *)(param_1 + 0x2c) < param_3)) ||
      (param_4 < *(int *)(param_1 + 0x28))) || (*(int *)(param_1 + 0x30) < param_4)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

