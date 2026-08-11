/* Ghidra address: 017c2da0 */
/* Ghidra symbol: FUN_017c2da0 */


void FUN_017c2da0(longlong param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 local_res10 [6];
  
  local_res10[0] = param_2;
  cVar1 = FUN_017c2b80(param_1,local_res10);
  if (cVar1 != '\0') {
    FUN_004ae870(*(undefined8 *)(param_1 + 0x2d0),local_res10[0]);
  }
  FUN_017c2bc0(param_1);
  return;
}

