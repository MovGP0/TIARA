/* Ghidra address: 01522710 */
/* Ghidra symbol: FUN_01522710 */


undefined8
FUN_01522710(longlong param_1,longlong *param_2,undefined1 param_3,undefined1 param_4,int param_5)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  byte bVar4;
  byte bVar5;
  undefined1 local_3a;
  undefined1 local_39;
  undefined1 *local_38;
  undefined1 local_29;
  
  (**(code **)(*param_2 + 0x2d0))(param_2,param_5 + -1,&local_38);
  cVar1 = FUN_01521920(*local_38);
  if (cVar1 == '\0') {
    uVar2 = FUN_01522630(param_1);
  }
  else if (*(ushort *)(param_1 + 0x19c60) < 300) {
    *(short *)(param_1 + 0x19c60) = *(short *)(param_1 + 0x19c60) + 1;
    uVar2 = FUN_004095c0(0x80);
    *(undefined8 *)(param_1 + 0x19c60 + (ulonglong)*(ushort *)(param_1 + 0x19c60) * 8) = uVar2;
    bVar4 = 0;
    do {
      bVar5 = 0;
      do {
        puVar3 = (undefined8 *)FUN_01cfde70(param_2,param_3,param_4,&local_39,&local_3a,&local_29);
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
  return uVar2;
}

