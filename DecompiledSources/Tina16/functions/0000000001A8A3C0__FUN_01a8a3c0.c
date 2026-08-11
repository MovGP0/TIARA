/* Ghidra address: 01a8a3c0 */
/* Ghidra symbol: FUN_01a8a3c0 */


void FUN_01a8a3c0(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 local_50 [16];
  undefined8 local_40 [3];
  
  if (*(longlong *)(param_1 + 0x798) != 0) {
    uVar6 = FUN_01a5d940(&PTR_FUN_01a5c280,1);
    *(undefined8 *)(param_1 + 0xff0) = uVar6;
    lVar2 = *(longlong *)(param_1 + 0xff0);
    *(undefined1 *)(*(longlong *)(lVar2 + 0x90) + 0x98) = 1;
    *(undefined1 *)(lVar2 + 0x99) = 1;
    *(undefined1 *)(lVar2 + 0xa0) = 1;
    plVar7 = *(longlong **)(*(longlong *)(lVar2 + 0x90) + 0x80);
    (**(code **)(*plVar7 + 0x10))(plVar7,*(undefined8 *)(param_1 + 0x1038));
    if (param_2 != 0) {
      plVar7 = *(longlong **)(*(longlong *)(lVar2 + 0x90) + 0xa0);
      (**(code **)(*plVar7 + 0x10))(plVar7,param_2);
    }
    plVar7 = (longlong *)FUN_01aebb40(&PTR_FUN_01466f90,1,*(undefined8 *)PTR_DAT_02004030);
    FUN_0146a9a0(plVar7,*(undefined8 *)(param_1 + 0xff0));
    iVar4 = (**(code **)(*plVar7 + 0x2d0))(plVar7);
    if ((iVar4 != 2) &&
       (iVar4 = (**(code **)(**(longlong **)(plVar7[0xdd] + 0x4d8) + 0x28))
                          (*(longlong **)(plVar7[0xdd] + 0x4d8)), iVar4 != 0)) {
      FUN_01a5eb60(*(undefined8 *)(param_1 + 0xff0),plVar7[0x11c]);
      if (param_3 != 0) {
        lVar2 = *(longlong *)(param_1 + 0xff0);
        *(longlong *)(lVar2 + 0xa8) = param_3;
        *(undefined8 *)(lVar2 + 0xb0) = param_4;
        *(undefined8 *)(lVar2 + 0xb8) = param_5;
        (**(code **)(**(longlong **)(lVar2 + 0xa8) + 0x100))
                  (*(longlong **)(lVar2 + 0xa8),*(undefined8 *)(param_1 + 0xff0));
      }
      (**(code **)(**(longlong **)(param_1 + 0x1038) + 0x10))
                (*(longlong **)(param_1 + 0x1038),
                 *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xff0) + 0x90) + 0x80));
      local_40[0] = FUN_00498310(0xffffff9c,0xffffff9c);
      (**(code **)(**(longlong **)(param_1 + 0xff0) + 200))
                (*(longlong **)(param_1 + 0xff0),local_40);
      *(undefined4 *)(param_1 + 0x1018) = 0xffffff9c;
      *(undefined4 *)(param_1 + 0x101c) = 0xffffff9c;
      uVar5 = FUN_01a5ee60(*(undefined8 *)(param_1 + 0xff0),*(undefined8 *)(param_1 + 0x780));
      *(undefined4 *)(param_1 + 0x1014) = uVar5;
      uVar5 = FUN_01a5eed0(*(undefined8 *)(param_1 + 0xff0),*(undefined8 *)(param_1 + 0x780));
      *(undefined4 *)(param_1 + 0x1010) = uVar5;
      plVar3 = *(longlong **)(param_1 + 0xff0);
      plVar3[0x11] = *(longlong *)(param_1 + 0x798);
      (**(code **)(*plVar3 + 0xe8))(plVar3);
      FUN_01a5f250(*(undefined8 *)(param_1 + 0xff0));
      FUN_00410f20(plVar7);
      FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
      FUN_0064e140(param_1,5);
      iVar4 = *(int *)(param_1 + 0x1018);
      iVar1 = *(int *)(param_1 + 0x101c);
      FUN_00498350(local_50,0,0,0,0);
      FUN_01a8dd40(*(undefined8 *)(param_1 + 0x780),iVar4,iVar1,iVar4 + *(int *)(param_1 + 0x1014),
                   iVar1 + *(int *)(param_1 + 0x1010),local_50);
      *(undefined1 *)(param_1 + 0x7a8) = 6;
      return;
    }
    FUN_00410f20(*(undefined8 *)(param_1 + 0xff0));
    *(undefined8 *)(param_1 + 0xff0) = 0;
    FUN_00410f20(plVar7);
    *(undefined1 *)(param_1 + 0x7a8) = 0;
  }
  return;
}

