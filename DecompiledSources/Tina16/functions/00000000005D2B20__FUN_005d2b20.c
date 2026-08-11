/* Ghidra address: 005d2b20 */
/* Ghidra symbol: FUN_005d2b20 */


undefined8 FUN_005d2b20(longlong param_1)

{
  ushort *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  ushort uVar5;
  bool bVar6;
  undefined1 local_19;
  
  uVar4 = 0;
  iVar2 = 0;
  if (param_1 != 0) {
    iVar2 = *(int *)(param_1 + -4);
  }
  if (1 < iVar2) {
    iVar2 = FUN_005d27e0(param_1,&local_19);
    lVar3 = FUN_00416740(param_1);
    puVar1 = (ushort *)(lVar3 + -2 + (longlong)iVar2 * 2);
    uVar5 = *puVar1;
    if ((ushort)(uVar5 - 0x61) < 0x1a) {
      uVar5 = uVar5 & 0xffdf;
    }
    if (uVar5 < 0x100) {
      bVar6 = ((byte)(&DAT_01de84d4)[(longlong)(ulonglong)uVar5 >> 3] >> ((ulonglong)uVar5 & 7) & 1)
              != 0;
    }
    else {
      bVar6 = false;
    }
    if ((bVar6) && (uVar5 = puVar1[1], uVar5 == DAT_02011f46)) {
      uVar4 = CONCAT71((uint7)(byte)(uVar5 >> 8),1);
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}

