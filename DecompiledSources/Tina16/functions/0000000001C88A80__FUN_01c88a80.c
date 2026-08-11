/* Ghidra address: 01c88a80 */
/* Ghidra symbol: FUN_01c88a80 */


void FUN_01c88a80(longlong param_1)

{
  char cVar1;
  undefined8 in_RAX;
  
  if (*(char *)(param_1 + 0x27c1) == '\0') {
    *(undefined1 *)(param_1 + 0x27c1) = 1;
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x1550),
                 CONCAT71((int7)((ulonglong)in_RAX >> 8),1) & 0xffffffff);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x1558),0);
    cVar1 = FUN_0153be20();
    if (cVar1 == '\0') {
      *(undefined1 *)(param_1 + 0x27c1) = 0;
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x1550),0);
      FUN_01c87d20(param_1);
    }
  }
  return;
}

