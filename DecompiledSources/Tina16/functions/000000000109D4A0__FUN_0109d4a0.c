/* Ghidra address: 0109d4a0 */
/* Ghidra symbol: FUN_0109d4a0 */


void FUN_0109d4a0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 local_res10 [3];
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar1 = FUN_006d5120(*(undefined8 *)(param_1 + 0x878));
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x9d8) + 0xb0))
                    (*(longlong **)(param_1 + 0x9d8),local_res10[0]);
  if (iVar2 == -1) {
    (**(code **)(**(longlong **)(param_1 + 0x9d8) + 0x78))
              (*(longlong **)(param_1 + 0x9d8),local_res10[0]);
    FUN_010b2e30(*(undefined8 *)(param_1 + 0x1650),local_res10[0]);
    plVar3 = (longlong *)FUN_006d6380(*(undefined8 *)(param_1 + 0x878));
    FUN_00441920(local_30,local_res10[0]);
    (**(code **)(*plVar3 + 0x78))(plVar3,local_30[0]);
    plVar3 = (longlong *)FUN_006d6380(*(undefined8 *)(param_1 + 0x878));
    iVar2 = (**(code **)(*plVar3 + 0x28))(plVar3);
    iVar2 = iVar2 + -1;
    (**(code **)(**(longlong **)(param_1 + 0x878) + 0x278))(*(longlong **)(param_1 + 0x878),iVar2);
    iVar1 = -1;
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x878) + 0x278))(*(longlong **)(param_1 + 0x878),iVar2);
  }
  if (iVar2 != iVar1) {
    FUN_0109ce70(param_1,local_res10[0],0);
  }
  FUN_00414480(local_30);
  FUN_00414480(local_res10);
  return;
}

