/* Ghidra address: 00a67a20 */
/* Ghidra symbol: FUN_00a67a20 */


void FUN_00a67a20(longlong param_1)

{
  short sVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  char cVar6;
  undefined8 local_40 [2];
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20 [2];
  
  local_40[0] = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  cVar6 = '\0';
  FUN_00a63b40(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x80),0);
  sVar1 = *(short *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x80) + 0x10);
  if (sVar1 == 0x22) {
    uVar4 = FUN_00414480(local_20);
    cVar6 = FUN_00a639d0(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x80),uVar4);
  }
  else if (sVar1 == 0x75) {
    uVar4 = FUN_00414480(local_20);
    cVar2 = FUN_00a62fc0(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x80),uVar4);
    if (cVar2 != '\0') {
      FUN_0043e1a0(local_40,local_20[0]);
      iVar3 = FUN_00416db0(local_40[0],&DAT_00a67d38);
      if ((iVar3 == 0) &&
         (*(short *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x80) + 0x10) == 0x28)) {
        FUN_00a62d70(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x80),0);
        FUN_00a63b40(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x80),0);
        uVar4 = FUN_00414480(local_20);
        cVar2 = FUN_00a639d0(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x80),uVar4);
        if (cVar2 != '\0') {
          FUN_00a63b40(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x80),0);
          cVar6 = *(short *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x80) + 0x10) == 0x29;
          if ((bool)cVar6) {
            FUN_00a62d70(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x80),0);
          }
        }
      }
    }
  }
  if (cVar6 != '\0') {
    while ((sVar1 = *(short *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x80) + 0x10),
           sVar1 != 0 && (1 < (ushort)(sVar1 - 0x3bU)))) {
      iVar3 = 0;
      if (local_28 != 0) {
        iVar3 = *(int *)(local_28 + -4);
      }
      FUN_004169f0(&local_28,iVar3 + 1);
      lVar5 = FUN_00414de0(&local_28);
      iVar3 = 0;
      if (local_28 != 0) {
        iVar3 = *(int *)(local_28 + -4);
      }
      *(short *)(lVar5 + -2 + (longlong)iVar3 * 2) = sVar1;
      FUN_00a62d70(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x80),0);
    }
    uVar4 = FUN_00419430(&local_30,&DAT_00a2b798);
    FUN_00a67590(local_28,uVar4);
    FUN_00a67670(*(undefined8 *)(param_1 + 0x50),local_30);
  }
  if (*(short *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x80) + 0x10) == 0x3b) {
    FUN_00a62d70(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x80),0);
  }
  else {
    FUN_00a67740(param_1,0);
  }
  FUN_00414480(local_40);
  FUN_00419430(&local_30,&DAT_00a2b798);
  FUN_00414560(&local_28,2);
  return;
}

