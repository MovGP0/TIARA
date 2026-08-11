/* Ghidra address: 0149e460 */
/* Ghidra symbol: FUN_0149e460 */


undefined4 FUN_0149e460(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  
  uVar5 = 0;
  uVar3 = 0;
  plVar4 = *(longlong **)(*(longlong *)(param_1[5] + 0x90) + 0xa0);
  iVar2 = (**(code **)(*plVar4 + 0x28))(plVar4);
  if ((iVar2 < 1) || (*(char *)(param_1[5] + 0x98) != '\x01')) {
    plVar4 = *(longlong **)(*(longlong *)(param_1[5] + 0x90) + 0xa0);
    iVar2 = (**(code **)(*plVar4 + 0x28))(plVar4);
    if ((iVar2 < 1) || (*(char *)(param_1[5] + 0x98) != '\a')) {
      plVar4 = *(longlong **)(*(longlong *)(param_1[5] + 0x90) + 0xa0);
      iVar2 = (**(code **)(*plVar4 + 0x28))(plVar4);
      if ((iVar2 < 1) || (*(char *)(param_1[5] + 0x98) != '\x02')) {
        plVar4 = *(longlong **)(*(longlong *)(param_1[5] + 0x90) + 0xa0);
        iVar2 = (**(code **)(*plVar4 + 0x28))(plVar4);
        if ((iVar2 < 1) || (*(char *)(param_1[5] + 0x98) != '\x04')) {
          plVar4 = *(longlong **)(*(longlong *)(param_1[5] + 0x90) + 0xa0);
          iVar2 = (**(code **)(*plVar4 + 0x28))(plVar4);
          if ((iVar2 < 1) || (*(char *)(param_1[5] + 0x98) != '\x05')) {
            uVar3 = (**(code **)(*param_1 + 0x100))(param_1,param_2);
          }
          else {
            FUN_01ca2a40(*(undefined8 *)PTR_DAT_02004e40,*(undefined8 *)PTR_DAT_02004030);
            lVar1 = param_1[5];
            FUN_0149aa00(*(undefined8 *)PTR_DAT_02005498,*(undefined1 *)(lVar1 + 0x99),
                         *(undefined4 *)(lVar1 + 0x9c),*(undefined1 *)(lVar1 + 0xa0));
            plVar4 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_02005498 + 0x7f8) + 0xd0);
            (**(code **)(*plVar4 + 0x10))
                      (plVar4,*(undefined8 *)(*(longlong *)(param_1[5] + 0x90) + 0x80));
          }
        }
        else {
          uVar5 = *(undefined4 *)(PTR_DAT_02004010 + 0x8bc);
          *(undefined4 *)(PTR_DAT_02004010 + 0x8bc) = *(undefined4 *)(PTR_DAT_02001120 + 0x8bc);
          PTR_DAT_02004010[0x8bc] = 0;
          plVar4 = (longlong *)
                   FUN_014723c0(&PTR_FUN_014715f8,1,*(undefined8 *)PTR_DAT_02004030,
                                *(undefined8 *)
                                 (*(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8) + 0x440));
          iVar2 = (**(code **)(*plVar4 + 0x2d0))(plVar4);
          FUN_00410f20(plVar4);
          if (iVar2 == 6) {
            FUN_01c92e80(*(undefined8 *)PTR_DAT_02004e40);
          }
          *(undefined4 *)(PTR_DAT_02004010 + 0x8bc) = uVar5;
        }
      }
      else {
        plVar4 = (longlong *)
                 FUN_0143a6e0(&PTR_FUN_014399c8,1,*(undefined8 *)PTR_DAT_02004030,param_1,
                              *(undefined8 *)
                               (*(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8) + 0x438),
                              *(undefined8 *)
                               (*(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x2788) + 0x438));
        (**(code **)(*plVar4 + 0x2d0))(plVar4);
        FUN_00410f20(plVar4);
        uVar3 = uVar5;
      }
    }
    else {
      FUN_0146ecf0(*(undefined8 *)(*(longlong *)(param_1[5] + 0x90) + 0xa0),param_1);
      uVar3 = uVar5;
    }
  }
  else {
    FUN_01c80630(*(undefined8 *)PTR_DAT_02004e40,*(undefined8 *)PTR_DAT_02004030);
    plVar4 = (longlong *)FUN_00bf2c10(*(undefined8 *)(*(longlong *)PTR_DAT_02002d20 + 0x868));
    (**(code **)(*plVar4 + 0x10))(plVar4,*(undefined8 *)(*(longlong *)(param_1[5] + 0x90) + 0x80));
    *(longlong **)(*(longlong *)PTR_DAT_02002d20 + 0xb58) = param_1;
    lVar1 = param_1[5];
    FUN_017f2de0(*(undefined8 *)PTR_DAT_02002d20,*(undefined1 *)(lVar1 + 0x99),
                 *(undefined4 *)(lVar1 + 0x9c),*(undefined1 *)(lVar1 + 0xa0));
    FUN_00805990(*(undefined8 *)PTR_DAT_02002d20);
    FUN_007e2f80(*(undefined8 *)(*(longlong *)PTR_DAT_02002d20 + 0x750),0);
    FUN_007e2f80(*(undefined8 *)(*(longlong *)PTR_DAT_02002d20 + 0x800),1);
    *(undefined1 *)(*(longlong *)PTR_DAT_02002d20 + 0xb60) = 1;
    *(undefined1 *)(*(longlong *)PTR_DAT_02002d20 + 0xb61) = 1;
    plVar4 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    (**(code **)(*plVar4 + 0x10))(plVar4,*(undefined8 *)(*(longlong *)(param_1[5] + 0x90) + 0xa0));
    iVar2 = (**(code **)(*plVar4 + 0x28))(plVar4);
    if (iVar2 == 0) {
      (**(code **)(*plVar4 + 0x78))(plVar4,L" { ... } ");
    }
    FUN_017f2380(*(undefined8 *)PTR_DAT_02002d20,plVar4);
    FUN_00410f20(plVar4);
    FUN_008059a0(*(undefined8 *)PTR_DAT_02002d20);
    uVar3 = uVar5;
  }
  return uVar3;
}

