/* Ghidra address: 0153a250 */
/* Ghidra symbol: FUN_0153a250 */


bool FUN_0153a250(byte param_1,longlong *param_2)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  ulonglong uVar4;
  bool bVar5;
  
  uVar3 = (**(code **)(*param_2 + 0xf8))(param_2);
  uVar4 = (ulonglong)uVar3;
  bVar1 = (byte)uVar3;
  if (param_1 < 4) {
    if (param_1 == 3) {
      bVar1 = bVar1 - 8;
      if (bVar1 < 0x60) {
        return ((byte)(&DAT_0153a486)[(longlong)(int)(bVar1 & 0x7f) >> 3] >> (bVar1 & 7) & 1) != 0;
      }
      return false;
    }
    if (param_1 == 0) {
      if (bVar1 < 0x78) {
        return ((byte)(&DAT_0153a460)[(longlong)(uVar4 & 0x7f) >> 3] >> (uVar4 & 7) & 1) != 0;
      }
      return false;
    }
    if (param_1 == 1) {
      if (bVar1 < 0x78) {
        uVar4 = (uVar4 & 0x7f) + 0x38;
        return ((byte)(&DAT_0153a468)[(longlong)uVar4 >> 3] >> (uVar4 & 7) & 1) != 0;
      }
      return false;
    }
    if (param_1 == 2) {
      if (bVar1 < 0x40) {
        return (1L << (bVar1 & 0x3f) & 0x400000040U) != 0;
      }
      return false;
    }
  }
  else {
    if (param_1 == 4) {
      if (bVar1 < 0x78) {
        uVar4 = (uVar4 & 0x7f) + 0x10;
        bVar5 = ((byte)(&DAT_0153a490)[(longlong)uVar4 >> 3] >> (uVar4 & 7) & 1) != 0;
      }
      else {
        bVar5 = false;
      }
      if ((!bVar5) && (cVar2 = FUN_01b05ff0(param_2), cVar2 == '\0')) {
        return false;
      }
      return true;
    }
    if (param_1 == 5) {
      if (bVar1 < 0x78) {
        uVar4 = (uVar4 & 0x7f) + 8;
        bVar5 = ((byte)(&DAT_0153a4a0)[(longlong)uVar4 >> 3] >> (uVar4 & 7) & 1) != 0;
      }
      else {
        bVar5 = false;
      }
      if ((!bVar5) && (cVar2 = FUN_01b05ff0(param_2), cVar2 == '\0')) {
        return false;
      }
      return true;
    }
    if (param_1 == 6) {
      if ((byte)(bVar1 + 0xa0) < 8) {
        return ((int)CONCAT71((uint7)(byte)(uVar3 >> 8),1) << (bVar1 + 0xa0 & 0x1f) & 0x10U) != 0;
      }
      return false;
    }
  }
  return false;
}

