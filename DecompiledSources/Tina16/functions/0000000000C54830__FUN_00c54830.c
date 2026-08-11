/* Ghidra address: 00c54830 */
/* Ghidra symbol: FUN_00c54830 */


void FUN_00c54830(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_28 = *param_3;
  uStack_20 = param_3[1];
  local_30 = *(undefined4 *)(param_1 + 0xc);
  local_2c = *(undefined4 *)(param_1 + 0x10);
  FUN_00b958b0(&local_28,&local_30);
  return;
}

