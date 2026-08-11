/* Ghidra address: 007dce70 */
/* Ghidra symbol: FUN_007dce70 */


undefined8 FUN_007dce70(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_005b4b60(param_1);
  if ((cVar1 == '\0') ||
     (*(char *)(*(longlong *)(param_1 + 0x20) + 0x81) !=
      *(char *)(*(longlong *)(param_1 + 0x18) + 0xd9))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

