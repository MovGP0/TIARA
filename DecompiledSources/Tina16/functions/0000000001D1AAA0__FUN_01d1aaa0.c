/* Ghidra address: 01d1aaa0 */
/* Ghidra symbol: FUN_01d1aaa0 */


void FUN_01d1aaa0(undefined8 param_1,longlong *param_2,undefined4 param_3,int param_4,int param_5,
                 int param_6)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 local_40 [2];
  
  plVar6 = (longlong *)FUN_005fd250(&PTR_FUN_005f3290,1);
  (**(code **)(*plVar6 + 0x10))(plVar6,param_2[0xf]);
  if ((*(longlong *)PTR_DAT_02001e00 == 0) ||
     (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0) == 0)) {
    lVar7 = 0;
  }
  else {
    lVar7 = FUN_01cee8b0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0),param_3);
  }
  if (lVar7 != 0) {
    (**(code **)(*(longlong *)param_2[0xf] + 0x10))((longlong *)param_2[0xf],lVar7);
    uVar3 = FUN_005fd4d0(lVar7);
    uVar3 = FUN_01a90ee0(uVar3);
    FUN_005fd4e0(param_2[0xf],uVar3);
  }
  cVar1 = FUN_01ceeb20(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0),param_3);
  if (cVar1 != '\0') {
    uVar3 = FUN_01a90ee0(0xff);
    FUN_005fd4e0(param_2[0xf],uVar3);
  }
  if (lVar7 == 0) {
    lVar8 = FUN_0040c840((double)(param_6 * 4));
    iVar4 = FUN_005fdff0(param_2,&DAT_01d1aec4);
    iVar5 = FUN_005fdfd0(param_2,&DAT_01d1aec4);
    (**(code **)(*param_2 + 0x120))
              (param_2,(param_4 + (int)(lVar8 / 2)) - iVar4 / 2,param_5 - iVar5 / 2,&DAT_01d1aec4);
    (**(code **)(*param_2 + 200))(param_2,param_4,param_5);
    iVar4 = FUN_005fdff0(param_2,&DAT_01d1aec4);
    (**(code **)(*param_2 + 0xc0))(param_2,((param_4 + (int)(lVar8 / 2)) - iVar4 / 2) + -1,param_5);
    (**(code **)(*param_2 + 200))(param_2,param_4 + (int)lVar8,param_5);
    iVar4 = FUN_005fdff0(param_2,&DAT_01d1aec4);
    (**(code **)(*param_2 + 0xc0))(param_2,param_4 + (int)(lVar8 / 2) + iVar4 / 2 + 1,param_5);
  }
  else {
    (**(code **)(*param_2 + 200))(param_2,param_4,param_5);
    iVar4 = FUN_0040c840((double)(param_6 * 4));
    (**(code **)(*param_2 + 0xc0))(param_2,param_4 + iVar4,param_5);
  }
  plVar9 = (longlong *)FUN_01d2dd40(&PTR_FUN_01d2a288,1);
  if (lVar7 != 0) {
    (**(code **)(*(longlong *)plVar9[9] + 0x10))((longlong *)plVar9[9],lVar7);
  }
  if ((*(longlong *)PTR_DAT_02001e00 == 0) ||
     (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0) == 0)) {
    *(undefined1 *)(plVar9 + 10) = 0;
    *(undefined4 *)((longlong)plVar9 + 0x5c) = 0;
  }
  else {
    uVar2 = FUN_01ceed90(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0),param_3);
    *(undefined1 *)(plVar9 + 10) = uVar2;
    uVar3 = FUN_01ceefd0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0),param_3);
    *(undefined4 *)((longlong)plVar9 + 0x5c) = uVar3;
    (**(code **)(*plVar9 + 0xb0))
              (plVar9,*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x798) + 0x14);
  }
  local_40[0] = FUN_00498310(param_4 + (param_6 * 4) / 2,param_5);
  (**(code **)(*plVar9 + 200))(plVar9,local_40);
  cVar1 = FUN_01ceeb20(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0),param_3);
  if (cVar1 != '\0') {
    (**(code **)(*plVar9 + 0x50))(plVar9,1);
  }
  (**(code **)(*plVar9 + 0x70))(plVar9,param_2);
  FUN_00410f20(plVar9);
  (**(code **)(*(longlong *)param_2[0xf] + 0x10))((longlong *)param_2[0xf],plVar6);
  FUN_00410f20(plVar6);
  return;
}

