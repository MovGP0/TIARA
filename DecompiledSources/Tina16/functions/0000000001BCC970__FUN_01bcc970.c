/* Ghidra address: 01bcc970 */
/* Ghidra symbol: FUN_01bcc970 */


void FUN_01bcc970(longlong param_1)

{
  char cVar1;
  short sVar2;
  
  FUN_0065a1e0(param_1);
  cVar1 = FUN_00781870();
  if (cVar1 != '\0') {
    cVar1 = FUN_01bcaba0(param_1);
    if (cVar1 != '\0') {
      sVar2 = FUN_00ddeff0(param_1,0x192);
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x590),sVar2 != 0);
      sVar2 = FUN_00ddeff0(param_1,0x192);
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x598),sVar2 != 0);
      sVar2 = FUN_00ddeff0(param_1,0x192);
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x5a0),sVar2 != 0);
      sVar2 = FUN_00ddeff0(param_1,0x192);
      if (sVar2 != 0) {
        FUN_01bcb060(param_1);
      }
    }
  }
  return;
}

