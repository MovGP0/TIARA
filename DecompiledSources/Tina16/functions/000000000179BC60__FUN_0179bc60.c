/* Ghidra address: 0179bc60 */
/* Ghidra symbol: FUN_0179bc60 */


undefined8 FUN_0179bc60(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 local_res18 [2];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_30 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  iVar2 = 0;
  do {
    iVar2 = iVar2 + 1;
    FUN_0043f750(&local_28,iVar2);
    FUN_00416cd0(local_20,3,local_res18[0],&DAT_0179bd8c,local_28);
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0xd08) + 0xb0))
                      (*(longlong **)(param_1 + 0xd08),local_20[0]);
  } while (-1 < iVar1);
  FUN_0043f750(&local_30,iVar2);
  FUN_00416cd0(param_2,3,local_res18[0],&DAT_0179bd8c,local_30);
  FUN_00414560(&local_30,3);
  FUN_00414480(local_res18);
  return param_2;
}

