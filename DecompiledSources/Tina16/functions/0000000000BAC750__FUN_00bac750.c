/* Ghidra address: 00bac750 */
/* Ghidra symbol: FUN_00bac750 */


void FUN_00bac750(longlong param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (**(longlong **)(param_1 + 0x60) != 0) {
    iVar2 = *(int *)(**(longlong **)(param_1 + 0x60) + -4);
  }
  uVar1 = FUN_0040c770((double)iVar2 * 1.1 + (double)param_2);
  FUN_004169f0(*(undefined8 *)(param_1 + 0x60),uVar1);
  return;
}

