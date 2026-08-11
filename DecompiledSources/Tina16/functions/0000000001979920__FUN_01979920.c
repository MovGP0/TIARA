/* Ghidra address: 01979920 */
/* Ghidra symbol: FUN_01979920 */


void FUN_01979920(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  
  iVar1 = FUN_0197d260();
  iVar5 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar2 = FUN_0197d550(param_2,iVar5);
      if (*(longlong *)(lVar2 + 0x40) != 0) {
        lVar2 = FUN_0197d550(param_2,iVar5);
        lVar3 = FUN_0197d550(param_2,iVar5);
        (**(code **)(**(longlong **)(param_1 + 0x38) + 0x80))
                  (*(longlong **)(param_1 + 0x38),*(undefined8 *)(lVar2 + 0x40),
                   *(undefined8 *)(lVar3 + 0x30));
      }
      uVar4 = FUN_0197d550(param_2,iVar5);
      FUN_01979920(param_1,uVar4);
      iVar5 = iVar5 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

