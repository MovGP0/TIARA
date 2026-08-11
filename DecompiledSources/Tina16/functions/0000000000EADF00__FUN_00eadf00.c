/* Ghidra address: 00eadf00 */
/* Ghidra symbol: FUN_00eadf00 */


undefined4 FUN_00eadf00(longlong *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong local_res10 [3];
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  local_38 = 0;
  local_40 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  (**(code **)(*param_1 + 0x90))(param_1);
  iVar1 = (**(code **)(*DAT_0202ea68 + 0x28))();
  iVar2 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*DAT_0202ea68 + 0x18))(DAT_0202ea68,&local_40,iVar2);
      FUN_00441920(&local_38,local_40);
      FUN_004414c0(local_30,local_38,0);
      (**(code **)(*param_1 + 0x78))(param_1,local_30[0]);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  if (local_res10[0] == 0) {
    local_44 = 0xffffffff;
  }
  else {
    local_44 = (**(code **)(*param_1 + 0xb0))(param_1,local_res10[0]);
  }
  FUN_00414560(&local_40,3);
  FUN_00414480(local_res10);
  return local_44;
}

