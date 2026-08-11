/* Ghidra address: 0082c670 */
/* Ghidra symbol: FUN_0082c670 */


undefined8 FUN_0082c670(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_005b4c50(param_1);
  if ((cVar1 == '\0') ||
     (*(int *)(param_1 + 0x30) != *(int *)(*(longlong *)(param_1 + 0x18) + 0x110))) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x18) >> 8),1);
  }
  return uVar2;
}

