/* Ghidra address: 01c06f30 */
/* Ghidra symbol: FUN_01c06f30 */


undefined8 FUN_01c06f30(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (*(longlong *)(param_1 + 800) != 0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 800) + 0x70))(*(longlong **)(param_1 + 800));
    if ((cVar1 == '\0') || (*(char *)(*(longlong *)(param_1 + 800) + 0xa9) == '\0')) {
      uVar2 = 0;
    }
    else {
      uVar2 = CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 800) >> 8),1);
    }
  }
  return uVar2;
}

