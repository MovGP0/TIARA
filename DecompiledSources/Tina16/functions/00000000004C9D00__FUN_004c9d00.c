/* Ghidra address: 004c9d00 */
/* Ghidra symbol: FUN_004c9d00 */


void FUN_004c9d00(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00419500(param_2);
  uVar1 = 0;
  if (local_res10[0] != 0) {
    uVar1 = *(undefined8 *)(local_res10[0] + -8);
  }
  FUN_004c3c80(*(undefined8 *)(param_1 + 0x1e0),local_res10[0],uVar1);
  FUN_00419430(local_res10,&DAT_00406578);
  return;
}

