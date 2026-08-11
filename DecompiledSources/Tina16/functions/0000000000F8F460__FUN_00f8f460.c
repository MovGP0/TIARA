/* Ghidra address: 00f8f460 */
/* Ghidra symbol: FUN_00f8f460 */


void FUN_00f8f460(longlong param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 local_30 [16];
  
  iVar1 = FUN_00f8ed10(param_1,*(undefined8 *)(param_1 + 0x3440));
  FUN_00f8c990(param_1,param_2);
  uVar2 = FUN_00f8ed10(param_1,*(undefined8 *)(param_1 + 0x3440));
  *(undefined4 *)(param_1 + 0x3464) = uVar2;
  if (*(int *)(param_1 + 0x345c) != param_2) {
    *(int *)(param_1 + 0x345c) = param_2;
    (**(code **)(**(longlong **)PTR_DAT_02002ba8 + 0x10))(*(longlong **)PTR_DAT_02002ba8);
    lVar3 = FUN_00f8c610(param_1,local_30);
    *(longlong *)(param_1 + 0x3480) = lVar3;
    uVar2 = FUN_00f8a6f0(param_1,*(undefined4 *)(lVar3 + 0x100));
    *(undefined4 *)(param_1 + 0x3488) = uVar2;
    if (iVar1 != *(int *)(param_1 + 0x3464)) {
      (**(code **)(**(longlong **)(param_1 + 0x3448) + 0x90))(*(longlong **)(param_1 + 0x3448));
      FUN_01608560(*(undefined8 *)(param_1 + 0x3448),*(undefined4 *)(param_1 + 0x3464),
                   *(undefined8 *)(param_1 + 0x34b0));
    }
    FUN_00f8b5f0(param_1);
    FUN_006806a0(*(undefined8 *)(param_1 + 8),0);
  }
  return;
}

