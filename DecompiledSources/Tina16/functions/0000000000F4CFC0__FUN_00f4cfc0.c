/* Ghidra address: 00f4cfc0 */
/* Ghidra symbol: FUN_00f4cfc0 */


undefined8
FUN_00f4cfc0(undefined8 param_1,longlong param_2,undefined4 param_3,int param_4,undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = 0;
  if (param_4 < 3) {
    FUN_00414480(param_1);
  }
  else {
    puVar1 = (undefined8 *)FUN_01d347d0(*(undefined8 *)(param_2 + 0x4c0),param_3);
    FUN_00b8fec0(&local_10,*puVar1,param_5,0,0x3cd203af9ee75616);
    FUN_00416cd0(param_1,3,L"   (",local_10,&LAB_00f4d0bc);
  }
  FUN_00414480(&local_10);
  return param_1;
}

