/* Ghidra address: 00bf5400 */
/* Ghidra symbol: FUN_00bf5400 */


void FUN_00bf5400(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  undefined1 local_38 [16];
  
  plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x170) + 0x620);
  (**(code **)(*plVar3 + 0x70))(plVar3,param_2);
  lVar4 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x170) + 0x490) + 0x80);
  uVar1 = *(undefined1 *)(*(longlong *)(lVar4 + 0x18) + 0x38);
  uVar2 = *(undefined4 *)(*(longlong *)(lVar4 + 0x18) + 0x28);
  FUN_005fdcb0(lVar4,0);
  FUN_005fdab0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x170) + 0x490) + 0x80),param_2
              );
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x170) + 0x610);
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x170) + 0x910) - *(int *)(lVar4 + 0x2c);
  FUN_00498350(local_38,iVar5 - *(int *)(lVar4 + 0x6c),param_3,iVar5,param_4);
  plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x170) + 0x490);
  (**(code **)(*plVar3 + 0xa8))(plVar3,local_38);
  FUN_005fdcb0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x170) + 0x490) + 0x80),uVar1);
  FUN_005fdab0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x170) + 0x490) + 0x80),uVar2);
  plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x170) + 0x620);
  (**(code **)(*plVar3 + 0x70))
            (plVar3,*(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x170) + 0x610) + 0x10));
  return;
}

