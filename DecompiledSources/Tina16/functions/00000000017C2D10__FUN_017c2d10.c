/* Ghidra address: 017c2d10 */
/* Ghidra symbol: FUN_017c2d10 */


void FUN_017c2d10(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 local_res10 [2];
  undefined4 local_res18;
  
  local_res10[0] = param_2;
  local_res18 = param_3;
  cVar2 = FUN_017c2b80(param_1,local_res10);
  if (cVar2 != '\0') {
    uVar1 = FUN_00b95a80(local_res18);
    FUN_004aec30(*(undefined8 *)(param_1 + 0x2d0),local_res10[0],uVar1);
  }
  FUN_017c2bc0(param_1);
  return;
}

