/* Ghidra address: 00702e00 */
/* Ghidra symbol: FUN_00702e00 */


undefined8 FUN_00702e00(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_005b4b30(param_1);
  if ((cVar1 == '\0') ||
     (*(char *)(*(longlong *)(param_1 + 0x28) + 0x31a) !=
      *(char *)(*(longlong *)(param_1 + 0x18) + 0xd8))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

