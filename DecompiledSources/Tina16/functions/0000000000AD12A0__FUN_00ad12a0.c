/* Ghidra address: 00ad12a0 */
/* Ghidra symbol: FUN_00ad12a0 */


ulonglong FUN_00ad12a0(longlong param_1,longlong *param_2)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 unaff_RSI;
  ulonglong uVar6;
  
  *param_2 = 0;
  FUN_00414480(param_2);
  sVar1 = *(short *)(param_1 + 0x20);
  if ((((ushort)(sVar1 - 0x41U) < 0x1a) || (sVar1 == 0x5f)) || ((ushort)(sVar1 - 0x61U) < 0x1a)) {
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  }
  else {
    uVar6 = 0;
  }
  while ((char)uVar6 != '\0') {
    uVar2 = *(ushort *)(param_1 + 0x20);
    uVar4 = (ulonglong)uVar2;
    if (uVar4 < 0x41) {
      if ((uVar4 != 0x2d) && (9 < uVar4 - 0x30)) break;
    }
    else if (((0x19 < uVar4 - 0x41) && (uVar4 != 0x5f)) && (0x19 < uVar4 - 0x61)) break;
    iVar3 = 0;
    if (*param_2 != 0) {
      iVar3 = *(int *)(*param_2 + -4);
    }
    FUN_004169f0(param_2,iVar3 + 1);
    lVar5 = FUN_00414de0(param_2);
    iVar3 = 0;
    if (*param_2 != 0) {
      iVar3 = *(int *)(*param_2 + -4);
    }
    *(ushort *)(lVar5 + -2 + (longlong)iVar3 * 2) = uVar2;
    FUN_00ad1170(param_1);
  }
  if ((char)uVar6 != '\0') {
    iVar3 = 0;
    if (*param_2 != 0) {
      iVar3 = *(int *)(*param_2 + -4);
    }
    uVar6 = CONCAT71((int7)(uVar6 >> 8),0 < iVar3);
  }
  return uVar6 & 0xffffffff;
}

