/* Ghidra address: 01304f20 */
/* Ghidra symbol: FUN_01304f20 */


void FUN_01304f20(longlong param_1,undefined8 param_2,longlong *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  
  uVar1 = FUN_006dd6f0(param_2);
  lVar3 = FUN_006df500(*(undefined8 *)(*(longlong *)(param_1 + 0x700) + 0x550),uVar1);
  if (((*(uint *)(*(longlong *)(lVar3 + 0x18) + 4) & 0x20) == 0x20) &&
     (*(longlong *)(param_1 + 0xaf8) != 0)) {
    iVar2 = FUN_00654c00(*(undefined8 *)(param_1 + 0x850));
    if (iVar2 != 0) {
      iVar5 = -1;
      iVar2 = FUN_006dd6f0(param_2);
      uVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar2 + -1);
      iVar2 = FUN_012e5710(uVar4);
      if (iVar2 == 0) {
        iVar5 = 0;
      }
      else {
        iVar2 = FUN_006dd6f0(param_2);
        uVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar2 + -1);
        iVar2 = FUN_012e5710(uVar4);
        if (iVar2 == 1) {
          iVar5 = 1;
        }
        else {
          iVar2 = FUN_006dd6f0(param_2);
          uVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar2 + -1);
          iVar2 = FUN_012e5710(uVar4);
          if (iVar2 == 2) {
            iVar5 = 2;
          }
        }
      }
      if (param_3 != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_3[0x9e] + 0x90))((longlong *)param_3[0x9e]);
        iVar2 = FUN_006dd6f0(param_2);
        uVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar2 + -1);
        FUN_012e6020(uVar4,param_4);
        if (iVar5 == 0) {
          (**(code **)(*(longlong *)param_3[0x9e] + 0x78))((longlong *)param_3[0x9e],L"Average");
          (**(code **)(*(longlong *)param_3[0x9e] + 0x78))
                    ((longlong *)param_3[0x9e],L"Absolute Ripple");
          (**(code **)(*(longlong *)param_3[0x9e] + 0x78))
                    ((longlong *)param_3[0x9e],L"Relative Ripple");
          (**(code **)(*(longlong *)param_3[0x9e] + 0x78))((longlong *)param_3[0x9e],L"YMIN");
          (**(code **)(*(longlong *)param_3[0x9e] + 0x78))((longlong *)param_3[0x9e],L"YMAX");
        }
        else if (iVar5 == 1) {
          (**(code **)(*(longlong *)param_3[0x9e] + 0x78))((longlong *)param_3[0x9e],L"Average");
          (**(code **)(*(longlong *)param_3[0x9e] + 0x78))((longlong *)param_3[0x9e],L"YMIN");
          (**(code **)(*(longlong *)param_3[0x9e] + 0x78))((longlong *)param_3[0x9e],L"YMAX");
        }
        else if (iVar5 == 2) {
          (**(code **)(*(longlong *)param_3[0x9e] + 0x78))((longlong *)param_3[0x9e],L"Average");
          (**(code **)(*(longlong *)param_3[0x9e] + 0x78))((longlong *)param_3[0x9e],L"Gain margin")
          ;
          (**(code **)(*(longlong *)param_3[0x9e] + 0x78))
                    ((longlong *)param_3[0x9e],L"Phase margin");
          (**(code **)(*(longlong *)param_3[0x9e] + 0x78))
                    ((longlong *)param_3[0x9e],L"Absolute Ripple");
          (**(code **)(*(longlong *)param_3[0x9e] + 0x78))
                    ((longlong *)param_3[0x9e],L"Relative Ripple");
          (**(code **)(*(longlong *)param_3[0x9e] + 0x78))((longlong *)param_3[0x9e],L"YMIN");
          (**(code **)(*(longlong *)param_3[0x9e] + 0x78))((longlong *)param_3[0x9e],L"YMAX");
          (**(code **)(*(longlong *)param_3[0x9e] + 0x78))((longlong *)param_3[0x9e],L"XMIN");
          (**(code **)(*(longlong *)param_3[0x9e] + 0x78))((longlong *)param_3[0x9e],L"XMAX");
        }
        iVar2 = FUN_006dd6f0(param_2);
        uVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar2 + -1);
        uVar1 = FUN_012e5fd0(uVar4,param_4);
        (**(code **)(*param_3 + 0x268))(param_3,uVar1);
      }
    }
  }
  return;
}

