/* Ghidra address: 007dce30 */
/* Ghidra symbol: FUN_007dce30 */


undefined8 FUN_007dce30(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_005b4b30(param_1);
  if ((cVar1 == '\0') ||
     (*(char *)(*(longlong *)(param_1 + 0x20) + 0x80) !=
      *(char *)(*(longlong *)(param_1 + 0x18) + 0xd8))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

