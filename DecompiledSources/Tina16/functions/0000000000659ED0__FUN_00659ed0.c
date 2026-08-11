/* Ghidra address: 00659ed0 */
/* Ghidra symbol: FUN_00659ed0 */


ulonglong FUN_00659ed0(longlong param_1,undefined4 param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  code *pcVar5;
  ulonglong uVar6;
  
  uVar2 = FUN_0064c0d0(param_1,param_2);
  uVar6 = (ulonglong)uVar2;
  if (*(char *)(param_1 + 0xa9) != '\0') {
    iVar3 = FUN_00654c00(param_1);
    iVar3 = iVar3 + -1;
    if (-1 < iVar3) {
      do {
        if ((byte)((byte)uVar6 & (byte)param_2) != 0) {
          return uVar6;
        }
        uVar4 = FUN_00654bc0(param_1,iVar3);
        pcVar5 = (code *)FUN_00411550(uVar4,0xffcf);
        bVar1 = (*pcVar5)(uVar4,param_2);
        uVar6 = CONCAT71((int7)(uVar6 >> 8),(byte)uVar6 | bVar1);
        iVar3 = iVar3 + -1;
      } while (iVar3 != -1);
    }
  }
  return uVar6;
}

