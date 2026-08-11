/* Ghidra address: 00b10a60 */
/* Ghidra symbol: FUN_00b10a60 */


undefined1 FUN_00b10a60(longlong *param_1)

{
  undefined1 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong local_28;
  longlong local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  plVar3 = (longlong *)FUN_00b11070(param_1);
  iVar2 = (**(code **)(*plVar3 + 0x28))(plVar3);
  if (*(int *)((longlong)param_1 + 0x4ac) - (int)param_1[0x98] < iVar2) {
    (**(code **)(*param_1 + 0x2d8))(param_1,local_20,0,*(undefined4 *)((longlong)param_1 + 0x4ac));
    if (local_20[0] == 0) {
      (**(code **)(*param_1 + 0x2d8))
                (param_1,&local_28,1,*(undefined4 *)((longlong)param_1 + 0x4ac));
      if (local_28 == 0) {
        uVar1 = 1;
        goto LAB_00b10b01;
      }
    }
  }
  uVar1 = 0;
LAB_00b10b01:
  FUN_00414560(&local_28,2);
  return uVar1;
}

