/* Ghidra address: 00b8f600 */
/* Ghidra symbol: FUN_00b8f600 */


void FUN_00b8f600(longlong param_1,undefined8 param_2)

{
  undefined1 local_110 [256];
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00415260(param_2,0x14,4,1);
  FUN_00416dc0(&local_10,L"####################",1,*(byte *)(param_1 + 0x40) - 1);
  FUN_00416910(local_110,local_10,0xff);
  FUN_004152c0(local_110,param_2,0x14,4);
  FUN_00414480(&local_10);
  return;
}

