/* Ghidra address: 018abf10 */
/* Ghidra symbol: FUN_018abf10 */


void FUN_018abf10(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_48 [40];
  longlong *local_20;
  
  lVar4 = 0;
  lVar2 = (**(code **)(*param_1 + 0x268))(param_1);
  if (lVar2 != 0) {
    uVar3 = (**(code **)(*param_1 + 0x268))(param_1);
    lVar4 = FUN_0196f540(uVar3);
  }
  FUN_006df690(*(undefined8 *)(*(longlong *)(param_1[0xa0] + 0x4e8) + 0x550));
  FUN_006ded30(*(undefined8 *)(*(longlong *)(param_1[0xa0] + 0x4e8) + 0x550));
  if (lVar4 != 0) {
    uVar3 = (**(code **)(*param_1 + 0x268))(param_1);
    lVar2 = FUN_0196f540(uVar3);
    local_20 = *(longlong **)(lVar2 + 0x18);
    (**(code **)(*local_20 + 0x40))(local_20);
    FUN_018abde0(auStack_48,0);
    lVar2 = (**(code **)(*param_1 + 0x268))(param_1);
    if (*(char *)(*(longlong *)(lVar2 + 0x220) + 0x12) != '\0') {
      FUN_006e23c0(*(undefined8 *)(param_1[0xa0] + 0x4e8));
    }
    iVar1 = FUN_006decb0(*(undefined8 *)(*(longlong *)(param_1[0xa0] + 0x4e8) + 0x550));
    if (0 < iVar1) {
      lVar2 = *(longlong *)(param_1[0xa0] + 0x4e8);
      uVar3 = FUN_006df500(*(undefined8 *)(lVar2 + 0x550),0);
      FUN_006e24b0(lVar2,uVar3);
    }
  }
  FUN_006df710(*(undefined8 *)(*(longlong *)(param_1[0xa0] + 0x4e8) + 0x550));
  return;
}

