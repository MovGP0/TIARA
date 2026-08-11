/* Ghidra address: 007113b0 */
/* Ghidra symbol: FUN_007113b0 */


undefined8 FUN_007113b0(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  uint uVar6;
  bool bVar7;
  
  uVar5 = 0;
  pbVar3 = (byte *)FUN_00415ab0(param_1);
  iVar2 = 0;
  if (param_1 != 0) {
    iVar2 = *(int *)(param_1 + -4);
  }
  pbVar1 = pbVar3 + iVar2;
  for (; (pbVar3 < pbVar1 && (*pbVar3 < 0x80)); pbVar3 = pbVar3 + 1) {
  }
  if (pbVar3 != pbVar1) {
    while (pbVar3 < pbVar1) {
      uVar4 = (ulonglong)*pbVar3;
      if (uVar4 < 0xe1) {
        if (uVar4 < 0x80) {
          pbVar3 = pbVar3 + 1;
        }
        else if (uVar4 - 0xc2 < 0x1e) {
          if (pbVar1 <= pbVar3 + 1) break;
          if ((byte)(pbVar3[1] + 0x80) < 0x40) {
            param_4 = 1L << (pbVar3[1] + 0x80 & 0x3f);
            bVar7 = param_4 != 0;
          }
          else {
            bVar7 = false;
          }
          if (!bVar7) break;
          pbVar3 = pbVar3 + 2;
        }
        else {
          if ((uVar4 - 0xc2 != 0x1e) || (pbVar1 <= pbVar3 + 2)) break;
          if ((byte)(pbVar3[1] + 0x60) < 0x20) {
            uVar6 = 1 << (pbVar3[1] + 0x60 & 0x1f);
            param_4 = (ulonglong)uVar6;
            bVar7 = uVar6 != 0;
          }
          else {
            bVar7 = false;
          }
          if (!bVar7) break;
          if ((byte)(pbVar3[2] + 0x80) < 0x40) {
            param_4 = 1L << (pbVar3[2] + 0x80 & 0x3f);
            bVar7 = param_4 != 0;
          }
          else {
            bVar7 = false;
          }
          if (!bVar7) break;
          pbVar3 = pbVar3 + 3;
        }
      }
      else if (uVar4 - 0xe1 < 0xf) {
        if (pbVar1 <= pbVar3 + 2) break;
        if ((byte)(pbVar3[1] + 0x80) < 0x40) {
          param_4 = 1L << (pbVar3[1] + 0x80 & 0x3f);
          bVar7 = param_4 != 0;
        }
        else {
          bVar7 = false;
        }
        if (!bVar7) break;
        if ((byte)(pbVar3[2] + 0x80) < 0x40) {
          param_4 = 1L << (pbVar3[2] + 0x80 & 0x3f);
          bVar7 = param_4 != 0;
        }
        else {
          bVar7 = false;
        }
        if (!bVar7) break;
        pbVar3 = pbVar3 + 3;
      }
      else if (uVar4 == 0xf0) {
        if (pbVar1 <= pbVar3 + 3) break;
        if ((byte)(pbVar3[1] + 0x70) < 0x40) {
          param_4 = 1L << (pbVar3[1] + 0x70 & 0x3f);
          bVar7 = (param_4 & 0xffffffffffff) != 0;
        }
        else {
          bVar7 = false;
        }
        if (!bVar7) break;
        if ((byte)(pbVar3[2] + 0x80) < 0x40) {
          param_4 = 1L << (pbVar3[2] + 0x80 & 0x3f);
          bVar7 = param_4 != 0;
        }
        else {
          bVar7 = false;
        }
        if (!bVar7) break;
        if ((byte)(pbVar3[3] + 0x80) < 0x40) {
          param_4 = 1L << (pbVar3[3] + 0x80 & 0x3f);
          bVar7 = param_4 != 0;
        }
        else {
          bVar7 = false;
        }
        if (!bVar7) break;
        pbVar3 = pbVar3 + 4;
      }
      else if (uVar4 - 0xf1 < 3) {
        if (pbVar1 <= pbVar3 + 3) break;
        if ((byte)(pbVar3[1] + 0x80) < 0x40) {
          param_4 = 1L << (pbVar3[1] + 0x80 & 0x3f);
          bVar7 = param_4 != 0;
        }
        else {
          bVar7 = false;
        }
        if (!bVar7) break;
        if ((byte)(pbVar3[2] + 0x80) < 0x40) {
          param_4 = 1L << (pbVar3[2] + 0x80 & 0x3f);
          bVar7 = param_4 != 0;
        }
        else {
          bVar7 = false;
        }
        if (!bVar7) break;
        if ((byte)(pbVar3[3] + 0x80) < 0x40) {
          param_4 = 1L << (pbVar3[3] + 0x80 & 0x3f);
          bVar7 = param_4 != 0;
        }
        else {
          bVar7 = false;
        }
        if (!bVar7) break;
        pbVar3 = pbVar3 + 4;
      }
      else {
        if ((uVar4 - 0xf1 != 3) || (pbVar1 <= pbVar3 + 3)) break;
        if ((byte)(pbVar3[1] + 0x80) < 0x10) {
          uVar6 = (int)CONCAT62((int6)(param_4 >> 0x10),1) << (pbVar3[1] + 0x80 & 0x1f);
          param_4 = (ulonglong)uVar6;
          bVar7 = (short)uVar6 != 0;
        }
        else {
          bVar7 = false;
        }
        if (!bVar7) break;
        if ((byte)(pbVar3[2] + 0x80) < 0x40) {
          param_4 = 1L << (pbVar3[2] + 0x80 & 0x3f);
          bVar7 = param_4 != 0;
        }
        else {
          bVar7 = false;
        }
        if (!bVar7) break;
        if ((byte)(pbVar3[3] + 0x80) < 0x40) {
          param_4 = 1L << (pbVar3[3] + 0x80 & 0x3f);
          bVar7 = param_4 != 0;
        }
        else {
          bVar7 = false;
        }
        if (!bVar7) break;
        pbVar3 = pbVar3 + 4;
      }
    }
    if (pbVar3 == pbVar1) {
      uVar5 = 1;
    }
    else {
      uVar5 = 2;
    }
  }
  return uVar5;
}

