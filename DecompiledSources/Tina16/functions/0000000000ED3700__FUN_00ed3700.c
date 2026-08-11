/* Ghidra address: 00ed3700 */
/* Ghidra symbol: FUN_00ed3700 */


void FUN_00ed3700(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined1 local_1c [4];
  
  local_38 = 0;
  local_30[0] = 0;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x7c0),local_30);
  uVar2 = FUN_0040e860(local_30[0],local_1c);
  *(undefined4 *)(param_1 + 0x908) = uVar2;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7c8) + 0x4f0);
  (**(code **)(*plVar1 + 0x90))(plVar1);
  iVar4 = *(int *)(param_1 + 0x908);
  iVar3 = 1;
  if (0 < iVar4) {
    do {
      FUN_0043f750(&local_38,iVar3);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7c8) + 0x4f0);
      (**(code **)(*plVar1 + 0x78))(plVar1,local_38);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00414480(&local_38);
  FUN_00414480(local_30);
  return;
}

