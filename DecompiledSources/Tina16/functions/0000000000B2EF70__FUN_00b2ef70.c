/* Ghidra address: 00b2ef70 */
/* Ghidra symbol: FUN_00b2ef70 */


undefined8 FUN_00b2ef70(longlong param_1,undefined8 param_2,longlong param_3,char param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined1 uVar4;
  short sVar5;
  ushort uVar6;
  
  bVar3 = 0;
  if (*(char *)(param_3 + 0x13) == '\0') {
    bVar3 = 0x40;
  }
  if (*(char *)(param_3 + 0x11) == '\0') {
    bVar3 = bVar3 | 0x80;
  }
  sVar5 = *(short *)(param_3 + 0xb);
  uVar6 = (ushort)*(byte *)(param_3 + 0xf);
  if (param_4 == '\0') {
    uVar4 = 0x44;
  }
  else {
    uVar4 = 0x24;
  }
  if ((*(char *)(param_1 + 0xb) != '\0') && (bVar3 != 0)) {
    if ((bVar3 & 0x80) != 0) {
      sVar5 = sVar5 - *(short *)(param_1 + 8);
    }
    if ((bVar3 & 0x40) != 0) {
      uVar6 = (ushort)*(byte *)(param_3 + 0xf) - (ushort)*(byte *)(param_1 + 10);
    }
    if (param_4 == '\0') {
      uVar4 = 0x4c;
    }
    else {
      uVar4 = 0x2c;
    }
  }
  FUN_00417360(param_2,0,5);
  puVar1 = (undefined1 *)FUN_00414df0(param_2);
  *puVar1 = uVar4;
  lVar2 = FUN_00414df0(param_2);
  *(short *)(lVar2 + 1) = sVar5;
  lVar2 = FUN_00414df0(param_2);
  *(ushort *)(lVar2 + 3) = uVar6;
  lVar2 = FUN_00414df0(param_2);
  *(byte *)(lVar2 + 4) = bVar3;
  return param_2;
}

