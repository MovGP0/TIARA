/* Ghidra address: 0089f060 */
/* Ghidra symbol: FUN_0089f060 */


undefined1 FUN_0089f060(longlong param_1)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  undefined1 local_81;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  longlong local_40 [4];
  
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50[0] = 0;
  local_40[0] = 0;
  local_81 = 0;
  FUN_00414b50(local_40,**(undefined8 **)(param_1 + 0x100));
  iVar3 = 0;
  if (local_40[0] != 0) {
    iVar3 = *(int *)(local_40[0] + -4);
  }
  cVar1 = FUN_008752e0(local_40[0],4,1);
  if (cVar1 == '\0') goto LAB_0089f48f;
  *(undefined2 *)(param_1 + 0xe6) = 1;
  *(undefined2 *)(param_1 + 0xe4) = 1;
  *(undefined2 *)(param_1 + 0xe2) = 0;
  *(undefined2 *)(param_1 + 0xe0) = 0;
  *(undefined2 *)(param_1 + 0xde) = 0;
  *(undefined2 *)(param_1 + 0xdc) = 0;
  FUN_00416dc0(local_50,local_40[0],1,4);
  uVar2 = FUN_00877c50(local_50[0]);
  *(undefined2 *)(param_1 + 0xda) = uVar2;
  iVar4 = 5;
  if (4 < iVar3) {
    cVar1 = FUN_00879280(local_40[0],5,0x2d);
    if (cVar1 == '\0') goto LAB_0089f48f;
    cVar1 = FUN_008752e0(local_40[0],2,6);
    if (cVar1 == '\0') goto LAB_0089f48f;
    FUN_00416dc0(&local_58,local_40[0],6,2);
    uVar2 = FUN_00877c50(local_58);
    *(undefined2 *)(param_1 + 0xe4) = uVar2;
    iVar4 = 8;
    if (7 < iVar3) {
      cVar1 = FUN_00879280(local_40[0],8,0x2d);
      if (cVar1 == '\0') goto LAB_0089f48f;
      cVar1 = FUN_008752e0(local_40[0],2,9);
      if (cVar1 == '\0') goto LAB_0089f48f;
      FUN_00416dc0(&local_60,local_40[0],9,2);
      uVar2 = FUN_00877c50(local_60);
      *(undefined2 *)(param_1 + 0xe6) = uVar2;
      iVar4 = 0xb;
      if (10 < iVar3) {
        cVar1 = FUN_00879280(local_40[0],0xb,0x54);
        if (cVar1 == '\0') goto LAB_0089f48f;
        cVar1 = FUN_008752e0(local_40[0],2,0xc);
        if (cVar1 == '\0') goto LAB_0089f48f;
        cVar1 = FUN_00879280(local_40[0],0xe,0x3a);
        if (cVar1 == '\0') goto LAB_0089f48f;
        FUN_00416dc0(&local_68,local_40[0],0xc,2);
        uVar2 = FUN_00877c50(local_68);
        *(undefined2 *)(param_1 + 0xe2) = uVar2;
        cVar1 = FUN_008752e0(local_40[0],2,0xf);
        if (cVar1 == '\0') goto LAB_0089f48f;
        FUN_00416dc0(&local_70,local_40[0],0xf,2);
        uVar2 = FUN_00877c50(local_70);
        *(undefined2 *)(param_1 + 0xe0) = uVar2;
        iVar4 = 0x11;
        if (iVar3 < 0x11) goto LAB_0089f48f;
        cVar1 = FUN_00879280(local_40[0],0x11,0x3a);
        if (cVar1 != '\0') {
          cVar1 = FUN_008752e0(local_40[0],2,0x12);
          if (cVar1 == '\0') goto LAB_0089f48f;
          FUN_00416dc0(&local_78,local_40[0],0x12,2);
          uVar2 = FUN_00877c50(local_78);
          *(undefined2 *)(param_1 + 0xde) = uVar2;
          iVar4 = 0x14;
          if (iVar3 < 0x14) goto LAB_0089f48f;
          cVar1 = FUN_00879280(local_40[0],0x14,0x2e);
          if (cVar1 != '\0') {
            iVar4 = FUN_008b04e0(L"0123456789",local_40[0],0xffffffff,0x15);
            if (iVar4 == 0) goto LAB_0089f48f;
            FUN_00416dc0(&local_80,local_40[0],0x15,iVar4 + -0x15);
            uVar2 = FUN_00877c50(local_80);
            *(undefined2 *)(param_1 + 0xdc) = uVar2;
            iVar4 = iVar4 + 1;
          }
        }
      }
    }
  }
  dVar5 = (double)FUN_00448c80(*(undefined2 *)(param_1 + 0xda),*(undefined2 *)(param_1 + 0xe4),
                               *(undefined2 *)(param_1 + 0xe6));
  dVar6 = (double)FUN_00448a90(*(undefined2 *)(param_1 + 0xe2),*(undefined2 *)(param_1 + 0xe0),
                               *(undefined2 *)(param_1 + 0xde),*(undefined2 *)(param_1 + 0xdc));
  **(double **)(param_1 + 0x108) = dVar5 + dVar6;
  FUN_00416dc0(*(undefined8 *)(param_1 + 0x100),local_40[0],iVar4,0x7fffffff);
  local_81 = 1;
LAB_0089f48f:
  FUN_00414560(&local_80,7);
  FUN_00414480(local_40);
  return local_81;
}

