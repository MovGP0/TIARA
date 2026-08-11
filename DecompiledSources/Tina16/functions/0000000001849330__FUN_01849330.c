/* Ghidra address: 01849330 */
/* Ghidra symbol: FUN_01849330 */


void FUN_01849330(longlong param_1,byte param_2)

{
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  FUN_00411a80(param_1,param_2);
  FUN_0046f180(&local_30);
  FUN_00461840(param_1 + 0x110,&local_30);
  FUN_01847380(param_1,param_2 & 0xfc);
  FUN_00460ba0(&local_30);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

