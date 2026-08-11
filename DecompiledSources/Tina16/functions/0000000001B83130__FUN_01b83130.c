/* Ghidra address: 01b83130 */
/* Ghidra symbol: FUN_01b83130 */


undefined8 FUN_01b83130(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00414ad0(param_1,local_res10[0]);
  iVar1 = FUN_00416db0(local_res10[0],&DAT_01b831d4);
  if (iVar1 != 0) {
    iVar1 = FUN_00416db0(local_res10[0],L"cap2");
    if (iVar1 != 0) goto code_r0x01b83190;
  }
  FUN_00414ad0(param_1,&DAT_01b831d4);
code_r0x01b83190:
  FUN_00414480(local_res10);
  return param_1;
}

