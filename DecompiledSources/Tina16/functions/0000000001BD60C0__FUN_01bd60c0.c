/* Ghidra address: 01bd60c0 */
/* Ghidra symbol: FUN_01bd60c0 */


void FUN_01bd60c0(longlong param_1)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = FUN_01c019a0(param_1);
  if (lVar4 == 0) {
    bVar2 = false;
  }
  else {
    lVar4 = 0;
    if (*(longlong *)(param_1 + 0x558) != 0) {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x558) + -8);
    }
    bVar2 = lVar4 - 1U < 0x8000000000000000;
  }
  if (bVar2) {
    lVar4 = 0;
    if (*(longlong *)(param_1 + 0x558) != 0) {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x558) + -8);
    }
    lVar5 = FUN_01c019a0(param_1);
    if (lVar4 + -1 == (longlong)(*(int *)(*(longlong *)(lVar5 + 0x10) + 0x10) + -1)) {
      lVar4 = FUN_01c019a0(param_1);
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x558) +
                      (longlong)(*(int *)(*(longlong *)(lVar4 + 0x10) + 0x10) + -1) * 4);
      if ((*(int *)(param_1 + 0x9c) + *(int *)(param_1 + 0x504) * -2 < iVar1) &&
         (*(char *)(param_1 + 0x548) == '\0')) {
        uVar3 = (undefined4)CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
      }
      else {
        uVar3 = 0;
      }
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x560),uVar3);
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x568),0 < *(int *)(param_1 + 0x550));
    }
  }
  return;
}

