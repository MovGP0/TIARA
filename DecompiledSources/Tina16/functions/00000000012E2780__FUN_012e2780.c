/* Ghidra address: 012e2780 */
/* Ghidra symbol: FUN_012e2780 */


undefined1 FUN_012e2780(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_res10 [3];
  undefined1 local_9;
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar1 = FUN_00416db0(local_res10[0],&PTR_DAT_012e2804);
  if (iVar1 != 0) {
    iVar1 = FUN_00416db0(local_res10[0],L"Wrong input number.");
    if (iVar1 != 0) {
      local_9 = 0;
      goto code_r0x012e27cb;
    }
  }
  local_9 = 1;
code_r0x012e27cb:
  FUN_00414480(local_res10);
  return local_9;
}

