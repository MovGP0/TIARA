/* Ghidra address: 01aaabb0 */
/* Ghidra symbol: FUN_01aaabb0 */


undefined1 FUN_01aaabb0(longlong param_1,ushort *param_2,byte *param_3)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  
  bVar2 = true;
  while( true ) {
    *param_2 = 1;
    *(undefined1 *)(param_1 + 0x4f) = 0;
    while ((*(char *)(param_1 + 0x4f) == '\0' &&
           (*param_2 <= *(ushort *)(*(longlong *)(param_1 + 0x80) + 0x10)))) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x10 + (ulonglong)*param_2 * 8);
      *(undefined1 *)(param_1 + 0x4f) = 0;
      *param_3 = 1;
      while ((*(char *)(param_1 + 0x4f) == '\0' && (*param_3 <= *(byte *)(lVar1 + 1)))) {
        if ((bVar2) && (*(int *)(param_1 + 0x48) == 0)) {
          bVar3 = *(char *)(lVar1 + 2) == '\0';
        }
        else {
          bVar3 = true;
        }
        *(char *)(param_1 + 0x4f) =
             *(char *)(*(longlong *)(param_1 + 0x40) +
                      (ulonglong)*(ushort *)(lVar1 + 0x4236 + (ulonglong)*param_3 * 2)) == '\0' &
             bVar3;
        *param_3 = *param_3 + 1;
      }
      *param_3 = *param_3 - 1;
      *param_2 = *param_2 + 1;
    }
    *param_2 = *param_2 - 1;
    if (!(bool)(bVar2 & *(char *)(param_1 + 0x4f) == '\0')) break;
    bVar2 = false;
  }
  return *(undefined1 *)(param_1 + 0x4f);
}

