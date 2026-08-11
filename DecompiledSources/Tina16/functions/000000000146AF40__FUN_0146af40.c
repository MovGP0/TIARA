/* Ghidra address: 0146af40 */
/* Ghidra symbol: FUN_0146af40 */


void FUN_0146af40(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x8e0) + 0x90) + 0xa0);
  (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x6e8) + 0x4d8));
  lVar2 = *(longlong *)(param_1 + 0x6f8);
  iVar4 = FUN_01d1bfb0(*(undefined8 *)(*(longlong *)(param_1 + 0x8e0) + 0x90),
                       *(undefined8 *)(lVar2 + 0x310));
  FUN_0064cc50(lVar2,iVar4 + 10);
  lVar2 = *(longlong *)(param_1 + 0x6f8);
  iVar4 = FUN_01d1b660(*(undefined8 *)(*(longlong *)(param_1 + 0x8e0) + 0x90),
                       *(undefined8 *)(lVar2 + 0x310));
  FUN_0064cbf0(lVar2,iVar4 + 10);
  FUN_01d1c9b0(*(undefined8 *)(*(longlong *)(param_1 + 0x8e0) + 0x90));
  uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x8e0) + 0x90);
  uVar5 = FUN_01d12340(uVar3);
  uVar6 = FUN_01d12340(*(undefined8 *)(*(longlong *)(param_1 + 0x8e0) + 0x90));
  FUN_01d1c9d0(uVar3,*(undefined8 *)(*(longlong *)(param_1 + 0x6f8) + 0x310),0,uVar5,uVar6);
  return;
}

