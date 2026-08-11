/* Ghidra address: 01c99d60 */
/* Ghidra symbol: FUN_01c99d60 */


void FUN_01c99d60(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 param_5,undefined8 param_6)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_res18 [2];
  undefined1 local_38 [8];
  int local_30;
  undefined8 local_20 [2];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  uVar3 = FUN_019a4600();
  FUN_019af590(uVar3,local_res18[0]);
  local_20[0] = 0;
  uVar3 = FUN_019a4600();
  cVar1 = FUN_019a1420(uVar3,local_20);
  if (cVar1 == '\0') {
    uVar3 = FUN_007fc180(&PTR_FUN_0104a6e8,1,*(undefined8 *)PTR_DAT_02004030);
    *(undefined8 *)PTR_DAT_020056e0 = uVar3;
    *(undefined8 *)PTR_DAT_02004c68 = *(undefined8 *)PTR_DAT_020056e0;
    uVar3 = FUN_0065b870(param_1);
    FUN_01051c30(*(undefined8 *)PTR_DAT_020056e0,uVar3,param_2,local_res18[0],param_4,
                 (char)param_1[0x4f3],param_5);
    FUN_00800470(*(undefined8 *)PTR_DAT_020056e0,0);
    iVar2 = FUN_01052670(*(undefined8 *)PTR_DAT_020056e0);
    if (iVar2 != 2) {
      FUN_0064cbf0(*(undefined8 *)PTR_DAT_020056e0,600);
    }
    (**(code **)(*param_1 + 0xe0))(param_1,local_38);
    FUN_00806af0(*(undefined8 *)PTR_DAT_020056e0,
                 local_30 - *(int *)(*(longlong *)PTR_DAT_020056e0 + 0x98));
    FUN_00806b40(*(undefined8 *)PTR_DAT_020056e0,10);
    FUN_008059a0(*(undefined8 *)PTR_DAT_020056e0);
    FUN_01051b80(*(undefined8 *)PTR_DAT_020056e0);
    *(undefined4 *)PTR_DAT_02003570 = 2;
  }
  else {
    _ModifyFastMCUMode(param_4,0);
    uVar3 = FUN_0065b870(param_1);
    uVar4 = FUN_007fc180(&PTR_FUN_010739f8,1,*(undefined8 *)PTR_DAT_02004030);
    *(undefined8 *)PTR_DAT_02002ab0 = uVar4;
    *(undefined8 *)PTR_DAT_02004c68 = *(undefined8 *)PTR_DAT_02002ab0;
    FUN_01086ca0(*(undefined8 *)PTR_DAT_02002ab0,param_6);
    FUN_010828e0(*(undefined8 *)PTR_DAT_02002ab0,param_2);
    uVar4 = FUN_019a45d0();
    FUN_0108bbf0(*(undefined8 *)PTR_DAT_02002ab0,uVar4);
    FUN_01079320(*(undefined8 *)PTR_DAT_02002ab0,local_20[0]);
    FUN_01081d80(*(undefined8 *)PTR_DAT_02002ab0,uVar3,0,local_res18[0],param_4,param_5);
    FUN_008059a0(*(undefined8 *)PTR_DAT_02002ab0);
    *(undefined4 *)PTR_DAT_02003570 = 1;
    FUN_01086ef0(*(undefined8 *)PTR_DAT_02002ab0);
  }
  FUN_00414480(local_res18);
  return;
}

