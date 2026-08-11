/* Ghidra address: 018aaa40 */
/* Ghidra symbol: FUN_018aaa40 */


void FUN_018aaa40(longlong *param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong *local_28;
  longlong local_20;
  
  local_30 = auStack_58;
  if (*(char *)((longlong)param_1 + 0x531) == '\0') {
    plVar3 = (longlong *)(**(code **)(*param_1 + 0x278))(param_1);
    local_20 = (**(code **)(*plVar3 + 8))(plVar3,(int)param_1[0xa5] + -1);
    if (local_20 != 0) {
      local_28 = (longlong *)FUN_0181a5c0(&PTR_FUN_0189ae80,1,*(undefined8 *)PTR_DAT_02004030);
      local_28[0xfa] = local_20;
      lVar4 = (**(code **)(*param_1 + 0x268))(param_1);
      local_28[0xfb] = lVar4;
      iVar2 = (**(code **)(*local_28 + 0x2d0))(local_28);
      if (iVar2 == 1) {
        cVar1 = FUN_0189c150(local_28);
        if (cVar1 == '\0') {
          (**(code **)(*param_1 + 0x298))(param_1);
          plVar3 = (longlong *)(**(code **)(*param_1 + 0x278))(param_1);
          (**(code **)(*plVar3 + 0x108))(plVar3,(int)param_1[0xa5] + -1,local_28[0xfa]);
          (**(code **)(*param_1 + 0x2a0))(param_1,1);
        }
        else {
          FUN_018aa8e0(auStack_58);
          (**(code **)(*param_1 + 0x2a8))(param_1);
        }
      }
      FUN_00410f20(local_28);
    }
  }
  return;
}

