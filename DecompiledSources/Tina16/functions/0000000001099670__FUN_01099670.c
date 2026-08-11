/* Ghidra address: 01099670 */
/* Ghidra symbol: FUN_01099670 */


bool FUN_01099670(longlong param_1)

{
  int iVar1;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0041ddd0(&local_10,&DAT_01095900);
  iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0xf8),local_10);
  FUN_00414480(&local_10);
  return iVar1 != 0;
}

