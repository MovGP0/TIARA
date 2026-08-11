/* Ghidra address: 0112ebb0 */
/* Ghidra symbol: FUN_0112ebb0 */


ulonglong FUN_0112ebb0(byte *param_1,byte *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte *unaff_RSI;
  ulonglong uVar5;
  byte bVar6;
  int iVar7;
  
  if ((int)param_3 < 0x41) {
    if (param_2 != param_1) {
      *(undefined8 *)param_2 = *(undefined8 *)param_1;
      *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 8);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x18);
      unaff_RSI = param_1 + 0x22;
      *(undefined2 *)(param_2 + 0x20) = *(undefined2 *)(param_1 + 0x20);
    }
    uVar5 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if ((*param_2 != param_3) || ((param_2[1] & 0x3f) != param_4)) {
      iVar4 = (param_1[1] & 0x3f) - param_4;
      iVar7 = 0;
      if (-1 < iVar4 + -1) {
        do {
          uVar1 = (uint)*param_1 - iVar7;
          if ((uVar1 & 1) == 0) {
            bVar6 = param_1[(longlong)((int)(uVar1 + 1) / 2 + -1) + 2] & 0xf;
          }
          else {
            bVar6 = param_1[(longlong)((int)(uVar1 + 1) / 2 + -1) + 2] / 0x10;
          }
          if (bVar6 != 0) {
            uVar5 = 0;
            break;
          }
          iVar7 = iVar7 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      iVar4 = ((uint)*param_1 - (uint)(param_1[1] & 0x3f)) - (param_3 - param_4);
      if (iVar4 < 0) {
        uVar1 = param_3 - 1;
        if (-1 < (int)uVar1) {
          do {
            uVar2 = uVar1 + iVar4;
            if ((int)uVar2 < 0) {
              bVar6 = 0;
            }
            else if ((uVar2 & 1) == 0) {
              bVar6 = param_1[(longlong)((int)uVar2 / 2) + 2] / 0x10;
            }
            else {
              bVar6 = param_1[(longlong)((int)uVar2 / 2) + 2] & 0xf;
            }
            if ((uVar1 & 1) == 0) {
              param_2[(longlong)((int)uVar1 / 2) + 2] =
                   param_2[(longlong)((int)uVar1 / 2) + 2] & 0xf | bVar6 * '\x10';
            }
            else {
              param_2[(longlong)((int)uVar1 / 2) + 2] = bVar6;
            }
            uVar1 = uVar1 - 1;
          } while (uVar1 != 0xffffffff);
        }
      }
      else if (0 < iVar4) {
        uVar1 = 0;
        iVar7 = iVar4;
        if (-1 < iVar4 + -1) {
          do {
            if ((uVar1 & 1) == 0) {
              bVar6 = param_1[(longlong)((int)uVar1 / 2) + 2] / 0x10;
            }
            else {
              bVar6 = param_1[(longlong)((int)uVar1 / 2) + 2] & 0xf;
            }
            if (bVar6 != 0) {
              uVar5 = 0;
              break;
            }
            uVar1 = uVar1 + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
        uVar2 = 0;
        uVar1 = param_3;
        if (-1 < (int)(param_3 - 1)) {
          do {
            uVar3 = uVar2 + iVar4;
            if ((int)(uint)*param_1 < (int)uVar3) {
              bVar6 = 0;
            }
            else if ((uVar3 & 1) == 0) {
              bVar6 = param_1[(longlong)((int)uVar3 / 2) + 2] / 0x10;
            }
            else {
              bVar6 = param_1[(longlong)((int)uVar3 / 2) + 2] & 0xf;
            }
            if ((uVar2 & 1) == 0) {
              param_2[(longlong)((int)uVar2 / 2) + 2] = bVar6 * '\x10';
            }
            else {
              param_2[(longlong)((int)uVar2 / 2) + 2] =
                   param_2[(longlong)((int)uVar2 / 2) + 2] | bVar6;
            }
            uVar2 = uVar2 + 1;
            uVar1 = uVar1 - 1;
          } while (uVar1 != 0);
        }
      }
    }
    if ((param_3 & 1) != 0) {
      param_2[(longlong)((int)param_3 / 2) + 2] = param_2[(longlong)((int)param_3 / 2) + 2] & 0xf0;
    }
    if ((int)param_3 < 0x40) {
      iVar4 = (int)(param_3 + 1) / 2;
      FUN_0040d200(param_2 + (longlong)iVar4 + 2,(longlong)(0x20 - iVar4),0);
    }
    *param_2 = (byte)param_3;
    param_2[1] = (param_1[1] & 0x80) + ((byte)param_4 & 0x3f);
  }
  else {
    uVar5 = 0;
  }
  return uVar5 & 0xffffffff;
}

