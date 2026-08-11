/* Ghidra address: 01571520 */
/* Ghidra symbol: FUN_01571520 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01571520(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar1 = FUN_00416db0(local_res10[0],L"PIC2_11");
  if (iVar1 == 0) {
    _DAT_0210ee70 = 1;
  }
  FUN_00416ba0(param_1 + 0x10,0,local_res10[0]);
  FUN_00414480(local_res10);
  return;
}

