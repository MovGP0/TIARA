/* Ghidra address: 01967ea0 */
/* Ghidra symbol: FUN_01967ea0 */


void FUN_01967ea0(longlong *param_1,longlong *param_2,double param_3,double param_4,double param_5,
                 double param_6)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  longlong lVar15;
  bool bVar16;
  double dVar17;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48 [24];
  undefined8 local_30;
  
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_30 = 0;
  cVar1 = FUN_01953ba0(param_1);
  if (cVar1 != '\0') {
    dVar17 = (double)FUN_019508b0(param_1);
    uVar2 = FUN_0040c770(dVar17 * param_3 + param_5);
    dVar17 = (double)FUN_01950860(param_1);
    uVar3 = FUN_0040c770(dVar17 * param_4 + param_6);
    dVar17 = (double)FUN_019508b0(param_1);
    uVar4 = FUN_0040c770((dVar17 + (double)param_1[0x15]) * param_3 + param_5);
    dVar17 = (double)FUN_01950860(param_1);
    uVar5 = FUN_0040c770((dVar17 + (double)param_1[0x16]) * param_4 + param_6);
    (**(code **)(*(longlong *)param_1[0x3a] + 0x18))
              ((longlong *)param_1[0x3a],param_2,uVar2,uVar3,uVar4,uVar5,param_3,param_4);
    if (*(char *)((longlong)param_1 + 0x1cc) == '\0') {
      (**(code **)(*param_1 + 200))(param_1,0);
      uVar12 = FUN_01950600(param_1);
      cVar1 = FUN_004113d0(uVar12,&PTR_FUN_01934910);
      if ((cVar1 != '\0') && (lVar15 = FUN_01950600(param_1), 1 < *(int *)(lVar15 + 0x180))) {
        uVar11 = FUN_01968a80(param_1);
        if (uVar11 < 0x20) {
          bVar16 = (1 << ((byte)uVar11 & 0x1f) & 0x1fff0U) != 0;
        }
        else {
          bVar16 = false;
        }
        if (bVar16) {
          lVar15 = FUN_01950600(param_1);
          (**(code **)(*param_1 + 0xd8))(param_1,*(double *)(lVar15 + 0x188) * DAT_01fb7da0);
        }
      }
      FUN_005fd670(param_2[0xf],0);
      FUN_005fd4e0(param_2[0xf],0x808080);
      FUN_005fd6d0(param_2[0xf],1);
      FUN_005fdcb0(param_2[0x10],1);
      iVar6 = FUN_0040c770(((double)param_1[0x14] - (double)param_1[0x3f]) * param_4);
      iVar7 = FUN_0040c770((double)param_1[0x15] * param_3);
      iVar10 = FUN_0040c770(((double)param_1[0x14] + (double)param_1[0x16]) * param_4);
      (**(code **)(*param_2 + 0xf8))(param_2,0,iVar6,iVar7 + 1,iVar10 + 1);
      if ((double)param_1[0x3f] != 0.0) {
        FUN_005fdcb0(param_2[0x10],0);
        uVar8 = (**(code **)(*param_1 + 0x2b0))(param_1);
        FUN_005fdab0(param_2[0x10],uVar8);
        uVar8 = FUN_0040c770((double)param_1[0x15] * param_3);
        uVar9 = FUN_0040c770((double)param_1[0x14] * param_4);
        FUN_00498350(local_48,1,iVar6 + 1,uVar8,uVar9);
        (**(code **)(*param_2 + 0xa8))(param_2,local_48);
      }
      FUN_005fcd80(param_2[0xe],L"Tahoma");
      FUN_005fce30(param_2[0xe],8);
      lVar15 = param_2[0xe];
      iVar7 = FUN_005fcc70(lVar15);
      uVar8 = FUN_0040c770(((double)iVar7 * param_4) /
                           ((double)*(int *)(*(longlong *)PTR_DAT_02005950 + 0x98) /
                           (double)DAT_01fb7de8));
      FUN_005fcc80(lVar15,uVar8);
      FUN_005fc860(param_2[0xe],0);
      FUN_005fce70(param_2[0xe],1);
      uVar12 = FUN_0180bfb0();
      FUN_01968830(param_1,&local_68);
      FUN_01809b60(uVar12,&local_30,local_68);
      (**(code **)(*param_2 + 0x120))(param_2,6,iVar6 + 2,local_30);
      FUN_005fce70(param_2[0xe],0);
      uVar8 = (**(code **)(*param_2 + 0x28))(param_2);
      FUN_00416ba0(&local_70,&DAT_01968818,param_1[2]);
      (**(code **)(*param_2 + 0x120))(param_2,uVar8,iVar6 + 2,local_70);
    }
    else {
      (**(code **)(*param_1 + 0xd0))(param_1,0);
      FUN_005fd670(param_2[0xf],0);
      FUN_005fd4e0(param_2[0xf],0x808080);
      FUN_005fd6d0(param_2[0xf],1);
      FUN_005fdcb0(param_2[0x10],1);
      iVar6 = FUN_0040c770(((double)param_1[0x13] - (double)param_1[0x3f]) * param_3);
      iVar7 = FUN_0040c770(((double)param_1[0x13] + (double)param_1[0x15]) * param_3);
      uVar8 = FUN_0040c770((double)param_1[0x16] * param_4);
      (**(code **)(*param_2 + 0xf8))(param_2,iVar6,0,iVar7 + 1,uVar8);
      if ((double)param_1[0x3f] != 0.0) {
        FUN_005fdcb0(param_2[0x10],0);
        uVar8 = (**(code **)(*param_1 + 0x2b0))(param_1);
        FUN_005fdab0(param_2[0x10],uVar8);
        uVar8 = FUN_0040c770((double)param_1[0x13] * param_3);
        uVar9 = FUN_0040c770((double)param_1[0x16] * param_4);
        FUN_00498350(local_48,iVar6 + 1,1,uVar8,uVar9);
        (**(code **)(*param_2 + 0xa8))(param_2,local_48);
      }
      FUN_005fcd80(param_2[0xe],L"Tahoma");
      FUN_005fce30(param_2[0xe],8);
      lVar15 = param_2[0xe];
      iVar7 = FUN_005fcc70(lVar15);
      uVar8 = FUN_0040c770(((double)iVar7 * param_4) /
                           ((double)*(int *)(*(longlong *)PTR_DAT_02005950 + 0x98) /
                           (double)DAT_01fb7de8));
      FUN_005fcc80(lVar15,uVar8);
      FUN_005fc860(param_2[0xe],0);
      FUN_005fce70(param_2[0xe],0);
      uVar12 = FUN_018d3c70(param_2[0xe],0x5a);
      uVar13 = FUN_005ffa40(param_2);
      uVar13 = thunk_FUN_041a19a1(uVar13,uVar12);
      iVar7 = FUN_005fdff0(param_2,param_1[2]);
      (**(code **)(*param_2 + 0x120))(param_2,iVar6 + 2,iVar7 + 4,param_1[2]);
      uVar14 = FUN_005ffa40(param_2);
      thunk_FUN_041a19a1(uVar14,uVar13);
      thunk_FUN_0416f828(uVar12);
      FUN_005fce70(param_2[0xe],1);
      uVar12 = FUN_018d3c70(param_2[0xe],0x5a);
      uVar13 = FUN_005ffa40(param_2);
      uVar13 = thunk_FUN_041a19a1(uVar13,uVar12);
      uVar14 = FUN_0180bfb0();
      FUN_01968830(param_1,&local_50);
      FUN_01809b60(uVar14,&local_30,local_50);
      FUN_00416ba0(&local_58,local_30,&DAT_01968818);
      iVar10 = FUN_005fdff0(param_2,local_58);
      FUN_00416ba0(&local_60,local_30,&DAT_01968818);
      (**(code **)(*param_2 + 0x120))(param_2,iVar6 + 2,iVar7 + 4 + iVar10 + 2,local_60);
      uVar14 = FUN_005ffa40(param_2);
      thunk_FUN_041a19a1(uVar14,uVar13);
      thunk_FUN_0416f828(uVar12);
    }
    lVar15 = param_1[0x28];
    if (lVar15 != 0) {
      FUN_00498350(local_48,uVar2,uVar3,uVar4,uVar5);
      FUN_0197deb0(lVar15,param_2,local_48);
    }
  }
  FUN_00414560(&local_70,5);
  FUN_00414480(&local_30);
  return;
}

