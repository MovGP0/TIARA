/* Ghidra address: 010859b0 */
/* Ghidra symbol: FUN_010859b0 */


void FUN_010859b0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_48 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_40 = 0;
  local_20 = 0;
  if (*(char *)(param_1 + 0xb52) == '\0') {
    uVar2 = FUN_019a4600();
    FUN_01ca2f40(*(undefined8 *)PTR_DAT_02004e40,&local_40,uVar2);
    FUN_00441920(&local_38,local_40);
    FUN_00f60ce0(local_30,local_38);
    FUN_00416cd0(&local_20,3,L"breakpoints_",local_30[0],L".txt");
    plVar3 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    (**(code **)(*plVar3 + 0x78))(plVar3,&DAT_01085cb8);
    FUN_010b1130(*(undefined8 *)(param_1 + 0xac8),plVar3);
    iVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
    if (0 < iVar1) {
      FUN_00416cd0(&local_48,3,*(undefined8 *)(param_1 + 0xb40),&LAB_01085cc8,local_20);
      (**(code **)(*plVar3 + 0x100))(plVar3,local_48);
    }
    FUN_00410f20(plVar3);
    FUN_0108cf00(param_1);
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0xb60));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x4d30));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x4d38));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x4d40));
  FUN_00410f20(*(undefined8 *)(param_1 + 0xbb0));
  FUN_00410f20(*(undefined8 *)(param_1 + 3000));
  FUN_00419430(param_1 + 0x4d18,&DAT_00e02168);
  FUN_00410f20(*(undefined8 *)(param_1 + 0xb70));
  FUN_00410f20(*(undefined8 *)(param_1 + 0xb78));
  FUN_00410f20(*(undefined8 *)(param_1 + 0xba0));
  FUN_00410f20(*(undefined8 *)(param_1 + 0xba8));
  FUN_00410f20(*(undefined8 *)(*(longlong *)(param_1 + 0x7e0) + 0x4e8));
  if (*(longlong *)(param_1 + 0xbf0) != 0) {
    FUN_00410f20(*(longlong *)(param_1 + 0xbf0));
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0xb98));
  if (*(char *)(param_1 + 0xb52) == '\0') {
    _FreeSimulatorObject(*(undefined8 *)(param_1 + 0xb20));
  }
  if (*(longlong *)(param_1 + 0xb28) != 0) {
    _FreeDebugReaderSession(*(undefined8 *)(param_1 + 0xb20),*(longlong *)(param_1 + 0xb28));
  }
  FUN_00414560(&local_48,4);
  FUN_00414480(&local_20);
  return;
}

