/* Ghidra address: 01977c80 */
/* Ghidra symbol: FUN_01977c80 */


undefined8 FUN_01977c80(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x1a0);
  if (((*(char *)(lVar2 + 0x48) == '\0') &&
      (lVar2 = *(longlong *)(param_1 + 0x248), *(longlong *)(lVar2 + 0x118) == 0)) &&
     (*(char *)(param_1 + 0x2c0) == '\0')) {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
  }
  return uVar1;
}

