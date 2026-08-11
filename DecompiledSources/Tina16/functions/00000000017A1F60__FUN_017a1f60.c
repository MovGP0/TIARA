/* Ghidra address: 017a1f60 */
/* Ghidra symbol: FUN_017a1f60 */


undefined8 FUN_017a1f60(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(*(longlong *)(param_1 + 0x730) + 0x328) == '\0') {
    if (*(char *)(*(longlong *)(param_1 + 0x738) + 0x328) == '\0') {
      if (*(char *)(*(longlong *)(param_1 + 0x740) + 0x328) == '\0') {
        if (*(char *)(*(longlong *)(param_1 + 0x748) + 0x328) == '\0') {
          uVar1 = 0;
        }
        else {
          uVar1 = CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x748) >> 8),2);
        }
      }
      else {
        uVar1 = CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x740) >> 8),1);
      }
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x730) >> 8),3);
  }
  return uVar1;
}

