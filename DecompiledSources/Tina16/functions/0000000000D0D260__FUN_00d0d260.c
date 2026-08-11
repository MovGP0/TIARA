/* Ghidra address: 00d0d260 */
/* Ghidra symbol: FUN_00d0d260 */


void FUN_00d0d260(longlong *param_1,char param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  lVar3 = FUN_00cd55d0(param_1);
  if (lVar3 != 0) {
    uVar4 = FUN_00cd55d0(param_1);
    cVar1 = FUN_00cd71e0(uVar4,&PTR_FUN_00d08b38);
    if (cVar1 == '\0') {
      if (param_2 == '\0') {
        plVar5 = (longlong *)FUN_00cd55d0(param_1);
        uVar4 = (**(code **)(*param_1 + 0x58))(param_1);
        uVar2 = (**(code **)(*param_1 + 0x60))(*param_1);
        (**(code **)(*plVar5 + 0x30))(plVar5,uVar4,uVar2,2);
      }
    }
    else {
      plVar5 = (longlong *)FUN_00cd55d0(param_1);
      if (param_2 == '\0') {
        (**(code **)(*plVar5 + 0x40))(plVar5,param_1);
      }
      else {
        (**(code **)(*plVar5 + 0x38))(plVar5,param_1);
      }
    }
  }
  return;
}

