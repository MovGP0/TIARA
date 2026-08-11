/* Ghidra address: 0187a4d0 */
/* Ghidra symbol: FUN_0187a4d0 */


bool FUN_0187a4d0(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *local_res10 [3];
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  local_38 = 0;
  local_res10[0] = param_2;
  FUN_0041b910(param_2);
  iVar2 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
  uVar3 = (**(code **)(*local_res10[0] + 0x40))(local_res10[0]);
  (**(code **)(*local_res10[0] + 0x30))(local_res10[0],local_30);
  (**(code **)(*local_res10[0] + 0x38))(local_res10[0],&local_38);
  uVar4 = (**(code **)(*local_res10[0] + 0x20))(local_res10[0]);
  FUN_0187ba20(param_1,uVar3,local_30[0],local_38,param_3,param_4,uVar4,1);
  iVar1 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
  FUN_00414560(&local_38,2);
  FUN_0041b800(local_res10);
  return iVar2 != iVar1;
}

