/* Ghidra address: 009f2450 */
/* Ghidra symbol: FUN_009f2450 */


ulonglong FUN_009f2450(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined6 uVar5;
  byte bVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  byte local_29;
  
  local_29 = FUN_00a01900();
  if ((*(byte *)(param_1 + 0x20) & 3) != 0) goto LAB_009f251d;
LAB_009f247c:
  if (local_29 == 0) {
LAB_009f272c:
    if (local_29 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0xfffd;
    }
  }
  else if ((local_29 < 0x80) && (((byte)(&DAT_01e6d710)[local_29 >> 3] >> (local_29 & 7) & 1) != 0))
  {
    uVar3 = (ulonglong)local_29;
  }
  else if (local_29 == 0x2b) {
    local_29 = FUN_00a01900(param_1);
    if (local_29 == 0x2d) {
      uVar3 = 0x2b;
    }
    else {
      *(undefined1 *)(param_1 + 0x20) = 1;
LAB_009f251d:
      uVar3 = 0;
      uVar8 = (ulonglong)*(byte *)(param_1 + 0x20);
      iVar9 = 2;
      iVar10 = 0;
      iVar11 = 0;
      if (local_29 != 0) {
        do {
          uVar4 = (ulonglong)local_29;
          if (uVar4 < 0x30) {
            if (uVar4 == 0x2b) {
              uVar2 = 0x3e;
            }
            else {
              uVar4 = uVar4 - 0x2f;
              if (uVar4 != 0) goto LAB_009f25c4;
              uVar2 = 0x3f;
            }
          }
          else if (uVar4 - 0x30 < 10) {
            uVar2 = local_29 + 4;
          }
          else if (uVar4 - 0x41 < 0x1a) {
            uVar2 = local_29 - 0x41;
          }
          else {
            uVar4 = uVar4 - 0x61;
            if (0x19 < uVar4) goto LAB_009f25c4;
            uVar2 = local_29 - 0x47;
          }
          iVar11 = iVar11 + 1;
          bVar6 = (byte)uVar8 & 3;
          iVar7 = (int)uVar3;
          uVar1 = (uint)uVar8;
          if ((uVar8 & 3) == 0) {
            uVar3 = (ulonglong)(iVar7 << 8 | uVar1 & 0xfc | uVar2 >> 4);
            iVar10 = iVar10 + 1;
            uVar8 = (ulonglong)((uVar2 & 0xffffff0f) << 4) | 2;
          }
          else if (bVar6 == 1) {
            uVar8 = (ulonglong)(uVar2 * 4);
          }
          else if (bVar6 == 2) {
            uVar3 = (ulonglong)(iVar7 << 8 | uVar1 & 0xfc | uVar2 >> 2);
            iVar10 = iVar10 + 1;
            uVar8 = (ulonglong)((uVar2 & 0xffffff03) << 6) | 3;
          }
          else if (bVar6 == 3) {
            uVar3 = (ulonglong)(iVar7 << 8 | uVar1 & 0xfc | uVar2);
            iVar10 = iVar10 + 1;
            uVar8 = 1;
          }
          if (iVar10 == iVar9) {
            if (((iVar9 != 2) || ((uint)uVar3 < 0xd800)) || (0xdbff < (uint)uVar3)) break;
            iVar9 = 4;
          }
          if ((iVar11 == 0) || (local_29 = FUN_00a01900(param_1), local_29 == 0)) goto LAB_009f272c;
          if (local_29 == 0) break;
        } while( true );
      }
      uVar5 = (undefined6)(uVar8 >> 0x10);
      if ((uVar8 & 3) == 0) {
        uVar3 = CONCAT62(uVar5,0xfffd);
      }
      else if (iVar9 == 4) {
        uVar3 = CONCAT62(uVar5,0xfffd);
      }
      *(char *)(param_1 + 0x20) = (char)uVar8;
    }
  }
  else {
    uVar3 = 0xfffd;
  }
  return uVar3;
LAB_009f25c4:
  uVar5 = (undefined6)(uVar4 >> 0x10);
  if ((uVar8 & 0xfc) != 0) {
    *(undefined1 *)(param_1 + 0x20) = 0;
    return CONCAT62(uVar5,0xfffd);
  }
  if (iVar11 != 0) {
    *(undefined1 *)(param_1 + 0x20) = 0;
    return CONCAT62(uVar5,0xfffd);
  }
  if (local_29 == 0x2d) {
    local_29 = FUN_00a01900(param_1);
  }
  *(undefined1 *)(param_1 + 0x20) = 0;
  goto LAB_009f247c;
}

