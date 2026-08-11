/* Ghidra address: 00c8fc70 */
/* Ghidra symbol: FUN_00c8fc70 */


undefined8 FUN_00c8fc70(longlong param_1)

{
  char cVar1;
  ushort uVar2;
  short sVar3;
  
  uVar2 = *(ushort *)(param_1 + 0x1a);
  if (*(ushort *)(param_1 + 0x18) <= uVar2) {
    sVar3 = (*(ushort *)(param_1 + 0x18) - uVar2) + -1;
    do {
      cVar1 = FUN_00c8fbe0(param_1,uVar2);
      if (cVar1 != '\0') {
        return 1;
      }
      uVar2 = uVar2 - 1;
      sVar3 = sVar3 + 1;
    } while (sVar3 != 0);
  }
  return 0;
}

