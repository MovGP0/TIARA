/* Ghidra address: 01303af0 */
/* Ghidra symbol: FUN_01303af0 */


void FUN_01303af0(longlong param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_006dd6f0(param_2);
  lVar3 = FUN_006df500(*(undefined8 *)(*(longlong *)(param_1 + 0x700) + 0x550),uVar1);
  if (((*(uint *)(*(longlong *)(lVar3 + 0x18) + 4) & 0x20) == 0x20) &&
     (*(longlong *)(param_1 + 0xaf8) != 0)) {
    if (param_3 == 0) {
      iVar2 = FUN_006dd6f0(param_2);
      uVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar2 + -1);
      uVar1 = FUN_012e5710(uVar4);
      (**(code **)(**(longlong **)(param_1 + 0x838) + 0x268))(*(longlong **)(param_1 + 0x838),uVar1)
      ;
    }
    else if (param_3 == 1) {
      iVar2 = FUN_006dd6f0(param_2);
      uVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar2 + -1);
      uVar1 = (**(code **)(**(longlong **)(param_1 + 0x838) + 0x260))
                        (*(longlong **)(param_1 + 0x838));
      FUN_012e5700(uVar4,uVar1);
    }
  }
  return;
}

