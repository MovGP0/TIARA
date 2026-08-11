/* Ghidra address: 00596440 */
/* Ghidra symbol: FUN_00596440 */


void FUN_00596440(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = FUN_00596c80(param_1);
  if (iVar2 < 0) {
    FUN_004185d0(param_3,**(undefined8 **)(param_1[2] + 6 + (ulonglong)*(byte *)(param_1[2] + 1)),1)
    ;
  }
  else {
    lVar1 = param_1[2] + (ulonglong)*(byte *)(param_1[2] + 1);
    FUN_004185b0(param_3,*param_1 + (longlong)iVar2 * (longlong)*(int *)(lVar1 + 2),
                 **(undefined8 **)(lVar1 + 6),1);
    FUN_00599740(param_1,iVar2,3);
  }
  return;
}

