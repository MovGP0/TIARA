/* Ghidra address: 01ce6470 */
/* Ghidra symbol: FUN_01ce6470 */


int FUN_01ce6470(longlong param_1)

{
  int iVar1;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_004168e0(&local_10,*(undefined8 *)(param_1 + 0x60));
  iVar1 = FUN_01d31290(local_10);
  FUN_00414520(&local_10);
  return iVar1 + 0x13;
}

