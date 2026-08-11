/* Ghidra address: 00743210 */
/* Ghidra symbol: FUN_00743210 */


void FUN_00743210(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  longlong local_30;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  local_30 = 0;
  if (*(char *)((longlong)param_1 + 0x4a5) == '\0') {
    if ((char)param_1[0x95] != '\0') {
      FUN_0064dd90(param_1,&local_30);
      if (local_30 != 0) goto LAB_00743258;
    }
    iVar2 = (int)param_1[0x94];
    if (*(char *)((longlong)param_1 + 0x49a) != '\0') {
      iVar2 = iVar2 + *(int *)((longlong)param_1 + 0x49c);
    }
    if (*(char *)((longlong)param_1 + 0x49b) != '\0') {
      iVar2 = iVar2 + *(int *)((longlong)param_1 + 0x49c);
    }
    if (0 < iVar2) {
      local_20 = (int)param_1[0x13];
      local_1c = *(int *)((longlong)param_1 + 0x9c);
      if (*(int *)(*(longlong *)(param_2 + 0x10) + 0x18) != local_20) {
        local_24 = 0;
        local_28 = (local_20 - iVar2) + -1;
        uVar1 = FUN_0065b870(param_1);
        thunk_FUN_03a2fc9d(uVar1,&local_28,0xffffffff);
      }
      if (*(int *)(*(longlong *)(param_2 + 0x10) + 0x1c) != local_1c) {
        local_28 = 0;
        local_24 = (local_1c - iVar2) + -1;
        uVar1 = FUN_0065b870(param_1);
        thunk_FUN_03a2fc9d(uVar1,&local_28,0xffffffff);
      }
    }
  }
  else {
LAB_00743258:
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  FUN_00658560(param_1,param_2);
  FUN_00414480(&local_30);
  return;
}

