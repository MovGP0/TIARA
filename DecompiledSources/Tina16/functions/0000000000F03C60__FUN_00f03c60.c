/* Ghidra address: 00f03c60 */
/* Ghidra symbol: FUN_00f03c60 */


void FUN_00f03c60(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  longlong local_10;
  
  local_20 = auStack_48;
  local_10 = FUN_004d22d0(&PTR_FUN_00f039e0,1,0);
  *(undefined8 *)(local_10 + 0x78) = param_1;
  FUN_004b8d80(param_2,local_10);
  FUN_00410f20(local_10);
  return;
}

