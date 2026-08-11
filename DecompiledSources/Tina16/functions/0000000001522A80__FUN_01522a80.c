/* Ghidra address: 01522a80 */
/* Ghidra symbol: FUN_01522a80 */


undefined8 FUN_01522a80(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  byte bVar4;
  byte bVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined1 local_3a;
  undefined1 local_39;
  undefined1 *local_38;
  undefined1 local_29;
  
  (**(code **)(*param_2 + 0x2d0))(param_2,4,&local_38);
  cVar1 = FUN_01521920(*local_38);
  if (cVar1 == '\0') {
    uVar2 = FUN_01522630(param_1);
  }
  else if (*(ushort *)(param_1 + 0x19c60) < 300) {
    *(short *)(param_1 + 0x19c60) = *(short *)(param_1 + 0x19c60) + 1;
    uVar2 = FUN_004095c0(0x80);
    *(undefined8 *)(param_1 + 0x19c60 + (ulonglong)*(ushort *)(param_1 + 0x19c60) * 8) = uVar2;
    bVar4 = 0;
    puVar6 = PTR_DAT_02001090;
    do {
      bVar5 = 0;
      puVar7 = puVar6;
      do {
        puVar3 = (undefined8 *)FUN_01cfde70(param_2,1,*puVar7,&local_39,&local_3a,&local_29);
        *(undefined8 *)
         (*(longlong *)(param_1 + 0x19c60 + (ulonglong)*(ushort *)(param_1 + 0x19c60) * 8) +
          (ulonglong)bVar4 * 0x20 + (ulonglong)bVar5 * 8) = *puVar3;
        bVar5 = bVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (bVar5 != 4);
      bVar4 = bVar4 + 1;
      puVar6 = puVar6 + 4;
    } while (bVar4 != 4);
    uVar2 = *(undefined8 *)(param_1 + 0x19c60 + (ulonglong)*(ushort *)(param_1 + 0x19c60) * 8);
  }
  else {
    uVar2 = FUN_015226a0(param_1);
  }
  return uVar2;
}

