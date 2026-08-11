/* Ghidra address: 0144bb40 */
/* Ghidra symbol: FUN_0144bb40 */


void FUN_0144bb40(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 local_38;
  undefined8 local_30;
  
  FUN_019b7940(param_1);
  if (*(char *)(param_1 + 0x92) == '\0') {
    iVar1 = FUN_0040c770(*(undefined8 *)(param_1 + 0xd8));
    iVar2 = 1;
    if (0 < iVar1) {
      puVar3 = &DAT_0210e4f8;
      do {
        local_38 = *(undefined8 *)(param_1 + 0xd8 + (longlong)iVar2 * 8);
        local_30 = *(undefined8 *)(param_1 + 0x220 + (longlong)iVar2 * 8);
        FUN_0144b710(&local_38,puVar3,param_1);
        iVar2 = iVar2 + 1;
        puVar3 = puVar3 + 0x10;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return;
}

