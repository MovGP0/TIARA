/* Ghidra address: 018aa470 */
/* Ghidra symbol: FUN_018aa470 */


void FUN_018aa470(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 local_res10 [3];
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_28 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  if (*(char *)((longlong)param_1 + 0x531) == '\0') {
    (**(code **)(*param_1 + 0x298))(param_1);
    uVar1 = FUN_0180bfb0();
    FUN_01809b60(uVar1,&local_28,L"clLoading");
    FUN_018a9c30(param_1,local_28);
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x278))(param_1);
    (**(code **)(*plVar2 + 0x150))(plVar2,local_res10[0],0);
    FUN_018a9020(param_1,1);
    FUN_018abf10(param_1);
    (**(code **)(*param_1 + 0x2a0))(param_1,1);
  }
  FUN_00414480(&local_28);
  FUN_00414480(local_res10);
  return;
}

