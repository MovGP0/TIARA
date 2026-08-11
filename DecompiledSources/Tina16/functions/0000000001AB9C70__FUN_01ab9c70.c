/* Ghidra address: 01ab9c70 */
/* Ghidra symbol: FUN_01ab9c70 */


void FUN_01ab9c70(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  char cVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  undefined1 local_48 [16];
  double local_38;
  undefined8 local_30;
  
  iVar11 = *(int *)(param_1[0x1f] + 0x10);
  iVar10 = 0;
  if (-1 < iVar11 + -1) {
    do {
      plVar9 = (longlong *)FUN_004aeac0(param_1[0x1f],iVar10);
      (**(code **)(*plVar9 + 0x120))(plVar9,param_3,param_2);
      (**(code **)(*plVar9 + 0x118))(plVar9);
      (**(code **)(*plVar9 + 0x128))(plVar9,param_3,param_2);
      iVar10 = iVar10 + 1;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  (**(code **)(*param_1 + 0x68))(param_1);
  if (((param_1[0x10] != 0) && (param_1[0x1d] != 0)) && (param_1[0x1e] != 0)) {
    uVar1 = *(undefined4 *)(param_1[0x1d] + 0xe8);
    uVar2 = *(undefined4 *)(param_1[0x1e] + 0xec);
    uVar3 = *(undefined4 *)(param_1[0x1d] + 0xec);
    uVar4 = *(undefined4 *)(param_1[0x1e] + 0xe8);
    FUN_00498350(local_48,uVar1,uVar2,uVar3,uVar4);
    (**(code **)(*param_1 + 0xb0))(param_1,local_48);
    (**(code **)(*(longlong *)param_1[0x10] + 0x10))((longlong *)param_1[0x10],param_1[0x13],0);
    *(undefined8 *)PTR_DAT_02005620 = 0;
    *(undefined8 *)PTR_DAT_020041f8 = 0;
    while( true ) {
      cVar6 = (**(code **)(*(longlong *)param_1[0x10] + 0x30))
                        ((longlong *)param_1[0x10],&local_30,&local_38,0);
      if (cVar6 == '\0') break;
      iVar11 = FUN_01cd60f0(param_1[0x1d],local_30);
      if (local_38 < *(double *)(param_1[0x1e] + 0xb8)) {
        local_38 = *(double *)(param_1[0x1e] + 0xb8);
      }
      if (*(double *)(param_1[0x1e] + 0xc0) <= local_38 &&
          local_38 != *(double *)(param_1[0x1e] + 0xc0)) {
        local_38 = *(double *)(param_1[0x1e] + 0xc0);
      }
      uVar7 = FUN_01cd60f0(param_1[0x1e],local_38);
      plVar9 = (longlong *)FUN_01d2b190(&PTR_FUN_01d29210,1);
      (**(code **)(*(longlong *)plVar9[0xc] + 0x10))((longlong *)plVar9[0xc],param_1[0xf]);
      FUN_00498350(local_48,uVar1,uVar2,uVar3,uVar4);
      (**(code **)(*plVar9 + 0xb0))(plVar9,local_48);
      lVar5 = param_1[0x1e];
      if (*(char *)(lVar5 + 0x70) == '\x01') {
        uVar8 = FUN_01cd60f0(lVar5,*(undefined8 *)(lVar5 + 0xb8));
        FUN_01d2c460(plVar9,iVar11,uVar8);
      }
      else {
        uVar8 = FUN_01cd60f0(lVar5,0x3d719799812dea11);
        FUN_01d2c460(plVar9,iVar11,uVar8);
      }
      FUN_01d2c460(plVar9,iVar11,uVar7);
      if (*(char *)(*(longlong *)(param_1[0x11] + 8) + 0x434) == '\b') {
        FUN_01d2c460(plVar9,iVar11 + -5,uVar7);
        FUN_01d2c460(plVar9,iVar11 + 5,uVar7);
      }
      (**(code **)(*(longlong *)param_1[9] + 0x80))((longlong *)param_1[9],L"DiscCurveLine",plVar9);
    }
  }
  return;
}

