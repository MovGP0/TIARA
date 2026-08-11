/* Ghidra address: 00a66c30 */
/* Ghidra symbol: FUN_00a66c30 */


ulonglong FUN_00a66c30(longlong param_1,longlong *param_2)

{
  short sVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 unaff_RDI;
  ulonglong uVar5;
  
  *param_2 = 0;
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  FUN_00414480(param_2);
  if (*(short *)(param_1 + 0x26) == 0x2d) {
    sVar1 = FUN_00a66b70(param_1);
    if ((sVar1 == 0x2d) || ((ushort)(sVar1 - 0x30U) < 10)) {
      uVar5 = 0;
    }
    else {
      iVar2 = 0;
      if (*param_2 != 0) {
        iVar2 = *(int *)(*param_2 + -4);
      }
      FUN_004169f0(param_2,iVar2 + 1);
      lVar4 = FUN_00414de0(param_2);
      iVar2 = 0;
      if (*param_2 != 0) {
        iVar2 = *(int *)(*param_2 + -4);
      }
      *(undefined2 *)(lVar4 + -2 + (longlong)iVar2 * 2) = *(undefined2 *)(param_1 + 0x26);
      FUN_00a66ba0(param_1);
    }
  }
  else if ((ushort)(*(short *)(param_1 + 0x26) - 0x30U) < 10) {
    uVar5 = 0;
  }
  while ((char)uVar5 != '\0') {
    uVar3 = (ulonglong)*(ushort *)(param_1 + 0x26);
    if (uVar3 < 0x41) {
      if ((uVar3 != 0x2d) && (9 < uVar3 - 0x30)) {
LAB_00a66d25:
        if (*(ushort *)(param_1 + 0x26) < 0xa0) break;
      }
    }
    else if (((0x19 < uVar3 - 0x41) && (uVar3 != 0x5f)) && (0x19 < uVar3 - 0x61)) goto LAB_00a66d25;
    iVar2 = 0;
    if (*param_2 != 0) {
      iVar2 = *(int *)(*param_2 + -4);
    }
    FUN_004169f0(param_2,iVar2 + 1);
    lVar4 = FUN_00414de0(param_2);
    iVar2 = 0;
    if (*param_2 != 0) {
      iVar2 = *(int *)(*param_2 + -4);
    }
    *(undefined2 *)(lVar4 + -2 + (longlong)iVar2 * 2) = *(undefined2 *)(param_1 + 0x26);
    FUN_00a66ba0(param_1);
  }
  if ((char)uVar5 != '\0') {
    iVar2 = 0;
    if (*param_2 != 0) {
      iVar2 = *(int *)(*param_2 + -4);
    }
    uVar5 = CONCAT71((int7)(uVar5 >> 8),0 < iVar2);
  }
  return uVar5 & 0xffffffff;
}

