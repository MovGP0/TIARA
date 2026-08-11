/* Ghidra address: 01528bb0 */
/* Ghidra symbol: FUN_01528bb0 */


void FUN_01528bb0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_48 [40];
  
  cVar1 = FUN_017d1390(*(undefined8 *)(param_1 + 0x4c0));
  if (cVar1 != '\0') {
    FUN_017dcfd0(*(undefined8 *)(param_1 + 0xd8),0,1);
    FUN_01528790(param_1);
  }
  FUN_0165dc50(*(undefined8 *)(param_1 + 0x110));
  lVar2 = FUN_01d347d0(*(undefined8 *)(param_1 + 0x4c0),0);
  FUN_01b07850(param_1,*(undefined8 *)(param_1 + 0x118),*(undefined8 *)(lVar2 + 8));
  FUN_016f6430(param_1,7,0);
  FUN_017dcfd0(*(undefined8 *)(param_1 + 0xd8),1,1);
  lVar2 = *(longlong *)(param_1 + 0x4c0);
  iVar5 = *(int *)(lVar2 + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      uVar3 = FUN_01d347d0(lVar2,iVar4);
      FUN_01528ac0(auStack_48,uVar3);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}

