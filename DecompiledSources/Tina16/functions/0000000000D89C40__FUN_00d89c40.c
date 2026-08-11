/* Ghidra address: 00d89c40 */
/* Ghidra symbol: FUN_00d89c40 */


void FUN_00d89c40(longlong param_1,char param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 local_48;
  undefined8 uStack_40;
  
  local_48 = *param_4;
  uStack_40 = param_4[1];
  lVar2 = 0;
  plVar3 = (longlong *)0x0;
  iVar1 = FUN_00416db0(param_5,L"default");
  if (iVar1 != 0) {
    lVar2 = FUN_00d74650(*(undefined8 *)(param_1 + 0x48),param_5);
  }
  if (lVar2 == 0) {
    if (param_2 == '\0') {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x70);
    }
    else if (param_2 == '\x01') {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x78);
    }
  }
  if (lVar2 != 0) {
    if (param_2 == '\0') {
      plVar3 = (longlong *)FUN_00d77610(lVar2,L"Frame");
    }
    else if (param_2 == '\x01') {
      plVar3 = (longlong *)FUN_00d77610(lVar2,L"Frame");
    }
    else {
      plVar3 = (longlong *)0x0;
    }
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d77b90(plVar3,&local_48);
    (**(code **)(*plVar3 + 0xa8))(plVar3,param_3,&DAT_01ecf394);
  }
  return;
}

