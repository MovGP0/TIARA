/* Ghidra address: 004c0350 */
/* Ghidra symbol: FUN_004c0350 */


float FUN_004c0350(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  float local_1c [3];
  
  cVar1 = FUN_004c23c0(param_1);
  if (cVar1 == '\x0f') {
    FUN_004bea90(param_1,local_1c,4);
  }
  else {
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + -1;
    lVar2 = FUN_004c0750(param_1);
    local_1c[0] = (float)lVar2;
  }
  return local_1c[0];
}

