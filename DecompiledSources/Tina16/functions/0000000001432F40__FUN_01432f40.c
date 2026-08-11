/* Ghidra address: 01432f40 */
/* Ghidra symbol: FUN_01432f40 */


void FUN_01432f40(longlong param_1,int param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  
  local_70 = 0;
  local_60 = 0;
  local_68 = 0;
  local_50 = 0;
  local_58 = 0;
  local_48 = 0;
  local_40[0] = 0;
  local_30 = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  uVar5 = 0;
  if (param_2 == 0) {
    plVar3 = (longlong *)FUN_007fc180(&PTR_FUN_01429658,1,*(undefined8 *)PTR_DAT_02004030);
    FUN_015fcb30(&local_30,local_1c);
    FUN_0142aad0(plVar3,*(undefined8 *)(param_1 + 0x70));
    FUN_0142aae0(plVar3,local_30);
    lVar4 = FUN_0160d750(*(undefined8 *)(param_1 + 0x70),local_30);
    FUN_0142a110(plVar3,lVar4);
    iVar2 = (**(code **)(*plVar3 + 0x2d0))(plVar3);
    if ((iVar2 == 1) && (plVar3[0xe6] != 0)) {
      FUN_0142a120(plVar3,&local_20,&local_24);
      FUN_00441920(local_40,plVar3[0xe6]);
      FUN_00414ad0(param_1 + 0x78,local_40[0]);
      FUN_00441710(&local_48,plVar3[0xe6]);
      if (local_48 != 0 && lVar4 != 0) {
        FUN_017738b0(lVar4,plVar3[0xe6]);
        FUN_01773b00(lVar4,1,local_20);
        FUN_01773b00(lVar4,2,local_24);
      }
    }
  }
  else if (param_2 == 1) {
    cVar1 = FUN_01d3f210(*(undefined8 *)(param_1 + 0x70));
    if (cVar1 != '\0') {
      uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x1a8);
    }
    plVar3 = (longlong *)FUN_00723990(&PTR_FUN_007198a0,1,*(undefined8 *)PTR_DAT_02004030);
    FUN_00724420(plVar3,DAT_01f499a0);
    FUN_00414ad0(plVar3 + 0x1f,L"Open file");
    FUN_00414ad0(plVar3 + 0x1c,L"JPEG file (*.jpg)|*.jpg");
    FUN_00724380(plVar3,L"*.jpg");
    FUN_00414ad0(plVar3 + 0x20,&DAT_0143331c);
    *(undefined4 *)(plVar3 + 0x1b) = 0x314;
    cVar1 = (**(code **)(*plVar3 + 0xa8))(plVar3);
    if (cVar1 != '\0') {
      FUN_00724270(plVar3,&local_58);
      FUN_00441640(&local_50,local_58);
      FUN_00414ad0(&DAT_01f499a0,local_50);
      FUN_00724270(plVar3,&local_68);
      FUN_00441920(&local_60,local_68);
      FUN_00414ad0(param_1 + 0x78,local_60);
      FUN_00724270(plVar3,&local_70);
      FUN_017745a0(uVar5,local_70);
    }
    FUN_00410f20(plVar3);
  }
  FUN_00414560(&local_70,2);
  FUN_00414480(&local_60);
  FUN_00414480(&local_58);
  FUN_00414560(&local_50,3);
  FUN_00414480(&local_30);
  return;
}

