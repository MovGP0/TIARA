/* Ghidra address: 01c88d90 */
/* Ghidra symbol: FUN_01c88d90 */


void FUN_01c88d90(longlong param_1)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  if ((*(char *)(param_1 + 0x27c1) != '\0') && (*(longlong *)PTR_DAT_02002810 != 0)) {
    FUN_00b8fd60(&local_18,*(undefined8 *)(*(longlong *)PTR_DAT_02002810 + 0x750),2,0,1);
    FUN_00416ba0(&local_10,L" t = ",local_18);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x1550),local_10);
  }
  FUN_00414560(&local_18,2);
  return;
}

