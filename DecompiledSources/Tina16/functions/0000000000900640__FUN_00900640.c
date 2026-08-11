/* Ghidra address: 00900640 */
/* Ghidra symbol: FUN_00900640 */


ulonglong FUN_00900640(short *param_1,undefined8 param_2)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  bool bVar6;
  
  uVar2 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
  uVar1 = 0;
  if (param_1 != (short *)0x0) {
    uVar1 = *(uint *)(param_1 + -2) >> 1;
  }
  if (uVar1 < 3) {
    uVar2 = 0;
  }
  else if ((*param_1 == 0x31) && (param_1[1] != 0x2c)) {
    uVar1 = 0;
    if (param_1 != (short *)0x0) {
      uVar1 = *(uint *)(param_1 + -2) >> 1;
    }
    uVar4 = 0;
    iVar3 = 3;
    if (2 < uVar1) {
      iVar5 = uVar1 - 2;
      do {
        if ((ushort)(param_1[(longlong)iVar3 + -1] - 0x30U) < 0x10) {
          uVar1 = (int)CONCAT62((int6)(uVar4 >> 0x10),1) <<
                  ((byte)(param_1[(longlong)iVar3 + -1] - 0x30U) & 0x1f);
          uVar4 = (ulonglong)uVar1;
          bVar6 = (uVar1 & 0x3ff) != 0;
        }
        else {
          bVar6 = false;
        }
        if (!bVar6) {
          uVar2 = 0;
          break;
        }
        iVar3 = iVar3 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2 & 0xffffffff;
}

