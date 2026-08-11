/* Ghidra address: 00bc2110 */
/* Ghidra symbol: FUN_00bc2110 */


undefined8 FUN_00bc2110(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  if (((param_2 < *(int *)(param_1 + 0x128)) &&
      (*(short *)(*(longlong *)(param_1 + 0x120) + (longlong)param_2 * 2) != 10)) &&
     (*(short *)(*(longlong *)(param_1 + 0x120) + (longlong)param_2 * 2) != 0xd)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

