/* Ghidra address: 010f0910 */
/* Ghidra symbol: FUN_010f0910 */


undefined8 FUN_010f0910(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  
  if ((((param_3 < *(int *)(param_1 + 0x80)) || (*(int *)(param_1 + 0x88) < param_3)) ||
      (param_4 < *(int *)(param_1 + 0x84))) || (*(int *)(param_1 + 0x8c) < param_4)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

