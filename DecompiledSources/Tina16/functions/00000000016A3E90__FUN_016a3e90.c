/* Ghidra address: 016a3e90 */
/* Ghidra symbol: FUN_016a3e90 */


void FUN_016a3e90(longlong param_1,undefined8 param_2,byte *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  byte *pbVar4;
  undefined8 local_res10 [3];
  undefined8 local_130 [2];
  undefined8 local_120;
  byte local_118 [256];
  
  local_130[0] = 0;
  local_120 = 0;
  lVar3 = (ulonglong)*param_3 + 1;
  pbVar4 = local_118;
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pbVar4 = *param_3;
    param_3 = param_3 + 1;
    pbVar4 = pbVar4 + 1;
  }
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_016a36e0(param_1,local_res10,local_118,0xffffffff);
  plVar1 = *(longlong **)(param_1 + 0x228);
  if (plVar1 != (longlong *)0x0) {
    iVar2 = (**(code **)(*plVar1 + 0xb0))(plVar1,local_res10[0]);
    if (iVar2 == -1) {
      FUN_0043f750(local_130,*(int *)(param_1 + 0x244) - *(int *)(param_1 + 0x240));
      FUN_00416cd0(&local_120,4,&DAT_016a3ff0,local_130[0],L") Hint: ",local_res10[0]);
      (**(code **)(**(longlong **)(param_1 + 0x228) + 0x78))
                (*(longlong **)(param_1 + 0x228),local_120);
    }
  }
  FUN_00414480(local_130);
  FUN_00414480(&local_120);
  FUN_00414480(local_res10);
  return;
}

