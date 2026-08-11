/* Ghidra address: 012aee60 */
/* Ghidra symbol: FUN_012aee60 */


void FUN_012aee60(longlong *param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  byte bVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 local_a0 [2];
  undefined1 local_89;
  double local_88;
  undefined1 local_79 [73];
  
  local_a0[0] = 0;
  if ((((*(char *)((longlong)param_1 + 0x7ed) == '\0') && ((char)param_1[0x1ba] == '\0')) &&
      (lVar3 = (**(code **)(*param_1 + 0x458))(param_1), lVar3 != 0)) &&
     (lVar3 = (**(code **)(*param_1 + 0x458))(param_1),
     *(char *)(*(longlong *)(lVar3 + 8) + 0x434) == '\x03')) {
    while (iVar1 = (**(code **)(**(longlong **)(param_1[0xfb] + 0x4f0) + 0x28))
                             (*(longlong **)(param_1[0xfb] + 0x4f0)),
          (int)(uint)*(byte *)((longlong)param_1 + 0xd8a) < iVar1) {
      plVar7 = *(longlong **)(param_1[0xfb] + 0x4f0);
      iVar1 = (**(code **)(*plVar7 + 0x28))(plVar7);
      uVar4 = (**(code **)(*plVar7 + 0x30))(plVar7,iVar1 + -1);
      local_89 = 0;
      FUN_010f6740(param_1,uVar4,0,&local_89,0);
      FUN_00410f20(uVar4);
      plVar7 = *(longlong **)(param_1[0xfb] + 0x4f0);
      iVar1 = (**(code **)(*plVar7 + 0x28))(plVar7);
      (**(code **)(*plVar7 + 0x98))(plVar7,iVar1 + -1);
    }
    uVar4 = (**(code **)(*param_1 + 0x458))(param_1);
    FUN_01cc6020(uVar4);
    if (param_1[0x135] != 0) {
      FUN_01cc6030(param_1[0x135]);
    }
    lVar5 = (**(code **)(*param_1 + 0x458))(param_1);
    param_1[0x135] = lVar5;
    bVar8 = 0;
    iVar1 = (**(code **)(**(longlong **)(param_1[0xfb] + 0x4f0) + 0x28))
                      (*(longlong **)(param_1[0xfb] + 0x4f0));
    if (iVar1 != 0) {
      plVar7 = *(longlong **)(param_1[0xfb] + 0x4f0);
      iVar1 = (**(code **)(*plVar7 + 0x28))(plVar7);
      lVar5 = (**(code **)(*plVar7 + 0x30))(plVar7,iVar1 + -1);
      bVar8 = *(byte *)(lVar5 + 0x80);
    }
    uVar4 = (**(code **)(*param_1 + 0x458))(param_1);
    lVar5 = FUN_01cc6f70(&PTR_FUN_01cb8940,1,uVar4);
    param_1[0x1b4] = lVar5;
    plVar7 = (longlong *)param_1[0x1b4];
    FUN_01cc5c60(lVar3);
    do {
      lVar5 = FUN_01cc5cc0(lVar3);
      if (((lVar5 != 0) && (*(char *)(lVar5 + 0x3a) == '\x01')) && (*(char *)(lVar5 + 0x18) != '\0')
         ) {
        bVar8 = bVar8 + 1;
        plVar6 = (longlong *)FUN_01107340(&PTR_FUN_01105a20,1);
        dVar9 = (double)(**(code **)(*plVar7 + 0x58))(plVar7,lVar5);
        dVar10 = (double)(**(code **)(*plVar7 + 0x60))(plVar7,lVar5);
        uVar4 = (**(code **)(*plVar7 + 0x68))(plVar7,lVar5);
        uVar11 = (**(code **)(*plVar7 + 0x70))(plVar7,lVar5);
        FUN_00b90440(param_1[0x1a2],dVar9);
        uVar2 = FUN_012aedc0(param_1,dVar10 - dVar9);
        *(char *)((longlong)param_1 + 0xd93) = (char)uVar2;
        (**(code **)(*(longlong *)param_1[0x1b7] + 0x100))((longlong *)param_1[0x1b7],uVar2);
        (**(code **)(*(longlong *)param_1[0x1b7] + 0xf8))
                  ((longlong *)param_1[0x1b7],(longlong)param_1 + 0xd93,&local_88,1);
        FUN_00b90440(param_1[0x1a5],local_88);
        *(undefined1 *)(plVar6 + 2) = 0;
        *(undefined1 *)((longlong)plVar6 + 0x11) = 1;
        FUN_01cc0ae0(lVar5,local_a0);
        FUN_00416ba0(plVar6 + 1,local_a0[0],&LAB_012af444);
        *(undefined1 *)(plVar6 + 7) = 1;
        uVar11 = FUN_0040c850(uVar11);
        uVar4 = FUN_0040c850(uVar4);
        local_88 = (double)FUN_00b90620(uVar11,uVar4);
        local_88 = local_88 / ((double)*(byte *)(param_1 + 0x1b1) / 2.0);
        (**(code **)(*(longlong *)param_1[0x1b7] + 0x78))
                  ((longlong *)param_1[0x1b7],local_79,&local_88,0);
        *(undefined1 *)((longlong)plVar6 + 0x2a) = local_79[0];
        plVar6[0x22] = 0;
        plVar6[0x23] = (longlong)local_88;
        *(char *)(plVar6 + 0x24) = (char)param_1[0x1b1];
        *(uint *)(plVar6 + 0x10) = (uint)bVar8 % 0xb;
        uVar4 = (**(code **)(*param_1 + 0x458))(param_1);
        (**(code **)(*plVar6 + 0x10))(plVar6,lVar5,uVar4);
        (**(code **)(**(longlong **)(param_1[0xfb] + 0x4f0) + 0x80))
                  (*(longlong **)(param_1[0xfb] + 0x4f0),plVar6[1],plVar6);
      }
    } while (lVar5 != 0);
    (**(code **)(*(longlong *)param_1[0xfb] + 0x268))
              ((longlong *)param_1[0xfb],*(undefined1 *)((longlong)param_1 + 0xd8a));
    (**(code **)(*param_1 + 0x3f0))(param_1,param_1);
    FUN_012aec90(param_1);
    FUN_010f67e0(param_1,1,1);
    FUN_00410f20(param_1[0x1b4]);
    iVar1 = (**(code **)(**(longlong **)(param_1[0xfb] + 0x4f0) + 0x28))
                      (*(longlong **)(param_1[0xfb] + 0x4f0));
    if (iVar1 == 0) {
      lVar3 = FUN_01107340(&PTR_FUN_01105a20,1);
      param_1[0x10e] = lVar3;
      plVar7 = (longlong *)FUN_004113f0(lVar3,&PTR_FUN_01105a20);
      (**(code **)(*plVar7 + 8))(plVar7,param_1[0x10d]);
      (**(code **)(**(longlong **)(param_1[0xfb] + 0x4f0) + 0x80))
                (*(longlong **)(param_1[0xfb] + 0x4f0),0,param_1[0x10e]);
      (**(code **)(*(longlong *)param_1[0xfb] + 0x268))((longlong *)param_1[0xfb],0);
    }
  }
  FUN_00414480(local_a0);
  return;
}

