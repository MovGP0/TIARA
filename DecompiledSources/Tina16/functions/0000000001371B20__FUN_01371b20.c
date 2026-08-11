/* Ghidra address: 01371b20 */
/* Ghidra symbol: FUN_01371b20 */


void FUN_01371b20(longlong param_1,double *param_2,char param_3,undefined8 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  double *pdVar11;
  int iVar12;
  bool bVar13;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0 [2];
  byte local_89;
  ulonglong local_88;
  undefined8 uStack_80;
  double local_78 [10];
  
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a0[0] = 0;
  local_a8 = 0;
  pdVar11 = local_78;
  for (lVar9 = 10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *pdVar11 = *param_2;
    param_2 = param_2 + 1;
    pdVar11 = pdVar11 + 1;
  }
  FUN_00414610(param_5);
  bVar1 = false;
  if (param_3 == '\0') {
    FUN_01af2b10(*(undefined8 *)(param_1 + 0xf10));
  }
  iVar12 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x468) + 0x10);
  iVar10 = 0;
  if (-1 < iVar12 + -1) {
    do {
      puVar3 = (undefined8 *)
               FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x468),iVar10);
      puVar4 = (undefined8 *)
               FUN_01cfde70(*puVar3,*(undefined1 *)(puVar3 + 1),
                            *(undefined1 *)((longlong)puVar3 + 9),(longlong)&uStack_80 + 7,
                            (longlong)&uStack_80 + 6,&local_89);
      uVar5 = (**(code **)(*(longlong *)*puVar3 + 0x2d0))
                        ((longlong *)*puVar3,*(byte *)(puVar3 + 1) - 1,&local_88);
      uStack_80._7_1_ = (byte)uVar5;
      if (uStack_80._7_1_ < 8) {
        uVar2 = (int)CONCAT71((int7)(uVar5 >> 8),1) << (uStack_80._7_1_ & 0x1f);
        uVar6 = (ulonglong)CONCAT31((int3)(uVar2 >> 8),(uVar2 & 0x90) != 0);
      }
      else {
        uVar6 = 0;
      }
      if (((char)uVar6 != '\0') && (*(char *)((longlong)puVar3 + 9) != '\0')) {
        if (uStack_80._7_1_ == 4) {
          *(undefined1 *)(local_88 + 0x2e) = 1;
          uVar6 = local_88;
        }
        else {
          uVar6 = 0;
          if (uStack_80._7_1_ == 7) {
            *(undefined1 *)(local_88 + 0x2e) = 1;
            uVar6 = local_88;
          }
        }
      }
      if (uStack_80._7_1_ < 8) {
        uVar2 = (int)CONCAT71((int7)(uVar6 >> 8),1) << (uStack_80._7_1_ & 0x1f);
        bVar13 = (uVar2 & 0x48) != 0;
        uVar6 = (ulonglong)CONCAT31((int3)(uVar2 >> 8),bVar13);
      }
      else {
        uVar6 = 0;
        bVar13 = false;
      }
      if (bVar13) {
        FUN_01d3a010(puVar4,uVar5 & 0xff,(&uStack_80)[iVar10 + 1]);
      }
      else {
        if (uStack_80._7_1_ == 5) {
          if (local_89 < 8) {
            bVar13 = ((int)CONCAT71((int7)(uVar6 >> 8),1) << (local_89 & 0x1f) & 0x90U) != 0;
          }
          else {
            bVar13 = false;
          }
          if ((!bVar13) || (*(char *)((longlong)puVar3 + 9) != '\x03')) {
            FUN_01d3a230(*(undefined8 *)(local_88 + 1),*(undefined8 *)(local_88 + 9),
                         *(byte *)((longlong)puVar3 + 9) - 1,(&uStack_80)[iVar10 + 1]);
            goto LAB_01371d7d;
          }
        }
        *puVar4 = (&uStack_80)[iVar10 + 1];
      }
LAB_01371d7d:
      if (iVar10 == 0) {
        FUN_00b8fec0(local_a0,*puVar4,*PTR_DAT_02005310,0,0x3cd203af9ee75616);
        FUN_004169a0(&local_a8,PTR_DAT_02004010 + 0x558);
        FUN_00416cd0(*(longlong *)(param_1 + 0xa0) + 0xe30,4,local_a0[0],&DAT_01372000,local_a8,
                     &LAB_01372010);
      }
      if ((!bVar1) &&
         (((double)(&uStack_80)[iVar10 + 1] == *(double *)((longlong)puVar3 + 0xc) ||
          ((double)(&uStack_80)[iVar10 + 1] == *(double *)((longlong)puVar3 + 0x14))))) {
        if (param_3 == '\0') {
          uVar7 = FUN_00b89270();
          FUN_00b8e520(uVar7,&local_b8,0x111);
          FUN_016fe2a0(local_b8,0x1589,0);
        }
        else {
          FUN_00de8980(&local_b0,0x111,*(undefined8 *)(param_1 + 0x1310));
          FUN_01b05000(local_b0,0);
        }
        bVar1 = true;
      }
      iVar10 = iVar10 + 1;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  if (*(char *)(param_1 + 0x1439) != '\0') {
    if (param_3 == '\0') {
      uVar7 = FUN_00b89270();
      FUN_00b8e520(uVar7,&local_c8,0x14c);
      FUN_016fe2a0(local_c8,0,0);
    }
    else {
      FUN_00de8980(&local_c0,0x14c,*(undefined8 *)(param_1 + 0x1310));
      FUN_01b05000(local_c0,0);
    }
  }
  if ((param_3 == '\0') && (*PTR_DAT_020023b0 == '\0')) {
    plVar8 = (longlong *)FUN_00f4adc0(&PTR_FUN_00f4a7f8,1,*(undefined8 *)PTR_DAT_02004030,param_1);
    FUN_00f4ae80(plVar8,local_78);
    (**(code **)(*plVar8 + 0x2d0))(plVar8);
  }
  if (param_3 == '\x04') {
    FUN_00f4b5b0(param_1,local_78,param_4,param_5);
  }
  FUN_00414560(&local_c8,6);
  FUN_00414480(&param_5);
  return;
}

