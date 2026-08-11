/* Ghidra address: 010b97e0 */
/* Ghidra symbol: FUN_010b97e0 */


bool FUN_010b97e0(longlong param_1)

{
  bool bVar1;
  undefined8 local_18;
  longlong local_10;
  
  local_10 = 0;
  local_18 = 0;
  FUN_004169a0(&local_18,param_1 + 0x82);
  FUN_0043ea00(&local_10,local_18);
  bVar1 = local_10 != 0;
  FUN_00414560(&local_18,2);
  return bVar1;
}

