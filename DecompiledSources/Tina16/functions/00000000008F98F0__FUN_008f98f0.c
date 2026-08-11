/* Ghidra address: 008f98f0 */
/* Ghidra symbol: FUN_008f98f0 */


void FUN_008f98f0(longlong param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = 0;
  if (param_2 < *(int *)(param_1 + 0x10)) {
    FUN_0041ddd0(&local_10,PTR_PTR_02004b80);
    uVar1 = FUN_0044d490(&PTR_FUN_00471608,1,local_10);
    FUN_004134c0(uVar1);
  }
  FUN_00409620(param_1 + 8,(longlong)param_2);
  *(int *)(param_1 + 0x14) = param_2;
  FUN_00414480(&local_10);
  return;
}

