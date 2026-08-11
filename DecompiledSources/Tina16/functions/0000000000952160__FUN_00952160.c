/* Ghidra address: 00952160 */
/* Ghidra symbol: FUN_00952160 */


undefined8 FUN_00952160(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  iVar2 = FUN_00416420(param_3,0);
  if (iVar2 == 0) {
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x100))(param_1);
    iVar2 = (**(code **)*puVar4)();
    iVar7 = 0;
    if (-1 < iVar2 + -1) {
      do {
        plVar5 = (longlong *)(**(code **)(*param_1 + 0x100))(param_1);
        plVar5 = (longlong *)(**(code **)(*plVar5 + 0x10))(plVar5,iVar7);
        cVar1 = (**(code **)(*plVar5 + 0x2c0))(plVar5);
        if (cVar1 == '\0') {
          plVar5 = (longlong *)(**(code **)(*param_1 + 0x100))(param_1);
          plVar5 = (longlong *)(**(code **)(*plVar5 + 0x10))(plVar5,iVar7);
          (**(code **)(*plVar5 + 0x160))(plVar5,param_2);
          goto LAB_00952347;
        }
        iVar7 = iVar7 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  else {
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x100))(param_1);
    iVar2 = (**(code **)*puVar4)();
    iVar7 = 0;
    if (-1 < iVar2 + -1) {
      do {
        plVar5 = (longlong *)(**(code **)(*param_1 + 0x100))(param_1);
        plVar5 = (longlong *)(**(code **)(*plVar5 + 0x10))(plVar5,iVar7);
        cVar1 = (**(code **)(*plVar5 + 0x2c0))(plVar5);
        if (cVar1 == '\x01') {
          plVar5 = (longlong *)(**(code **)(*param_1 + 0x100))(param_1);
          plVar5 = (longlong *)(**(code **)(*plVar5 + 0x10))(plVar5,iVar7);
          (**(code **)(*plVar5 + 0x148))(plVar5,local_30);
          iVar3 = FUN_00416420(local_30[0],param_3);
          if (iVar3 == 0) {
            plVar5 = (longlong *)(**(code **)(*param_1 + 0x100))(param_1);
            plVar5 = (longlong *)(**(code **)(*plVar5 + 0x10))(plVar5,iVar7);
            (**(code **)(*plVar5 + 0x160))(plVar5,param_2);
            goto LAB_00952347;
          }
        }
        iVar7 = iVar7 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  lVar6 = (**(code **)(*param_1 + 0x170))(param_1);
  if (lVar6 == 0) {
    FUN_0094f020(param_1,param_2,param_3);
  }
  else {
    plVar5 = (longlong *)(**(code **)(*param_1 + 0x170))(param_1);
    (**(code **)(*plVar5 + 0x288))(plVar5,param_2,param_3);
  }
LAB_00952347:
  FUN_00414520(local_30);
  return param_2;
}

