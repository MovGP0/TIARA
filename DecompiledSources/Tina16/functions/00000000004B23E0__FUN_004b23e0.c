/* Ghidra address: 004b23e0 */
/* Ghidra symbol: FUN_004b23e0 */


void FUN_004b23e0(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong local_30 [2];
  
  cVar1 = FUN_004113d0(param_2,param_1[1]);
  if (cVar1 == '\0') {
    FUN_004ae960(&PTR_FUN_00472dd0,PTR_PTR_02003d48,0);
  }
  local_30[0] = param_2;
  FUN_00597e50(param_1[2] + 8,local_30);
  *(longlong **)(param_2 + 8) = param_1;
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)((longlong)param_1 + 0x1c);
  *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + 1;
  (**(code **)(*param_1 + 0x30))(param_1,param_2);
  (**(code **)(*param_1 + 0x28))(param_1,param_2,1);
  FUN_004b1e50(param_1);
  FUN_004b14f0(param_1,param_2,0);
  return;
}

