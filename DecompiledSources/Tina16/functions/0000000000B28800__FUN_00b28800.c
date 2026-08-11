/* Ghidra address: 00b28800 */
/* Ghidra symbol: FUN_00b28800 */


void FUN_00b28800(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00b15100(&local_10,param_2);
  iVar1 = FUN_00b19450(*(undefined8 *)(param_1 + 0x10),local_10);
  if (iVar1 < 0) {
    FUN_00b193b0(*(undefined8 *)(param_1 + 0x10),local_10);
  }
  FUN_004144d0(&local_10);
  return;
}

