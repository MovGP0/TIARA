/* Ghidra address: 0111f380 */
/* Ghidra symbol: FUN_0111f380 */


bool FUN_0111f380(longlong param_1)

{
  int iVar1;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0041ddd0(&local_10,PTR_PTR_02005c50);
  iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0xf8),local_10);
  FUN_00414480(&local_10);
  return iVar1 != 0;
}

