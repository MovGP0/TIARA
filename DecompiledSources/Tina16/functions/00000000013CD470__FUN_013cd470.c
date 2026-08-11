/* Ghidra address: 013cd470 */
/* Ghidra symbol: FUN_013cd470 */


void FUN_013cd470(longlong param_1)

{
  undefined8 local_20 [2];
  
  FUN_00414ad0(param_1 + 0x8a0,*(undefined8 *)PTR_DAT_020044f0);
  local_20[0] = FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_00f1e090(local_20);
  FUN_013ca610(param_1,local_20[0]);
  FUN_013cab80(param_1,0);
  FUN_00410f20(local_20[0]);
  return;
}

