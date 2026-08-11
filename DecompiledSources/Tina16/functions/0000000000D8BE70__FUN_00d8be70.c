/* Ghidra address: 00d8be70 */
/* Ghidra symbol: FUN_00d8be70 */


void FUN_00d8be70(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 param_5)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 local_3c;
  undefined8 uStack_34;
  undefined4 local_2c;
  
  local_3c = *param_4;
  uStack_34 = param_4[1];
  local_2c = *(undefined4 *)(param_4 + 2);
  lVar3 = 0;
  iVar1 = FUN_00416db0(param_5,L"default");
  if (iVar1 != 0) {
    lVar3 = FUN_00d74650(*(undefined8 *)(param_1 + 0x48),param_5);
  }
  if (lVar3 == 0) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x118);
  }
  if ((char)local_2c == '\x01') {
    plVar4 = (longlong *)FUN_00d77610(lVar3,L"ButtonRollup");
  }
  else if ((char)local_2c == '\x02') {
    plVar4 = (longlong *)FUN_00d77610(lVar3,L"ButtonRollDown");
  }
  else if ((char)local_2c == '\x03') {
    plVar4 = (longlong *)FUN_00d77610(lVar3,L"ButtonHide");
  }
  else {
    plVar4 = (longlong *)0x0;
  }
  if (plVar4 != (longlong *)0x0) {
    if (local_2c._1_1_ == '\x03') {
      uVar2 = 8;
    }
    else if (local_2c._1_1_ == '\x02') {
      uVar2 = 6;
    }
    else if (local_2c._1_1_ == '\x01') {
      uVar2 = 5;
    }
    else {
      uVar2 = 0;
    }
    (**(code **)(*plVar4 + 0x98))(plVar4,uVar2);
    FUN_00d77b90(plVar4,&local_3c);
    (**(code **)(*plVar4 + 0xa8))(plVar4,param_3,&DAT_01ecf394);
  }
  return;
}

