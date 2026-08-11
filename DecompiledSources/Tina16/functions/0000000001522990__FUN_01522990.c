/* Ghidra address: 01522990 */
/* Ghidra symbol: FUN_01522990 */


undefined8 FUN_01522990(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  byte bVar4;
  byte bVar5;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  
  cVar1 = FUN_015218c0();
  if (cVar1 == '\0') {
    if (*(ushort *)(param_1 + 0x19c60) < 300) {
      *(short *)(param_1 + 0x19c60) = *(short *)(param_1 + 0x19c60) + 1;
      uVar2 = FUN_004095c0(0x80);
      *(undefined8 *)(param_1 + 0x19c60 + (ulonglong)*(ushort *)(param_1 + 0x19c60) * 8) = uVar2;
      bVar4 = 0;
      do {
        bVar5 = 0;
        do {
          puVar3 = (undefined8 *)FUN_01cfde70(param_2,1,1,&local_2a,&local_2b,&local_29);
          *(undefined8 *)
           (*(longlong *)(param_1 + 0x19c60 + (ulonglong)*(ushort *)(param_1 + 0x19c60) * 8) +
            (ulonglong)bVar4 * 0x20 + (ulonglong)bVar5 * 8) = *puVar3;
          bVar5 = bVar5 + 1;
        } while (bVar5 != 4);
        bVar4 = bVar4 + 1;
      } while (bVar4 != 4);
      uVar2 = *(undefined8 *)(param_1 + 0x19c60 + (ulonglong)*(ushort *)(param_1 + 0x19c60) * 8);
    }
    else {
      uVar2 = FUN_015226a0(param_1);
    }
  }
  else {
    uVar2 = FUN_01522630(param_1);
  }
  return uVar2;
}

