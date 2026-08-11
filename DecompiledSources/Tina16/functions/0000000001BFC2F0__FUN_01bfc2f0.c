/* Ghidra address: 01bfc2f0 */
/* Ghidra symbol: FUN_01bfc2f0 */


undefined8 FUN_01bfc2f0(longlong param_1)

{
  short sVar1;
  char cVar2;
  undefined8 uVar3;
  
  cVar2 = FUN_005b4c80(param_1);
  if ((cVar2 == '\0') ||
     (sVar1 = *(short *)(*(longlong *)(param_1 + 0x20) + 0x8c),
     sVar1 != *(short *)(*(longlong *)(param_1 + 0x18) + 0x102))) {
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT71((uint7)(byte)((ushort)sVar1 >> 8),1);
  }
  return uVar3;
}

