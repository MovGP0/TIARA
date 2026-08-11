/* Ghidra address: 0144bab0 */
/* Ghidra symbol: FUN_0144bab0 */


void FUN_0144bab0(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined8 local_38;
  undefined8 local_30;
  
  if (*(char *)(param_2 + 0x92) == '\0') {
    FUN_019b7940(param_2);
    local_38 = 0;
    local_30 = 0;
    iVar1 = FUN_0040c770(*(undefined8 *)(param_2 + 0xd8));
    if (0 < iVar1) {
      puVar2 = &DAT_0210e4f8;
      do {
        FUN_00c44500(&local_38,puVar2,&local_38);
        puVar2 = puVar2 + 0x10;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    *param_1 = local_38;
    param_1[1] = local_30;
  }
  return;
}

