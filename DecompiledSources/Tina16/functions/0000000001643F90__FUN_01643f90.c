/* Ghidra address: 01643f90 */
/* Ghidra symbol: FUN_01643f90 */


void FUN_01643f90(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  FUN_0043f750(&local_10,param_2);
  FUN_0043f750(&local_18,param_3);
  FUN_0043f750(&local_20,param_4);
  FUN_00416cd0(param_1 + 0x139a8,7,*(undefined8 *)(param_1 + 0x139a8),local_10,&DAT_01644098,
               local_18,&DAT_01644098,local_20,&LAB_016440a8);
  FUN_00414560(&local_20,3);
  return;
}

