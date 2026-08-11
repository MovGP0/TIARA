/* Ghidra address: 015695b0 */
/* Ghidra symbol: FUN_015695b0 */


void FUN_015695b0(longlong param_1,longlong *param_2,undefined8 param_3,char param_4)

{
  char cVar1;
  int iVar2;
  undefined8 local_res18 [2];
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_00441640(local_20,local_res18[0]);
  cVar1 = FUN_00b96de0(local_20[0]);
  if (cVar1 == '\0') {
    FUN_00b96df0(local_20[0]);
  }
  (**(code **)(*param_2 + 0x100))(param_2,local_res18[0]);
  if (param_4 != '\0') {
    iVar2 = (**(code **)(*param_2 + 0x28))(param_2);
    *(int *)(param_1 + 0x7e4) = *(int *)(param_1 + 0x7e4) + iVar2;
  }
  FUN_00414480(local_20);
  FUN_00414480(local_res18);
  return;
}

