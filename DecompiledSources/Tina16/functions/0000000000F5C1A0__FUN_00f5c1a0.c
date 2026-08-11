/* Ghidra address: 00f5c1a0 */
/* Ghidra symbol: FUN_00f5c1a0 */


void FUN_00f5c1a0(undefined8 param_1,undefined8 param_2)

{
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  undefined1 *local_60;
  undefined1 local_58 [64];
  
  FUN_016ebb00(param_1,1,local_58,0x40);
  FUN_016ee260(param_1,&local_60,0x58,0);
  *local_60 = 1;
  *(undefined8 *)(local_60 + 0x50) = 0;
  local_64[0] = 1;
  local_68[0] = 2;
  FUN_00f5b110(param_1,param_2,local_64,local_68,3,4,local_58,local_60);
  FUN_016e9f40(param_1,FUN_00f5c0b0);
  FUN_016e9f50(param_1,FUN_00f5c150);
  return;
}

