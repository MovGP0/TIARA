/* Ghidra address: 013b1f30 */
/* Ghidra symbol: FUN_013b1f30 */


void FUN_013b1f30(longlong param_1,longlong *param_2,longlong *param_3,char param_4)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 local_78;
  undefined8 uStack_70;
  int local_60;
  undefined4 local_5c;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  *PTR_DAT_02005310 = DAT_021083d9;
  uVar3 = FUN_007fd800(param_1);
  uVar4 = FUN_007fd7d0(param_1);
  FUN_00498370(&local_78,uVar3,uVar4,*(undefined4 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x9c)
              );
  DAT_021083a0 = local_78;
  DAT_021083a8 = uStack_70;
  if (param_3[0xa2] == 0) {
    (**(code **)(*param_3 + 0x50))(param_3,param_2,&local_38);
  }
  if ((param_4 == '\0') || (cVar1 = FUN_01d3bb80(param_3), cVar1 == '\0')) {
    sVar2 = (**(code **)(*param_3 + 0xf8))(param_3);
    if (sVar2 != 0x39) {
      uVar6 = FUN_01cfd6a0(DAT_02108398);
      FUN_01cfd660(param_3,uVar6);
    }
    if ((*PTR_DAT_02003720 != '\0') || (*PTR_DAT_02002b78 != '\0')) {
      lVar5 = FUN_019a4600();
      lVar5 = *(longlong *)(lVar5 + 0x488);
      if ((lVar5 != 0) &&
         (local_60 = FUN_01b07e10(lVar5,param_3), local_60 <= *(int *)(lVar5 + 0x2d8))) {
        uVar6 = FUN_01cfd6a0(param_3);
        *(undefined8 *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x2b0) + -8 + (longlong)local_60 * 8) + 0x48) = uVar6;
      }
    }
    sVar2 = (**(code **)(*param_3 + 0xf8))(param_3);
    if (((sVar2 != 0x39) && (DAT_02108398 != (longlong *)0x0)) && (DAT_02108398[0xa2] != 0)) {
      (**(code **)(*param_3 + 0x68))(param_3,param_2,local_48);
      FUN_00b957c0(&local_38,local_48);
      FUN_00c3f350(DAT_02108398[0xa2],param_3[0xa2]);
      uVar3 = (**(code **)(*DAT_02108398 + 0x1c8))(DAT_02108398);
      FUN_01d01990(param_3,uVar3);
      uVar3 = FUN_01cfcde0(DAT_02108398,*PTR_DAT_02002480,*PTR_DAT_02001560);
      local_5c._0_2_ = (short)uVar3;
      lVar5 = (longlong)(short)local_5c;
      local_5c._2_2_ = (short)((uint)uVar3 >> 0x10);
      lVar8 = (longlong)local_5c._2_2_;
      local_5c = uVar3;
      FUN_017bf150(param_3,param_2,lVar5,lVar8);
    }
    if (0 < *(int *)(DAT_021083b0 + 0x10)) {
      lVar5 = FUN_019a4600();
      cVar1 = FUN_01d07fe0(param_3,*(undefined8 *)(lVar5 + 0x470),&local_60);
      if (cVar1 == '\0') {
        iVar7 = *(int *)(DAT_021083b0 + 0x10);
        local_60 = 0;
        if (-1 < iVar7 + -1) {
          do {
            lVar5 = FUN_019a4600();
            uVar6 = FUN_004aeac0(DAT_021083b0,local_60);
            FUN_004ae7e0(*(undefined8 *)(lVar5 + 0x470),uVar6);
            local_60 = local_60 + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
      }
    }
    if (0 < *(int *)(DAT_021083b8 + 0x10)) {
      lVar5 = FUN_019a4600();
      cVar1 = FUN_01d07fe0(param_3,*(undefined8 *)(lVar5 + 0x468),&local_60);
      if (cVar1 == '\0') {
        iVar7 = *(int *)(DAT_021083b8 + 0x10);
        local_60 = 0;
        if (-1 < iVar7 + -1) {
          do {
            lVar5 = FUN_019a4600();
            uVar6 = FUN_004aeac0(DAT_021083b8,local_60);
            FUN_004ae7e0(*(undefined8 *)(lVar5 + 0x468),uVar6);
            local_60 = local_60 + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
      }
    }
    if ((0 < *(int *)(DAT_021083b0 + 0x10)) || (0 < *(int *)(DAT_021083b8 + 0x10))) {
      FUN_013ae1b0(DAT_021083c0,DAT_021083c8,DAT_021083d8,DAT_021083d0);
    }
  }
  else {
    iVar7 = *(int *)(*(longlong *)(param_1 + 0x6d0) + 0x4e0) + -1;
    local_60 = 1;
    if (0 < iVar7) {
      do {
        lVar5 = FUN_00b0add0(*(undefined8 *)(param_1 + 0x6d0),local_60);
        if (lVar5 != 0) {
          FUN_01cfdfc0(param_3,*(undefined4 *)(lVar5 + 0x18),*(undefined1 *)(lVar5 + 0x39));
        }
        local_60 = local_60 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    FUN_017be0e0(param_3,param_2,local_58,PTR_DAT_02004010[0x816],PTR_DAT_02004010[0x814],
                 *PTR_DAT_020037e8,PTR_DAT_02004010[0x815],*PTR_DAT_02005310);
    FUN_00b957c0(&DAT_021083dc,local_58);
    FUN_01d37030(param_3);
    FUN_0199e310(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8),1,1,0);
  }
  FUN_01d04aa0(param_3,param_2);
  (**(code **)(*param_3 + 0x1c0))(param_3,1,0);
  if (DAT_02108398 != (longlong *)0x0) {
    uVar6 = (**(code **)*DAT_02108398)(DAT_02108398);
    FUN_00418590(uVar6,&DAT_01cf1390);
  }
  iVar7 = FUN_00429b10(&DAT_021083a0);
  if (iVar7 == 0) {
    uVar6 = *(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0xa10);
    DAT_021083a0 = FUN_0064d3a0(uVar6,&DAT_021083a0);
    DAT_021083a8 = FUN_0064d3a0(uVar6,&DAT_021083a8);
    uVar6 = FUN_0065b870(uVar6);
    thunk_FUN_03a2fc9d(uVar6,&DAT_021083a0,0xffffffff);
    (**(code **)(*param_2 + 0x30))(param_2,local_38,local_34,local_30,local_2c);
    (**(code **)(*param_2 + 0x30))(param_2,DAT_021083dc,DAT_021083e0,DAT_021083e4,DAT_021083e8);
  }
  FUN_00410f20(DAT_021083b0);
  FUN_00410f20(DAT_021083b8);
  return;
}

