/* Ghidra address: 0064b810 */
/* Ghidra symbol: FUN_0064b810 */


undefined8 FUN_0064b810(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_005b4cb0(param_1);
  if ((cVar1 == '\0') ||
     (*(char *)(*(longlong *)(param_1 + 0x20) + 0xa9) !=
      *(char *)(*(longlong *)(param_1 + 0x18) + 0x100))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

