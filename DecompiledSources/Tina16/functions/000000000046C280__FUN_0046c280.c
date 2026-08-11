/* Ghidra address: 0046c280 */
/* Ghidra symbol: FUN_0046c280 */


undefined8 FUN_0046c280(void)

{
  char cVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  ulonglong local_38;
  ulonglong local_30;
  ulonglong uStack_28;
  longlong *local_20;
  
  puVar2 = (ulonglong *)FUN_0046c230();
  local_38 = *puVar2;
  local_30 = puVar2[1];
  uStack_28 = puVar2[2];
  if ((ushort)local_38 < 0x10f) {
    if (((ushort)local_38 == 0) ||
       ((((ushort)local_38 == 9 || ((ushort)local_38 == 0xd)) && (local_30 == 0)))) {
      uVar3 = CONCAT71((uint7)(byte)(local_38 >> 8),1);
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    cVar1 = FUN_0046eed0(local_38 & 0xffff,&local_20);
    if (cVar1 == '\0') {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*local_20 + 0x28))(local_20,&local_38);
    }
  }
  return uVar3;
}

