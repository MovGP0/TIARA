/* Ghidra address: 00a68aa0 */
/* Ghidra symbol: FUN_00a68aa0 */


void FUN_00a68aa0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [40];
  undefined1 *local_10;
  
  local_10 = auStack_38;
  *(undefined8 *)(param_1 + 8) = param_2;
  *(undefined8 *)(param_1 + 0x28) = param_3;
  FUN_00414480(param_1 + 0x18);
  FUN_00a633b0(param_1,&LAB_00a68b50,&LAB_00a68b50);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}

