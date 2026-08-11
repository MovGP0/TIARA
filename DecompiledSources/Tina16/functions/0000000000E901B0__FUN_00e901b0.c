/* Ghidra address: 00e901b0 */
/* Ghidra symbol: FUN_00e901b0 */


ushort * FUN_00e901b0(ushort *param_1,int param_2,longlong param_3,uint *param_4)

{
  ushort uVar1;
  ushort *puVar2;
  ushort *puVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  uVar1 = *param_1;
  uVar7 = (uint)uVar1;
  *param_4 = (uint)uVar1;
  param_4[1] = 0;
  puVar2 = param_1 + 1;
  if (0x40 < (uVar1 - 0x21 & 0xffff)) goto switchD_00e90273_caseD_2f;
  iVar8 = 0x55;
  if ((((uVar7 < 0x55) && (iVar8 = 0x48, uVar7 < 0x48)) && (iVar8 = 0x3b, uVar7 < 0x3b)) &&
     (iVar8 = 0x21, 0x2d < uVar7)) {
    iVar8 = 0x2e;
  }
  uVar5 = (uVar7 + 0x21) - iVar8;
  uVar6 = uVar5 & 0xffff;
  if ((uVar6 < 0x2e) && ((0x238000000000U >> ((ulonglong)uVar6 & 0x3f) & 1) != 0)) {
    puVar2 = param_1 + 2;
  }
  uVar5 = uVar5 - 0x23;
  uVar6 = 1;
  if ((uVar5 & 0xffff) < 9) {
    uVar6 = *(uint *)(&DAT_01ee1120 + (longlong)(short)uVar5 * 4);
  }
  param_4[1] = uVar6;
  switch((char)iVar8) {
  case '.':
    *param_4 = 0x1e;
    goto switchD_00e902de_caseD_18;
  case '/':
  case '0':
  case '1':
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9':
  case ':':
  case '<':
  case '=':
  case '>':
  case '?':
  case '@':
  case 'A':
  case 'B':
  case 'C':
  case 'D':
  case 'E':
  case 'F':
  case 'G':
  case 'I':
  case 'J':
  case 'K':
  case 'L':
  case 'M':
  case 'N':
  case 'O':
  case 'P':
  case 'Q':
  case 'R':
  case 'S':
  case 'T':
    break;
  case ';':
    *param_4 = 0x1f;
    goto switchD_00e902de_caseD_17;
  case 'H':
    *param_4 = 0x20;
    uVar5 = 0x1f;
    goto switchD_00e902de_caseD_1a;
  case 'U':
    uVar7 = (uint)*puVar2;
    *param_4 = uVar7;
    puVar2 = puVar2 + 1;
    break;
  default:
    if ((char)iVar8 == '!') {
      *param_4 = 0x1d;
      goto switchD_00e902de_caseD_17;
    }
  }
switchD_00e90273_caseD_2f:
  uVar5 = 0x1f;
  switch((short)uVar7 + -6) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
    return puVar2;
  default:
    return (ushort *)0x0;
  case 9:
  case 10:
    if (*puVar2 != 9) {
      param_4[2] = (uint)*puVar2;
      param_4[3] = (uint)puVar2[1];
      return puVar2 + 2;
    }
    uVar4 = (ulonglong)puVar2[1];
    uVar5 = *(uint *)(&DAT_01ee2000 + uVar4 * 4);
    param_4[2] = uVar5;
    if ((((uVar5 != 0xffffffff) &&
         (uVar5 = *(uint *)(&DAT_01ee2004 + uVar4 * 4), param_4[3] = uVar5, uVar5 != 0xffffffff)) &&
        (uVar5 = *(uint *)(&DAT_01ee2008 + uVar4 * 4), param_4[4] = uVar5, uVar5 != 0xffffffff)) &&
       (((uVar5 = *(uint *)(&DAT_01ee200c + uVar4 * 4), param_4[5] = uVar5, uVar5 != 0xffffffff &&
         (uVar5 = *(uint *)(&DAT_01ee2010 + uVar4 * 4), param_4[6] = uVar5, uVar5 != 0xffffffff)) &&
        (uVar5 = *(uint *)(&DAT_01ee2014 + uVar4 * 4), param_4[7] = uVar5, uVar5 != 0xffffffff)))) {
      param_4[2] = (uint)puVar2[2];
      param_4[3] = (uint)puVar2[3];
      return puVar2 + 2;
    }
    *param_4 = (uVar7 != 0x10) + 0x1d + (uint)(uVar7 != 0x10);
    return puVar2 + 2;
  case 0x17:
  case 0x19:
switchD_00e902de_caseD_17:
    puVar3 = puVar2 + 1;
    uVar1 = *puVar2;
    uVar7 = (uint)uVar1;
    if ((param_2 != 0) && ((uVar1 & 0xfc00) == 0xd800)) {
      puVar3 = puVar2 + 2;
      uVar7 = (uVar1 & 0x3ff) * 0x400 + 0x10000 + (puVar2[1] & 0x3ff);
    }
    param_4[2] = uVar7;
    param_4[3] = 0xffffffff;
    return puVar3;
  case 0x18:
switchD_00e902de_caseD_18:
    uVar5 = 0x1d;
  case 0x1a:
switchD_00e902de_caseD_1a:
    *param_4 = uVar5;
    puVar3 = puVar2 + 1;
    uVar1 = *puVar2;
    uVar7 = (uint)uVar1;
    if ((param_2 != 0) && ((uVar1 & 0xfc00) == 0xd800)) {
      puVar3 = puVar2 + 2;
      uVar7 = (uVar1 & 0x3ff) * 0x400 + 0x10000 + (puVar2[1] & 0x3ff);
    }
    param_4[2] = uVar7;
    if ((uVar7 < 0x80) || (param_2 == 0 && uVar7 < 0x100)) {
      uVar5 = (uint)*(byte *)(param_3 + (ulonglong)uVar7);
    }
    else {
      uVar5 = *(int *)(&DAT_01ee2144 +
                      (ulonglong)
                      *(ushort *)
                       (&DAT_01ee59c0 +
                       ((longlong)(int)(uVar7 % 0x80) +
                       (ulonglong)(byte)(&DAT_01ee37c0)[(int)uVar7 >> 7] * 0x80) * 2) * 8) + uVar7;
    }
    param_4[3] = uVar5;
    param_4[(ulonglong)(uVar7 != uVar5) + 3] = 0xffffffff;
    return puVar3;
  case 0x68:
  case 0x69:
    puVar3 = puVar2 + 0x10;
    break;
  case 0x6a:
    puVar3 = puVar2 + ((ulonglong)*puVar2 - 1);
  }
  uVar7 = *puVar3 - 0x62;
  if ((uVar7 & 0xffff) < 0xc) {
    if ((0x533U >> (uVar7 & 0x1f) & 1) == 0) {
      if ((0x20cU >> (uVar7 & 0x1f) & 1) == 0) {
        param_4[1] = (uint)(puVar3[1] == 0);
        puVar3 = puVar3 + 3;
        goto LAB_00e90513;
      }
    }
    else {
      param_4[1] = 1;
    }
    puVar3 = puVar3 + 1;
  }
LAB_00e90513:
  param_4[2] = (uint)((ulonglong)((longlong)puVar3 - (longlong)puVar2) >> 1);
  return puVar3;
}

