/* Ghidra address: 0144df30 */
/* Ghidra symbol: FUN_0144df30 */


void FUN_0144df30(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 local_48;
  undefined8 local_40;
  
  if (*(char *)(param_2 + 0x92) == '\0') {
    FUN_019b7940(param_2);
    iVar1 = FUN_0040c770(*(undefined8 *)(param_2 + 0xd8));
    iVar2 = 1;
    puVar3 = PTR_DAT_02005970;
    if (0 < iVar1) {
      do {
        local_48 = *(undefined8 *)(param_2 + 0xd8 + (longlong)iVar2 * 8);
        local_40 = *(undefined8 *)(param_2 + 0x220 + (longlong)iVar2 * 8);
        FUN_0144dd40(param_1,&local_48,puVar3,param_2);
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + -1;
        puVar3 = puVar3 + 0x10;
      } while (iVar1 != 0);
    }
  }
  return;
}

