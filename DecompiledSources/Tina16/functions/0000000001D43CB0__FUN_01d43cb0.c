/* Ghidra address: 01d43cb0 */
/* Ghidra symbol: FUN_01d43cb0 */


void FUN_01d43cb0(longlong param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_38 = 0;
  local_30[0] = 0;
  local_20[0] = 0;
  FUN_00414b50(local_20,&DAT_01d43dd8);
  if (*param_3 != '\0') {
    FUN_00414b50(local_20,&DAT_01d43de8);
  }
  (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))
            (*(longlong **)(param_1 + 0x38),local_30,&DAT_01d43df8,param_2,local_20[0]);
  FUN_00414b50(local_20,local_30[0]);
  FUN_0043ea00(&local_38,local_20[0]);
  FUN_00414b50(local_20,local_38);
  iVar1 = FUN_00416db0(local_20[0],&DAT_01d43dd8);
  *param_3 = iVar1 != 0;
  FUN_00414560(&local_38,2);
  FUN_00414480(local_20);
  return;
}

