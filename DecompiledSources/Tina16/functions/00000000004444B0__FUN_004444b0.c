/* Ghidra address: 004444b0 */
/* Ghidra symbol: FUN_004444b0 */


undefined8 FUN_004444b0(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  
  if ((param_2 < *(int *)(param_1 + 0x16c)) && (*(char *)(param_1 + 0x16b) != 'S')) {
    param_2 = *(int *)(param_1 + 0x16c);
  }
  if ((*(int *)(param_1 + 0x164) != 0) && (param_2 + param_3 < *(int *)(param_1 + 0x164))) {
    iVar1 = param_2 + param_3 + 1;
    if (iVar1 <= *(int *)(param_1 + 0x164)) {
      iVar1 = (*(int *)(param_1 + 0x164) - iVar1) + 1;
      do {
        if (*(int *)(param_1 + 0x160) == 0) {
          return 1;
        }
        **(undefined1 **)(param_1 + 0x158) = 0x20;
        *(longlong *)(param_1 + 0x158) = *(longlong *)(param_1 + 0x158) + 1;
        *(int *)(param_1 + 0x160) = *(int *)(param_1 + 0x160) + -1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return 0;
}

