/* Ghidra address: 0046cf00 */
/* Ghidra symbol: FUN_0046cf00 */


void FUN_0046cf00(longlong *param_1,longlong param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  
  bVar2 = false;
  iVar6 = 0;
  if (*param_1 != 0) {
    iVar6 = (int)*(undefined8 *)(*param_1 + -8);
  }
  iVar3 = 0;
  if (iVar6 - 1U < 0x80000000) {
    do {
      if (*(int *)(*param_1 + (longlong)iVar3 * 4) != 0) {
        bVar2 = true;
        break;
      }
      iVar3 = iVar3 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if (bVar2) {
    lVar5 = 0;
    if (*param_1 != 0) {
      lVar5 = *(longlong *)(*param_1 + -8);
    }
    uVar4 = lVar5 - 1;
    iVar6 = (int)uVar4;
    if (-1 < iVar6) {
      if (*(int *)(*param_1 + (longlong)iVar6 * 4) == 0) {
        while( true ) {
          iVar6 = (int)uVar4;
          lVar5 = (longlong)iVar6;
          if (*(int *)(*param_1 + lVar5 * 4) != 0) break;
          *(undefined4 *)(*param_1 + lVar5 * 4) = *(undefined4 *)(param_2 + lVar5 * 4);
          uVar4 = (ulonglong)(iVar6 - 1);
        }
        piVar1 = (int *)(*param_1 + (longlong)iVar6 * 4);
        *piVar1 = *piVar1 + -1;
      }
      else {
        piVar1 = (int *)(*param_1 + (longlong)iVar6 * 4);
        *piVar1 = *piVar1 + -1;
      }
    }
  }
  return;
}

