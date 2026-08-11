/* Ghidra address: 01b6c550 */
/* Ghidra symbol: FUN_01b6c550 */


undefined8 FUN_01b6c550(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_01b6e340(param_1,0x6c);
  *(undefined1 *)(param_1 + 0x9ce) = 1;
  if ((*(char *)(*(longlong *)(param_1 + 0x9d8) + 0x68) == '\0') ||
     (*(char *)(param_1 + 0x9cd) != '\0')) {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x9d8) >> 8),1);
  }
  return uVar1;
}

