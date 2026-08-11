/* Ghidra address: 01050900 */
/* Ghidra symbol: FUN_01050900 */


undefined1 FUN_01050900(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 *local_40;
  longlong *local_30;
  undefined1 local_19;
  
  local_40 = auStack_78;
  local_19 = 1;
  local_30 = (longlong *)0x0;
  iVar1 = *(int *)(param_1 + 0x9a0);
  if (iVar1 == 4) {
    local_40 = auStack_78;
    local_30 = (longlong *)FUN_01027c00(&PTR_FUN_01027818,1);
  }
  else if (iVar1 == 2) {
    local_40 = auStack_78;
    local_30 = (longlong *)FUN_0103c730(&PTR_FUN_0103c4c8,1);
  }
  else if (iVar1 == 8) {
    local_40 = auStack_78;
    local_30 = (longlong *)FUN_00ff2d40(&PTR_FUN_00ff2748,1);
  }
  else {
    local_30 = (longlong *)FUN_00fd92a0(&PTR_FUN_00fd8e68,1);
  }
  *(undefined4 *)((longlong)local_30 + 0x8d4) = *(undefined4 *)(param_1 + 0x9a0);
  FUN_00414ad0(local_30 + 0x11d,*(undefined8 *)(param_1 + 0x9b0));
  local_58 = *(undefined8 *)(param_1 + 0x9b0);
  FUN_00f792f0(local_30,*(undefined4 *)(param_1 + 0x9a4),*(undefined4 *)(param_1 + 0x9a8),
               *(undefined8 *)(param_1 + 0x9b8));
  FUN_00f79fa0(local_30,*(undefined8 *)(param_1 + 0x970));
  FUN_00f787a0(local_30,*(undefined8 *)(param_1 + 0x980));
  (**(code **)(*local_30 + 8))(local_30);
  uVar3 = FUN_00f79380(local_30);
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x958) + 0x510);
  (**(code **)(*plVar2 + 0x10))(plVar2,uVar3);
  FUN_00410f20(local_30);
  return local_19;
}

