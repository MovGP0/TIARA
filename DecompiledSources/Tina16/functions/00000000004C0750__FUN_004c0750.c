/* Ghidra address: 004c0750 */
/* Ghidra symbol: FUN_004c0750 */


longlong FUN_004c0750(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  longlong local_20 [2];
  
  cVar1 = FUN_004bea50(param_1);
  if (cVar1 == '\x13') {
    FUN_004c23c0(param_1);
    FUN_004bea90(param_1,local_20,8);
  }
  else {
    iVar2 = FUN_004c06c0(param_1);
    local_20[0] = (longlong)iVar2;
  }
  return local_20[0];
}

