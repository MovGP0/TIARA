/* Ghidra address: 00951fa0 */
/* Ghidra symbol: FUN_00951fa0 */


undefined1 FUN_00951fa0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  undefined1 local_31;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  iVar2 = FUN_00416420(param_2,0);
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
          local_31 = 1;
          goto LAB_00952129;
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
          iVar3 = FUN_00416420(local_30[0],param_2);
          if (iVar3 == 0) {
            local_31 = 1;
            goto LAB_00952129;
          }
        }
        iVar7 = iVar7 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  lVar6 = (**(code **)(*param_1 + 0x170))(param_1);
  if (lVar6 == 0) {
    local_31 = FUN_0094ef00(param_1,param_2);
  }
  else {
    plVar5 = (longlong *)(**(code **)(*param_1 + 0x170))(param_1);
    local_31 = (**(code **)(*plVar5 + 0x290))(plVar5,param_2);
  }
LAB_00952129:
  FUN_00414520(local_30);
  return local_31;
}

