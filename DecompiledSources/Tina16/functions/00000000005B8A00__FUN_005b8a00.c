/* Ghidra address: 005b8a00 */
/* Ghidra symbol: FUN_005b8a00 */


bool FUN_005b8a00(longlong param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  
  while ((0 < *(int *)(param_1 + 0x5c) &&
         (cVar2 = FUN_004321f0(*param_2), (*(char *)(param_1 + 0x5b) == '\x01') != (cVar2 == '\0')))
        ) {
    *param_2 = *param_2 + (longlong)*(char *)(param_1 + 0x5b) * 2;
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -1;
  }
  while ((0 < *(int *)(param_1 + 0x5c) &&
         (cVar2 = FUN_004321f0(*param_2), (*(char *)(param_1 + 0x5b) == -1) != (cVar2 == '\0')))) {
    *param_2 = *param_2 + (longlong)*(char *)(param_1 + 0x5b) * 2;
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -1;
  }
  iVar1 = *(int *)(param_1 + 0x5c);
  if (*(char *)(param_1 + 0x5b) == -1) {
    *param_2 = *param_2 + (longlong)*(char *)(param_1 + 0x5b) * -2;
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
  }
  return 0 < iVar1;
}

