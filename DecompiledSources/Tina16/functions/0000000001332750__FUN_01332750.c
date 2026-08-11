/* Ghidra address: 01332750 */
/* Ghidra symbol: FUN_01332750 */


void FUN_01332750(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x138) + 0x28))();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar2 = (**(code **)(**(longlong **)(param_1 + 0x138) + 0x30))
                        (*(longlong **)(param_1 + 0x138),iVar3);
      if (10000000000.0 < *(double *)(lVar2 + 0x30) || *(double *)(lVar2 + 0x30) == 10000000000.0) {
        FUN_0132dbe0(param_2,iVar3,0);
      }
      else {
        FUN_0132dbe0(param_2,iVar3,*(undefined8 *)(lVar2 + 0x30));
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

