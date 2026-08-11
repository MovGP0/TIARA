/* Ghidra address: 00ce24b0 */
/* Ghidra symbol: FUN_00ce24b0 */


void FUN_00ce24b0(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 != *(int *)(param_1 + 0x18)) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = 0;
    FUN_00410f20(uVar1);
  }
  *(int *)(param_1 + 0x18) = param_2;
  return;
}

