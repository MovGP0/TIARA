/* Ghidra address: 0113e050 */
/* Ghidra symbol: FUN_0113e050 */


undefined1 FUN_0113e050(longlong *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  byte *pbVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  byte local_29;
  
  uVar1 = (**(code **)(*(longlong *)param_1[0x13b] + 0x260))((longlong *)param_1[0x13b]);
  lVar4 = FUN_004095c0(1000);
  iVar2 = (**(code **)(*(longlong *)param_1[0x13b] + 0x298))();
  iVar8 = 0;
  if (-1 < iVar2 + -1) {
    do {
      lVar5 = (**(code **)(**(longlong **)(param_1[0x13b] + 0x4f0) + 0x30))
                        (*(longlong **)(param_1[0x13b] + 0x4f0),iVar8);
      if (*(char *)(lVar5 + 0x17c) == '\0') {
        *(undefined1 *)(lVar4 + iVar8) = 0;
        (**(code **)(*(longlong *)param_1[0x13b] + 0x268))((longlong *)param_1[0x13b],iVar8);
        FUN_0113d390(param_1,param_1);
        FUN_0082a6c0(param_1[0xf8],1);
        (**(code **)(*param_1 + 0x3d8))(param_1,param_1);
      }
      else {
        lVar5 = (**(code **)(**(longlong **)(param_1[0x13b] + 0x4f0) + 0x30))
                          (*(longlong **)(param_1[0x13b] + 0x4f0),iVar8);
        *(undefined1 *)(lVar4 + iVar8) = *(undefined1 *)(lVar5 + 0x188);
      }
      iVar8 = iVar8 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (param_2 == 0) {
    local_29 = 0xff;
    iVar2 = 10;
    pbVar6 = PTR_DAT_02005c58;
    do {
      if (*pbVar6 < local_29) {
        local_29 = *pbVar6;
      }
      pbVar6 = pbVar6 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  else {
    local_29 = 0;
  }
  iVar2 = (**(code **)(*(longlong *)param_1[0x13b] + 0x298))();
  if (-1 < iVar2 + -1) {
    do {
      iVar8 = 0;
      iVar3 = (**(code **)(*(longlong *)param_1[0x13b] + 0x298))();
      iVar9 = 0;
      bVar7 = local_29;
      if (-1 < iVar3 + -1) {
        do {
          if (bVar7 < *(byte *)(lVar4 + iVar9)) {
            iVar8 = iVar9;
            bVar7 = *(byte *)(lVar4 + iVar9);
          }
          iVar9 = iVar9 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      if (bVar7 != local_29) {
        *(undefined1 *)(lVar4 + iVar8) = 0;
        (**(code **)(*(longlong *)param_1[0x13b] + 0x268))((longlong *)param_1[0x13b],iVar8);
        FUN_0113d390(param_1,param_1);
        FUN_0082a6c0(param_1[0xf7],1);
        (**(code **)(*param_1 + 0x3e0))(param_1,param_1);
        FUN_00f835c0(500);
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  (**(code **)(*(longlong *)param_1[0x13b] + 0x268))((longlong *)param_1[0x13b],uVar1);
  FUN_0113d390(param_1,param_1);
  FUN_004095f0(lVar4);
  return *(undefined1 *)(param_1[0x142] + 0x148);
}

