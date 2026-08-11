/* Ghidra address: 00c54900 */
/* Ghidra symbol: FUN_00c54900 */


undefined8 FUN_00c54900(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  
  if ((param_3 == *(int *)(param_1 + 0xc)) && (param_4 == *(int *)(param_1 + 0x10))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

