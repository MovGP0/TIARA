/* Ghidra address: 00407d90 */
/* Ghidra symbol: FUN_00407d90 */


ulonglong FUN_00407d90(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  char *pcVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  
  puVar9 = (undefined8 *)param_1[-1];
  if (((ulonglong)puVar9 & 7) != 0) {
    if (((ulonglong)puVar9 & 5) != 0) {
      if (((ulonglong)puVar9 & 3) != 0) {
        return 0xffffffff;
      }
      uVar10 = FUN_00407770();
      return uVar10;
    }
    goto LAB_00407e84;
  }
  pcVar3 = (char *)*puVar9;
  if (DAT_020060a9 != '\0') {
    while( true ) {
      do {
        LOCK();
        cVar2 = *pcVar3;
        if (cVar2 == '\0') {
          *pcVar3 = '\x01';
        }
        UNLOCK();
        if (cVar2 == '\0') goto LAB_00407db4;
      } while (DAT_02006a35 != '\0');
      thunk_FUN_0419965d(0);
      puVar9 = (undefined8 *)param_1[-1];
      LOCK();
      cVar2 = *pcVar3;
      if (cVar2 == '\0') {
        *pcVar3 = '\x01';
      }
      UNLOCK();
      if (cVar2 == '\0') break;
      thunk_FUN_0419965d(10);
      puVar9 = (undefined8 *)param_1[-1];
    }
  }
LAB_00407db4:
  piVar1 = (int *)(puVar9 + 4);
  *piVar1 = *piVar1 + -1;
  lVar4 = puVar9[3];
  if (*piVar1 != 0) {
    puVar9[3] = param_1;
    param_1[-1] = lVar4 + 1;
    if (lVar4 != 0) {
      *pcVar3 = '\0';
      return 0;
    }
    lVar4 = *(longlong *)(pcVar3 + 8);
    puVar9[2] = pcVar3;
    puVar9[1] = lVar4;
    *(undefined8 **)(lVar4 + 0x10) = puVar9;
    *(undefined8 **)(pcVar3 + 8) = puVar9;
    *pcVar3 = '\0';
    return 0;
  }
  if (lVar4 == 0) {
LAB_00407e14:
    pcVar3[0x20] = '\0';
    pcVar3[0x21] = '\0';
    pcVar3[0x22] = '\0';
    pcVar3[0x23] = '\0';
    pcVar3[0x24] = '\0';
    pcVar3[0x25] = '\0';
    pcVar3[0x26] = '\0';
    pcVar3[0x27] = '\0';
  }
  else {
    lVar4 = puVar9[2];
    lVar5 = puVar9[1];
    *(longlong *)(lVar4 + 8) = lVar5;
    *(longlong *)(lVar5 + 0x10) = lVar4;
    if (*(undefined8 **)(pcVar3 + 0x28) == puVar9) goto LAB_00407e14;
  }
  *pcVar3 = '\0';
  param_1 = puVar9;
  puVar9 = (undefined8 *)puVar9[-1];
LAB_00407e84:
  uVar10 = (ulonglong)puVar9 & 0xfffffffffffffff0;
  if (DAT_020060a9 != '\0') {
    FUN_00407440();
  }
  uVar8 = *(ulonglong *)((uVar10 - 8) + (longlong)param_1);
  if ((*(ulonglong *)((uVar10 - 8) + (longlong)param_1) & 1) == 0) {
    *(ulonglong *)((uVar10 - 8) + (longlong)param_1) = uVar8 | 8;
  }
  else {
    lVar4 = uVar10 + (longlong)param_1;
    uVar8 = uVar8 & 0xfffffffffffffff0;
    uVar10 = uVar10 + uVar8;
    if (0xb2f < uVar8) {
      FUN_00407490(lVar4);
    }
  }
  if ((*(byte *)(param_1 + -1) & 8) != 0) {
    lVar4 = param_1[-2];
    param_1 = (undefined8 *)((longlong)param_1 - lVar4);
    uVar10 = uVar10 + lVar4;
    if (0xb2f < (uint)lVar4) {
      FUN_00407490(param_1);
    }
  }
  if ((int)uVar10 == 0x13ffd0) {
    if (DAT_02006bb8 == 0x13ffd0) {
      lVar4 = param_1[-4];
      plVar6 = (longlong *)param_1[-3];
      *(longlong **)(lVar4 + 8) = plVar6;
      *plVar6 = lVar4;
      DAT_02006ba8 = 0;
      iVar7 = thunk_FUN_04184b1a(param_1 + -4,0,0x8000);
      uVar10 = (ulonglong)-(uint)(iVar7 == 0);
    }
    else {
      FUN_00407550();
      param_1[0x27ff9] = 2;
      DAT_02006bb8 = 0x13ffd0;
      uVar10 = 0;
      DAT_02006ba8 = 0;
      DAT_02006bb0 = param_1 + 0x27ffa;
    }
  }
  else {
    param_1[-1] = uVar10 + 3;
    *(ulonglong *)((uVar10 - 0x10) + (longlong)param_1) = uVar10;
    FUN_004074e0(param_1,uVar10);
    uVar10 = 0;
    DAT_02006ba8 = 0;
  }
  return uVar10;
}

