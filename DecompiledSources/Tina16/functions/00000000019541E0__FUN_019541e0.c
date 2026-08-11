/* Ghidra address: 019541e0 */
/* Ghidra symbol: FUN_019541e0 */


void FUN_019541e0(longlong param_1,double param_2,double param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (*(double *)(param_1 + 0x80) <= 1.7) {
    if (0.7 < *(double *)(param_1 + 0x80) || *(double *)(param_1 + 0x80) == 0.7) {
      uVar4 = 5;
    }
    else {
      uVar4 = 3;
    }
  }
  else {
    uVar4 = 7;
  }
  iVar3 = 0;
  uVar6 = uVar4;
  if (-1 < (int)(uVar4 - 1)) {
    do {
      iVar1 = FUN_0040c770(param_2 * *(double *)(param_1 + 0x80));
      uVar5 = uVar4 / 2;
      iVar2 = FUN_0040c770(param_3 * *(double *)(param_1 + 0x80),(ulonglong)uVar4 % 2);
      (**(code **)(**(longlong **)(param_1 + 0x78) + 200))
                (*(longlong **)(param_1 + 0x78),iVar1 - uVar5,(iVar2 - uVar5) + iVar3);
      iVar1 = FUN_0040c770(param_2 * *(double *)(param_1 + 0x80));
      iVar2 = FUN_0040c770(param_3 * *(double *)(param_1 + 0x80));
      (**(code **)(**(longlong **)(param_1 + 0x78) + 0xc0))
                (*(longlong **)(param_1 + 0x78),iVar1 + uVar5 + 1,(iVar2 - uVar5) + iVar3);
      iVar3 = iVar3 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}

