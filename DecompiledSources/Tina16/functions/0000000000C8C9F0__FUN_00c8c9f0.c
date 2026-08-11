/* Ghidra address: 00c8c9f0 */
/* Ghidra symbol: FUN_00c8c9f0 */


void FUN_00c8c9f0(undefined8 param_1,int param_2)

{
  int iVar1;
  char cVar2;
  
  cVar2 = FUN_00c8c9b0(param_1);
  if (cVar2 == '\0') {
    FUN_008766a0(param_2);
  }
  else {
    for (; *(int *)(DAT_01ea9398 + 0x7c) < param_2; param_2 = param_2 - iVar1) {
      FUN_008766a0(*(int *)(DAT_01ea9398 + 0x7c));
      iVar1 = *(int *)(DAT_01ea9398 + 0x7c);
      FUN_00c8c8a0(param_1,1,0);
    }
    FUN_008766a0(param_2);
    FUN_00c8c8a0(param_1,1,0);
  }
  return;
}

