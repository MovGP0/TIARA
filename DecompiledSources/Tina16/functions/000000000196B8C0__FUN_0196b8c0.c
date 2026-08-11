/* Ghidra address: 0196b8c0 */
/* Ghidra symbol: FUN_0196b8c0 */


void FUN_0196b8c0(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  *(undefined4 *)(param_1 + 0x180) = param_2;
  (**(code **)(**(longlong **)(param_1 + 400) + 0x90))(*(longlong **)(param_1 + 400));
  if (0 < *(int *)(param_1 + 0x180)) {
    *(double *)(param_1 + 0x188) =
         ((*(double *)(param_1 + 0x238) - *(double *)(param_1 + 0x1a8)) -
         *(double *)(param_1 + 0x1c8)) / (double)*(int *)(param_1 + 0x180);
    while( true ) {
      iVar2 = (**(code **)(**(longlong **)(param_1 + 400) + 0x28))(*(longlong **)(param_1 + 400));
      if (*(int *)(param_1 + 0x180) <= iVar2) break;
      plVar1 = *(longlong **)(param_1 + 400);
      iVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
      FUN_00448430(local_20,(double)iVar2 * *(double *)(param_1 + 0x188));
      (**(code **)(*plVar1 + 0x78))(plVar1,local_20[0]);
    }
  }
  FUN_00414480(local_20);
  return;
}

