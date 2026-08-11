/* Ghidra address: 0123ba50 */
/* Ghidra symbol: FUN_0123ba50 */


void FUN_0123ba50(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 local_10;
  
  local_10 = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x600);
  *(undefined2 *)((longlong)puVar1 + 0x1fa4) = *(undefined2 *)((longlong)param_2 + 0x1fa4);
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  puVar1[2] = param_2[2];
  puVar1[3] = param_2[3];
  puVar1[4] = param_2[4];
  puVar1[5] = param_2[5];
  puVar1[6] = param_2[6];
  puVar1[7] = param_2[7];
  *(undefined1 *)(puVar1 + 0x3f9) = *(undefined1 *)(param_2 + 0x3f9);
  *(undefined1 *)((longlong)puVar1 + 0x1fc9) = *(undefined1 *)((longlong)param_2 + 0x1fc9);
  *(undefined4 *)((longlong)puVar1 + 0x1fcc) = *(undefined4 *)((longlong)param_2 + 0x1fcc);
  *(undefined1 *)((longlong)puVar1 + 0x1fca) = *(undefined1 *)((longlong)param_2 + 0x1fca);
  FUN_00416ba0(&local_10,*(undefined8 *)(param_1 + 0x48),L"filter_first_o_LB.TSC");
  cVar2 = FUN_00440a20(local_10,1);
  if (cVar2 == '\0') {
    uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Filter error: filter templates not installed");
    FUN_004134c0(uVar3);
  }
  FUN_00414480(&local_10);
  return;
}

