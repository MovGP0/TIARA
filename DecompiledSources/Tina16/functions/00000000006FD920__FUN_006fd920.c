/* Ghidra address: 006fd920 */
/* Ghidra symbol: FUN_006fd920 */


void FUN_006fd920(longlong param_1)

{
  char cVar1;
  code *pcVar2;
  
  if ((*(ushort *)(param_1 + 0x34) & 1) == 0) {
    cVar1 = FUN_0065be20(param_1);
    if (cVar1 != '\0') {
      FUN_0064fca0(param_1,0x421,0,0);
      if (*(char *)(param_1 + 0xae) != '\0') {
        pcVar2 = (code *)FUN_00411550(param_1,0xffee);
        (*pcVar2)(param_1);
      }
    }
  }
  return;
}

