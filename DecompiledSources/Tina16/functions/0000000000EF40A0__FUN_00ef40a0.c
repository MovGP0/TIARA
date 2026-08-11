/* Ghidra address: 00ef40a0 */
/* Ghidra symbol: FUN_00ef40a0 */


void FUN_00ef40a0(undefined8 *param_1,longlong *param_2)

{
  undefined1 local_36 [10];
  ushort local_2c;
  undefined8 local_29;
  
  FUN_01d30f00(*param_1,local_36,0x1d);
  local_29 = 0;
  FUN_00b909a0(param_2,local_2c + 0x1d);
  if (*param_2 != 0) {
    FUN_00409a70(local_36,*param_2,0x1d);
    FUN_01d30f00(*param_1,*param_2 + 0x1d,local_2c);
  }
  return;
}

