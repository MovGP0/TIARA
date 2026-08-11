/* Ghidra address: 007064b0 */
/* Ghidra symbol: FUN_007064b0 */


void FUN_007064b0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 local_20;
  
  local_20 = 0;
  lVar2 = FUN_006a35d0(*(undefined8 *)(param_1 + 0x40),param_3);
  FUN_00414b50(&local_20,*(undefined8 *)(lVar2 + 0x20));
  plVar3 = (longlong *)FUN_006a35d0(*(undefined8 *)(param_1 + 0x40),param_3);
  lVar2 = FUN_006a35d0(*(undefined8 *)(param_1 + 0x40),param_2);
  (**(code **)(*plVar3 + 0x48))(plVar3,*(undefined8 *)(lVar2 + 0x20));
  plVar3 = (longlong *)FUN_006a35d0(*(undefined8 *)(param_1 + 0x40),param_2);
  (**(code **)(*plVar3 + 0x48))(plVar3,local_20);
  lVar2 = FUN_006a35d0(*(undefined8 *)(param_1 + 0x40),param_3);
  uVar1 = *(undefined4 *)(lVar2 + 0x30);
  plVar3 = (longlong *)FUN_006a35d0(*(undefined8 *)(param_1 + 0x40),param_3);
  lVar2 = FUN_006a35d0(*(undefined8 *)(param_1 + 0x40),param_2);
  (**(code **)(*plVar3 + 0x58))(plVar3,*(undefined4 *)(lVar2 + 0x30));
  plVar3 = (longlong *)FUN_006a35d0(*(undefined8 *)(param_1 + 0x40),param_2);
  (**(code **)(*plVar3 + 0x58))(plVar3,uVar1);
  lVar2 = FUN_006a35d0(*(undefined8 *)(param_1 + 0x40),param_3);
  uVar1 = *(undefined4 *)(lVar2 + 0x38);
  plVar3 = (longlong *)FUN_006a35d0(*(undefined8 *)(param_1 + 0x40),param_3);
  lVar2 = FUN_006a35d0(*(undefined8 *)(param_1 + 0x40),param_2);
  (**(code **)(*plVar3 + 0x68))(plVar3,*(undefined4 *)(lVar2 + 0x38));
  plVar3 = (longlong *)FUN_006a35d0(*(undefined8 *)(param_1 + 0x40),param_2);
  (**(code **)(*plVar3 + 0x68))(plVar3,uVar1);
  lVar2 = FUN_006a35d0(*(undefined8 *)(param_1 + 0x40),param_3);
  uVar1 = *(undefined4 *)(lVar2 + 0x3c);
  plVar3 = (longlong *)FUN_006a35d0(*(undefined8 *)(param_1 + 0x40),param_3);
  lVar2 = FUN_006a35d0(*(undefined8 *)(param_1 + 0x40),param_2);
  (**(code **)(*plVar3 + 0x60))(plVar3,*(undefined4 *)(lVar2 + 0x3c));
  plVar3 = (longlong *)FUN_006a35d0(*(undefined8 *)(param_1 + 0x40),param_2);
  (**(code **)(*plVar3 + 0x60))(plVar3,uVar1);
  FUN_00414480(&local_20);
  return;
}

