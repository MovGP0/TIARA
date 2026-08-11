/* Ghidra address: 013b1c30 */
/* Ghidra symbol: FUN_013b1c30 */


void FUN_013b1c30(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  undefined2 uVar2;
  short sVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40 [2];
  ulonglong local_30 [2];
  
  local_40[0] = 0;
  local_30[0] = 0;
  DAT_021083d9 = *PTR_DAT_02005310;
  *PTR_DAT_02005310 = 6;
  if ((*PTR_DAT_020052b8 == '\0') || (*(char *)(*(longlong *)PTR_DAT_020032b8 + 0x6f1) != '\0')) {
    lVar5 = FUN_007fc180(&PTR_FUN_00f40e88,1,*(undefined8 *)PTR_DAT_02004030);
    *(longlong **)(lVar5 + 0x740) = param_2;
    *(undefined8 *)(lVar5 + 0x748) = param_1;
    *(undefined1 *)(lVar5 + 0x738) = 1;
    FUN_0064dbe0(*(undefined8 *)(lVar5 + 0x720),0);
    FUN_01d03640(param_2,local_30,*(undefined8 *)PTR_DAT_02001f18);
    uVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
    uVar7 = local_30[0];
    FUN_00c857e0(*(undefined8 *)PTR_DAT_02002c40,local_40,uVar2,*(undefined8 *)PTR_DAT_02001f18,
                 local_30[0],0);
    FUN_00414ad0(lVar5 + 0x780,local_40[0]);
    DAT_021083b0 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    DAT_021083b8 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    uVar6 = FUN_019a4600();
    FUN_01d08b60(param_2,uVar6,DAT_021083b0,DAT_021083b8);
    FUN_013ae1a0(DAT_021083c0,DAT_021083c8,DAT_021083d8,DAT_021083d0);
    FUN_013ad290(param_2,lVar5,0xfffffffd);
    FUN_00498370(&local_50,0,0,0,uVar7 & 0xffffffff00000000);
    DAT_021083a0 = local_50;
    DAT_021083a8 = uStack_48;
    DAT_02108398 = 0;
    sVar3 = (**(code **)(*param_2 + 0xf8))(param_2);
    if (sVar3 != 0x39) {
      DAT_02108398 = (**(code **)(*param_2 + 0x40))(param_2);
    }
    FUN_017be0e0(param_2,param_1,&DAT_021083dc,PTR_DAT_02004010[0x816],PTR_DAT_02004010[0x814],
                 *PTR_DAT_020037e8,PTR_DAT_02004010[0x815],*PTR_DAT_02005310);
    cVar1 = FUN_01d3bb80(param_2);
    if (cVar1 == '\0') {
      cVar1 = FUN_01d3be30(param_2);
      if (cVar1 == '\0') {
        FUN_013b1f30(lVar5,param_1,param_2,*(undefined1 *)(lVar5 + 0x73a));
        goto LAB_013b1ee1;
      }
    }
    uVar4 = FUN_01d3bb80(param_2);
    (**(code **)(**(longlong **)(lVar5 + 0x6b8) + 0x128))(*(longlong **)(lVar5 + 0x6b8),uVar4);
    FUN_008059a0(lVar5);
  }
LAB_013b1ee1:
  FUN_00414480(local_40);
  FUN_00414480(local_30);
  return;
}

