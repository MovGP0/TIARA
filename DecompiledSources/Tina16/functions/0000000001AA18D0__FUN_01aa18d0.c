/* Ghidra address: 01aa18d0 */
/* Ghidra symbol: FUN_01aa18d0 */


void FUN_01aa18d0(char *param_1,int param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 local_3c;
  undefined1 local_38 [40];
  
  if (0 < param_2) {
    puVar1 = local_38;
    iVar2 = param_2;
    do {
      if (*param_1 == '\x01') {
        *puVar1 = 1;
      }
      else {
        *puVar1 = 0;
      }
      puVar1 = puVar1 + 1;
      param_1 = param_1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  param_2 = param_2 + 1;
  if (param_2 < 0x11) {
    puVar1 = local_38 + (longlong)param_2 + -1;
    do {
      *puVar1 = 0;
      param_2 = param_2 + 1;
      puVar1 = puVar1 + 1;
    } while (param_2 != 0x11);
  }
  FUN_01aa0bf0(&local_3c,local_38);
  *param_3 = local_3c;
  return;
}

