/* Ghidra address: 00a639d0 */
/* Ghidra symbol: FUN_00a639d0 */


ulonglong FUN_00a639d0(longlong param_1,longlong *param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  undefined8 unaff_RDI;
  ulonglong uVar4;
  short sVar5;
  
  *param_2 = 0;
  sVar5 = 0;
  FUN_00414480(param_2);
  if ((*(short *)(param_1 + 0x10) == 0x22) || (*(short *)(param_1 + 0x10) == 0x27)) {
    iVar2 = 0;
    if (*param_2 != 0) {
      iVar2 = *(int *)(*param_2 + -4);
    }
    FUN_004169f0(param_2,iVar2 + 1);
    lVar3 = FUN_00414de0(param_2);
    iVar2 = 0;
    if (*param_2 != 0) {
      iVar2 = *(int *)(*param_2 + -4);
    }
    *(undefined2 *)(lVar3 + -2 + (longlong)iVar2 * 2) = *(undefined2 *)(param_1 + 0x10);
    sVar5 = *(short *)(param_1 + 0x10);
    uVar4 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  }
  else {
    uVar4 = 0;
  }
  bVar1 = false;
  do {
    if ((char)uVar4 == '\0') {
code_r0x00a63b30:
      return uVar4 & 0xffffffff;
    }
    FUN_00a62d70(param_1,0);
    if (*(short *)(param_1 + 0x10) == 10) {
      uVar4 = 0;
      goto code_r0x00a63b30;
    }
    if (*(short *)(param_1 + 0x10) == 0x5c) {
      iVar2 = 0;
      if (*param_2 != 0) {
        iVar2 = *(int *)(*param_2 + -4);
      }
      FUN_004169f0(param_2,iVar2 + 1);
      lVar3 = FUN_00414de0(param_2);
      iVar2 = 0;
      if (*param_2 != 0) {
        iVar2 = *(int *)(*param_2 + -4);
      }
      *(undefined2 *)(lVar3 + -2 + (longlong)iVar2 * 2) = *(undefined2 *)(param_1 + 0x10);
      bVar1 = true;
    }
    else {
      iVar2 = 0;
      if (*param_2 != 0) {
        iVar2 = *(int *)(*param_2 + -4);
      }
      FUN_004169f0(param_2,iVar2 + 1);
      lVar3 = FUN_00414de0(param_2);
      iVar2 = 0;
      if (*param_2 != 0) {
        iVar2 = *(int *)(*param_2 + -4);
      }
      *(undefined2 *)(lVar3 + -2 + (longlong)iVar2 * 2) = *(undefined2 *)(param_1 + 0x10);
      if ((*(short *)(param_1 + 0x10) == sVar5) && (!bVar1)) {
        FUN_00a62d70(param_1,0);
        goto code_r0x00a63b30;
      }
      bVar1 = false;
    }
  } while( true );
}

