/* Ghidra address: 01b83010 */
/* Ghidra symbol: FUN_01b83010 */


undefined8 FUN_01b83010(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_res10 [3];
  undefined8 local_10;
  
  local_10 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00416ba0(&local_10,local_res10[0],L".asy");
  FUN_00414ad0(param_1,local_10);
  iVar1 = FUN_00416db0(local_10,L"cap.asy");
  if (iVar1 != 0) {
    iVar1 = FUN_00416db0(local_10,L"cap2.asy");
    if (iVar1 != 0) goto code_r0x01b8308c;
  }
  FUN_00414ad0(param_1,L"cap.asy");
code_r0x01b8308c:
  FUN_00414480(&local_10);
  FUN_00414480(local_res10);
  return param_1;
}

