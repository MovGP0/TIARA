/* Ghidra address: 01522bc0 */
/* Ghidra symbol: FUN_01522bc0 */


undefined8 FUN_01522bc0(longlong param_1)

{
  char cVar1;
  byte bVar2;
  undefined8 uVar3;
  byte bVar4;
  
  cVar1 = FUN_015218c0();
  if (cVar1 == '\0') {
    if (*(ushort *)(param_1 + 0x19c60) < 300) {
      *(short *)(param_1 + 0x19c60) = *(short *)(param_1 + 0x19c60) + 1;
      uVar3 = FUN_004095c0(0x80);
      *(undefined8 *)(param_1 + 0x19c60 + (ulonglong)*(ushort *)(param_1 + 0x19c60) * 8) = uVar3;
      bVar2 = 0;
      do {
        bVar4 = 0;
        do {
          *(undefined8 *)
           (*(longlong *)(param_1 + 0x19c60 + (ulonglong)*(ushort *)(param_1 + 0x19c60) * 8) +
            (ulonglong)bVar2 * 0x20 + (ulonglong)bVar4 * 8) = 0x3e45798ee2308c3a;
          bVar4 = bVar4 + 1;
        } while (bVar4 != 4);
        bVar2 = bVar2 + 1;
      } while (bVar2 != 4);
      uVar3 = *(undefined8 *)(param_1 + 0x19c60 + (ulonglong)*(ushort *)(param_1 + 0x19c60) * 8);
    }
    else {
      uVar3 = FUN_015226a0(param_1);
    }
  }
  else {
    uVar3 = FUN_01522630(param_1);
  }
  return uVar3;
}

