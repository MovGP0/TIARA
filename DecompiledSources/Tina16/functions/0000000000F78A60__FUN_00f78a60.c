/* Ghidra address: 00f78a60 */
/* Ghidra symbol: FUN_00f78a60 */


undefined1 FUN_00f78a60(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined1 local_39;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  local_39 = 0;
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x90) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x90),iVar2);
      if (*(char *)(lVar1 + 0x30) != '\n') {
        FUN_00f6f640(lVar1,local_30);
      }
      if ((*(char *)(lVar1 + 0x108) == '\0') && (*(char *)(lVar1 + 0x30) != '\n')) {
        local_39 = 1;
        break;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00414480(local_30);
  return local_39;
}

