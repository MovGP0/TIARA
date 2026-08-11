/* Ghidra address: 013ab910 */
/* Ghidra symbol: FUN_013ab910 */


void FUN_013ab910(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  short sVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0;
  local_38 = 0;
  *(undefined1 *)(param_1 + 0x6d0) = 1;
  FUN_006ded30(*(undefined8 *)(*(longlong *)(param_1 + 0x6b8) + 0x550));
  FUN_006df690(*(undefined8 *)(*(longlong *)(param_1 + 0x6b8) + 0x550));
  FUN_00441920(&local_38,*(undefined8 *)(PTR_DAT_02004010 + 0xb1));
  FUN_004414c0(&local_30,local_38,0);
  uVar4 = FUN_006def30(*(undefined8 *)(*(longlong *)(param_1 + 0x6b8) + 0x550),0,local_30,param_2);
  FUN_013ac280(param_1,uVar4,param_2,0);
  FUN_006e1e60(*(undefined8 *)(param_1 + 0x6b8),FUN_013ab2f0,0,1);
  if ((param_2 == param_3) || (param_3 == 0)) {
    FUN_006dd070(uVar4,0);
    FUN_006dd110(uVar4,1);
    FUN_006dd0c0(uVar4,1);
  }
  else {
    iVar3 = FUN_006decb0();
    iVar6 = 0;
    if (-1 < iVar3 + -1) {
      do {
        lVar5 = FUN_006df500(*(undefined8 *)(*(longlong *)(param_1 + 0x6b8) + 0x550),iVar6);
        plVar1 = *(longlong **)(lVar5 + 0x18);
        if (((((undefined **)*plVar1 != &PTR_FUN_01984d18) &&
             (sVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1), sVar2 == 0x39)) &&
            ((char)plVar1[0x34] == '\x01')) && (param_3 == *(longlong *)(plVar1[0x35] + 8))) {
          uVar4 = FUN_006df500(*(undefined8 *)(*(longlong *)(param_1 + 0x6b8) + 0x550),iVar6);
          FUN_006dd110(uVar4,1);
          while (lVar5 = FUN_006dd390(uVar4), *(longlong *)(lVar5 + 0x18) != param_2) {
            FUN_006dd070(uVar4,0);
            FUN_006dd0c0(uVar4);
            uVar4 = FUN_006dd390(uVar4);
          }
          goto LAB_013abb58;
        }
        iVar6 = iVar6 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  FUN_006e24b0(*(undefined8 *)(param_1 + 0x6b8),uVar4);
  FUN_006df710(*(undefined8 *)(*(longlong *)(param_1 + 0x6b8) + 0x550));
  *(undefined1 *)(param_1 + 0x6d0) = 0;
LAB_013abb58:
  FUN_00414560(&local_38,2);
  return;
}

