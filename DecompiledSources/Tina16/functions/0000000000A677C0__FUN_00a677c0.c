/* Ghidra address: 00a677c0 */
/* Ghidra symbol: FUN_00a677c0 */


void FUN_00a677c0(longlong param_1)

{
  short sVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 local_28;
  longlong local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  while (((sVar1 = *(short *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x80) + 0x10),
          sVar1 != 0 && (1 < (ushort)(sVar1 - 0x3bU))) && (sVar1 != 0x7b))) {
    iVar4 = 0;
    if (local_20[0] != 0) {
      iVar4 = *(int *)(local_20[0] + -4);
    }
    FUN_004169f0(local_20,iVar4 + 1);
    lVar5 = FUN_00414de0(local_20);
    iVar4 = 0;
    if (local_20[0] != 0) {
      iVar4 = *(int *)(local_20[0] + -4);
    }
    *(short *)(lVar5 + -2 + (longlong)iVar4 * 2) = sVar1;
    FUN_00a62d70(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x80),0);
  }
  uVar6 = FUN_00419430(&local_28,&DAT_00a2b798);
  FUN_00a67590(local_20[0],uVar6);
  sVar1 = *(short *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x80) + 0x10);
  if (sVar1 == 0x3b) {
    FUN_00a62d70(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x80),0);
  }
  else if (sVar1 == 0x7b) {
    cVar3 = FUN_00a67670(*(undefined8 *)(param_1 + 0x50),local_28);
    if (cVar3 == '\0') {
      FUN_00a67740(param_1,1);
    }
    else {
      FUN_00a62d70(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x80),0);
      do {
        plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x80) + 0x38);
        (**(code **)(*plVar2 + 0x90))(plVar2);
        FUN_00a68710(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x80));
        FUN_00a68280(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x80));
        FUN_00a63b40(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x80),0);
        sVar1 = *(short *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x80) + 0x10);
        if ((sVar1 == 0) || (sVar1 == 0x3c)) goto code_r0x00a679c6;
      } while (sVar1 != 0x7d);
      FUN_00a62d70(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x80),0);
    }
  }
  else {
    FUN_00a67740(param_1,0);
  }
code_r0x00a679c6:
  FUN_00419430(&local_28,&DAT_00a2b798);
  FUN_00414480(local_20);
  return;
}

