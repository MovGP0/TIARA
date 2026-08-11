/* Ghidra address: 007dd000 */
/* Ghidra symbol: FUN_007dd000 */


undefined8 FUN_007dd000(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_005b4cb0(param_1);
  if ((cVar1 == '\0') ||
     (*(char *)(*(longlong *)(param_1 + 0x20) + 0x86) !=
      *(char *)(*(longlong *)(param_1 + 0x18) + 0x100))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

