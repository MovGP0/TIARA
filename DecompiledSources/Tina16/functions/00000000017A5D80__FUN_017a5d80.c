/* Ghidra address: 017a5d80 */
/* Ghidra symbol: FUN_017a5d80 */


undefined8 FUN_017a5d80(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x48))(*(longlong **)(param_1 + 0x58));
  if (iVar1 == *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x30) + 0x780) +
                       0x90)) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x60))(*(longlong **)(param_1 + 0x58));
    iVar1 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x30) + 0x780) +
                    0x94);
    if (iVar2 % iVar1 == 0) {
      return CONCAT71((uint7)((ulonglong)((longlong)iVar2 / (longlong)iVar1) >> 8) & 0xffffff,1);
    }
  }
  return 0;
}

