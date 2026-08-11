/* Ghidra address: 0108fab0 */
/* Ghidra symbol: FUN_0108fab0 */


bool FUN_0108fab0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 local_res10 [3];
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_30[0] = 0;
  local_38 = 0;
  local_20 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x7d8);
  plVar4 = (longlong *)FUN_006d6380(uVar1);
  uVar2 = FUN_006d5120(uVar1);
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_20,uVar2);
  FUN_0043e1a0(local_30,local_20);
  FUN_0043e1a0(&local_38,local_res10[0]);
  iVar3 = FUN_00416db0(local_30[0],local_38);
  FUN_00414560(&local_38,2);
  FUN_00414480(&local_20);
  FUN_00414480(local_res10);
  return iVar3 == 0;
}

