/* Ghidra address: 00f02c90 */
/* Ghidra symbol: FUN_00f02c90 */


void FUN_00f02c90(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_30;
  
  local_30 = auStack_58;
  local_38 = 0;
  cVar2 = FUN_004113d0(param_2,&PTR_FUN_00efe9e0);
  if (cVar2 == '\0') {
    FUN_004b1060(param_1,param_2);
  }
  else {
    plVar1 = (longlong *)param_1[1];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x40))(plVar1);
    }
    (**(code **)(*param_1 + 0x78))(param_1);
    if ((*(ushort *)(param_2 + 0x4f) & 1) != 0) {
      uVar3 = FUN_00f03040(param_2);
      FUN_00f03550(param_1,uVar3);
    }
    if ((*(ushort *)(param_2 + 0x4f) & 2) != 0) {
      uVar3 = FUN_00f03220(param_2);
      (**(code **)(*param_1 + 0x68))(param_1,uVar3);
    }
    if ((*(ushort *)(param_2 + 0x4f) & 4) != 0) {
      uVar4 = FUN_00f03060(param_2);
      FUN_00f03580(param_1,uVar4);
    }
    if ((*(ushort *)(param_2 + 0x4f) & 0x200) != 0) {
      uVar3 = FUN_00f03150(param_2);
      (**(code **)(*param_1 + 0x50))(param_1,uVar3);
    }
    if ((*(ushort *)(param_2 + 0x4f) & 0x400) != 0) {
      FUN_00f03180(param_2,&local_38);
      (**(code **)(*param_1 + 0x58))(param_1,local_38);
    }
    if ((*(ushort *)(param_2 + 0x4f) & 8) != 0) {
      uVar3 = FUN_00f03010(param_2);
      (**(code **)(*param_1 + 0x48))(param_1,uVar3);
    }
    if ((*(ushort *)(param_2 + 0x4f) & 0x10) != 0) {
      uVar3 = FUN_00f031f0(param_2);
      (**(code **)(*param_1 + 0x60))(param_1,uVar3);
    }
    FUN_00f03740(param_1,*(undefined8 *)(param_2 + 0x20));
    *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
    FUN_00f03530(param_1,*(undefined1 *)(param_2 + 0x4c));
    uVar4 = FUN_00f031c0(param_2);
    FUN_00f036d0(param_1,uVar4);
    plVar1 = (longlong *)param_1[1];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x48))(plVar1);
    }
  }
  FUN_00414480(&local_38);
  return;
}

