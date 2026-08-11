/* Ghidra address: 00ddd7e0 */
/* Ghidra symbol: FUN_00ddd7e0 */


undefined8 FUN_00ddd7e0(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x490) + 0x68) + 0x10
                  );
  if (-1 < iVar2 + -1) {
    do {
      lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x490) + 0x68);
      if (*(int *)(lVar1 + 8) == param_2) {
        return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

