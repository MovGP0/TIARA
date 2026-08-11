/* Ghidra address: 00f8b5f0 */
/* Ghidra symbol: FUN_00f8b5f0 */


void FUN_00f8b5f0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_38 = 0;
  local_30[0] = 0;
  local_20[0] = 0;
  *(undefined4 *)(param_1 + 0x34a0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x348c) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x33f8) = 1;
  *(undefined4 *)(param_1 + 0x34f8) = 0;
  *(undefined4 *)(param_1 + 0x34fc) = 0;
  FUN_00414480(local_20);
  if (*(int *)(param_1 + 0x3488) == 1) {
    FUN_00f8bba0(param_1,local_30);
    FUN_00416cd0(local_20,3,*(undefined8 *)(param_1 + 0x3508),local_30[0],L".lst");
  }
  else if (*(int *)(param_1 + 0x3488) == 0) {
    FUN_00f8bba0(param_1,&local_38);
    FUN_00416cd0(local_20,3,*(undefined8 *)(param_1 + 0x3508),local_38,L".asm");
  }
  cVar2 = FUN_00440a20(local_20[0],1);
  if (cVar2 == '\0') {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x298))(*(longlong **)(param_1 + 8));
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x510);
    (**(code **)(*plVar1 + 0x78))(plVar1,L"<no program>");
  }
  else {
    FUN_010a8360(*(undefined8 *)(param_1 + 8),local_20[0]);
  }
  FUN_00f8c0d0(param_1,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x34c0),
               *(undefined8 *)(param_1 + 0x34c8),*(undefined8 *)(param_1 + 0x34d0),
               *(undefined4 *)(param_1 + 0x34a0));
  FUN_00414560(&local_38,2);
  FUN_00414480(local_20);
  return;
}

