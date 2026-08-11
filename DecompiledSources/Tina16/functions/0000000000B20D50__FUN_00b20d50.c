/* Ghidra address: 00b20d50 */
/* Ghidra symbol: FUN_00b20d50 */


undefined1 FUN_00b20d50(longlong param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined1 local_29;
  longlong local_20;
  
  local_20 = 0;
  iVar2 = 0;
  if (param_1 != 0) {
    iVar2 = *(int *)(param_1 + -4);
  }
  if (iVar2 == 0) {
    local_29 = 0;
  }
  else {
    iVar3 = 1;
    FUN_00b15a50(&local_20,param_1);
    *param_2 = 0;
    iVar2 = 0;
    if (local_20 != 0) {
      iVar2 = *(int *)(local_20 + -4);
    }
    if (0 < iVar2) {
      do {
        bVar1 = *(byte *)(local_20 + -1 + (longlong)iVar2);
        if ((bVar1 < 0x41) || (0x5a < bVar1)) {
          local_29 = 0;
          goto LAB_00b20e09;
        }
        *param_2 = *param_2 + iVar3 * (bVar1 - 0x40);
        iVar3 = iVar3 * 0x1a;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    *param_2 = *param_2 + -1;
    local_29 = 1;
  }
LAB_00b20e09:
  FUN_004144d0(&local_20);
  return local_29;
}

