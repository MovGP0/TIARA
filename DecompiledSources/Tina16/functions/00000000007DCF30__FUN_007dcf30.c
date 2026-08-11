/* Ghidra address: 007dcf30 */
/* Ghidra symbol: FUN_007dcf30 */


undefined8 FUN_007dcf30(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_005b4b90(param_1);
  if (((cVar1 == '\0') || (*(char *)(*(longlong *)(param_1 + 0x20) + 0x85) == '\0')) ||
     ((uint)*(byte *)(*(longlong *)(param_1 + 0x20) + 0x87) !=
      *(uint *)(*(longlong *)(param_1 + 0x18) + 0xdc))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

