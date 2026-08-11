/* Ghidra address: 01a85470 */
/* Ghidra symbol: FUN_01a85470 */


void FUN_01a85470(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 local_50 [16];
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  
  local_30[0] = FUN_004b6930(&PTR_FUN_00478280,1);
  cVar4 = FUN_01ae6d30(*(undefined8 *)(param_1 + 0x798),local_30);
  if (cVar4 == '\0') {
    FUN_00410f20(local_30[0]);
  }
  else if (*(longlong *)(param_1 + 0x798) == 0) {
    FUN_0082a6c0(*(undefined8 *)(param_1 + 0xa90),1);
    FUN_01a794b0(param_1,param_2);
  }
  else {
    uVar7 = FUN_01a5d940(&PTR_FUN_01a5c280,1);
    *(undefined8 *)(param_1 + 0xff0) = uVar7;
    lVar2 = *(longlong *)(param_1 + 0xff0);
    *(undefined1 *)(*(longlong *)(lVar2 + 0x90) + 0x98) = 1;
    *(undefined1 *)(lVar2 + 0x99) = 1;
    *(undefined1 *)(lVar2 + 0xa0) = 1;
    FUN_005fcd80(*(undefined8 *)(*(longlong *)(lVar2 + 0x90) + 0x80),L"Courier");
    FUN_005fce30(*(undefined8 *)(*(longlong *)(lVar2 + 0x90) + 0x80),10);
    FUN_005fce70(*(undefined8 *)(*(longlong *)(lVar2 + 0x90) + 0x80),1);
    plVar8 = *(longlong **)(*(longlong *)(lVar2 + 0x90) + 0xa0);
    (**(code **)(*plVar8 + 0x10))(plVar8,local_30[0]);
    FUN_00410f20(local_30[0]);
    FUN_01ad0970(*(undefined8 *)(param_1 + 0x798));
    plVar8 = (longlong *)FUN_01aebb40(&PTR_FUN_01466f90,1,*(undefined8 *)PTR_DAT_02004030);
    FUN_0146a9a0(plVar8,*(undefined8 *)(param_1 + 0xff0));
    FUN_0082a6c0(plVar8[0xda],1);
    FUN_0146a6e0(plVar8,*(undefined8 *)PTR_DAT_02004030);
    iVar5 = (**(code **)(*plVar8 + 0x2d0))(plVar8);
    if ((iVar5 != 2) &&
       (iVar5 = (**(code **)(**(longlong **)(plVar8[0xdd] + 0x4d8) + 0x28))
                          (*(longlong **)(plVar8[0xdd] + 0x4d8)), iVar5 != 0)) {
      FUN_01a5eb60(*(undefined8 *)(param_1 + 0xff0),plVar8[0x11c]);
      (**(code **)(**(longlong **)(param_1 + 0x1038) + 0x10))
                (*(longlong **)(param_1 + 0x1038),
                 *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xff0) + 0x90) + 0x80));
      local_40[0] = FUN_00498310(0xffffff9c,0xffffff9c);
      (**(code **)(**(longlong **)(param_1 + 0xff0) + 200))
                (*(longlong **)(param_1 + 0xff0),local_40);
      *(undefined4 *)(param_1 + 0x1018) = 0xffffff9c;
      *(undefined4 *)(param_1 + 0x101c) = 0xffffff9c;
      uVar6 = FUN_01a5ee60(*(undefined8 *)(param_1 + 0xff0),*(undefined8 *)(param_1 + 0x780));
      *(undefined4 *)(param_1 + 0x1014) = uVar6;
      uVar6 = FUN_01a5eed0(*(undefined8 *)(param_1 + 0xff0),*(undefined8 *)(param_1 + 0x780));
      *(undefined4 *)(param_1 + 0x1010) = uVar6;
      plVar3 = *(longlong **)(param_1 + 0xff0);
      plVar3[0x11] = *(longlong *)(param_1 + 0x798);
      (**(code **)(*plVar3 + 0xe8))(plVar3);
      FUN_01a5f250(*(undefined8 *)(param_1 + 0xff0));
      FUN_00410f20(plVar8);
      FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
      FUN_0064e140(param_1,5);
      iVar5 = *(int *)(param_1 + 0x1018);
      iVar1 = *(int *)(param_1 + 0x101c);
      FUN_00498350(local_50,0,0,0,0);
      FUN_01a8dd40(*(undefined8 *)(param_1 + 0x780),iVar5,iVar1,iVar5 + *(int *)(param_1 + 0x1014),
                   iVar1 + *(int *)(param_1 + 0x1010),local_50);
      *(undefined1 *)(param_1 + 0x7a8) = 6;
      return;
    }
    FUN_00410f20(*(undefined8 *)(param_1 + 0xff0));
    *(undefined8 *)(param_1 + 0xff0) = 0;
    FUN_00410f20(plVar8);
  }
  return;
}

