/* Ghidra address: 01c88e70 */
/* Ghidra symbol: FUN_01c88e70 */


void FUN_01c88e70(longlong param_1)

{
  double dVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  if (*(longlong *)PTR_DAT_020019c8 != 0) {
    dVar1 = *(double *)(*(longlong *)PTR_DAT_020019c8 + 0xd30);
    if (dVar1 < 0.0) {
      dVar1 = 0.0;
    }
    FUN_00b8fd60(&local_18,dVar1,2,0,1);
    FUN_00416ba0(&local_10,L" t = ",local_18);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x1550),local_10);
  }
  FUN_00414560(&local_18,2);
  return;
}

