/* Ghidra address: 01be2330 */
/* Ghidra symbol: FUN_01be2330 */


longlong FUN_01be2330(longlong *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  int local_2c;
  
  lVar8 = 0;
  if ((longlong *)param_2[1] == param_1) {
    cVar1 = FUN_004113d0(param_2,&PTR_FUN_01bdff58);
    if (cVar1 != '\0') {
      FUN_01be1b80(param_1);
      (**(code **)(*param_2 + 0x180))(param_2);
    }
    param_1[0xb0] = 0;
  }
  cVar1 = FUN_01bfaa20(param_2[100]);
  if (cVar1 == '\0') {
    lVar8 = param_2[100];
    cVar1 = (**(code **)(*param_1 + 0x2c8))(param_1);
    if (cVar1 == '\0') {
      thunk_FUN_03e0f7b4(0x1014,0,&local_2c,0);
      iVar2 = FUN_00611650(param_1[0xc9]);
      if ((1 < iVar2) && (local_2c != 0)) {
        iVar2 = FUN_00611650(param_1[0xc9]);
        iVar2 = iVar2 + -2;
        iVar7 = 1;
        if (0 < iVar2) {
          do {
            uVar6 = FUN_01be08f0(param_1[0xc9],iVar7);
            FUN_0064dbe0(uVar6,0);
            iVar7 = iVar7 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
      }
      FUN_01be1b80(param_1);
      (**(code **)(*param_1 + 0x408))(param_1);
    }
  }
  else {
    if (param_1[0xb0] != 0) {
      while (lVar3 = FUN_01be0910(param_1[0xc9]), lVar3 != *(longlong *)(param_1[0xb0] + 0x78)) {
        FUN_01be0920(*(undefined8 *)(param_1[0xba] + 0x648));
      }
      param_1[0xb0] = 0;
    }
    if (*(char *)((longlong)param_2 + 0xa9) == '\0') {
      plVar4 = (longlong *)FUN_01be0910(param_1[0xc9]);
      (**(code **)(*plVar4 + 0x3d8))(plVar4,1);
    }
    lVar3 = FUN_01be2d90(param_1);
    FUN_01be5380(param_1[0xba]);
    lVar5 = FUN_01be2d90(param_1);
    if ((lVar5 == lVar3) && (param_1[0xc9] != 0)) {
      if ((param_2[0xf] == param_1[0xba]) && (iVar2 = FUN_00611650(param_1[0xc9]), 1 < iVar2)) {
        while (iVar2 = FUN_00611650(param_1[0xc9]), 1 < iVar2) {
          plVar4 = (longlong *)FUN_01be0910(param_1[0xc9]);
          (**(code **)(*plVar4 + 0x408))(plVar4);
        }
      }
      uVar6 = FUN_01be0910(param_1[0xc9]);
      (**(code **)(*param_1 + 0x3a0))(param_1,uVar6,param_2);
      *(undefined1 *)(param_1 + 0xaf) = 0;
    }
  }
  return lVar8;
}

