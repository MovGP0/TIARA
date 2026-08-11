/* Ghidra address: 00d8cdd0 */
/* Ghidra symbol: FUN_00d8cdd0 */


void FUN_00d8cdd0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *param_4;
  uStack_30 = param_4[1];
  plVar3 = (longlong *)0x0;
  iVar1 = FUN_00416db0(param_5,L"default");
  if (iVar1 != 0) {
    lVar2 = FUN_00d74650(*(undefined8 *)(param_1 + 0x48),param_5);
    plVar3 = (longlong *)0x0;
    if (lVar2 != 0) {
      plVar3 = (longlong *)FUN_00d77610(lVar2,L"Frame");
    }
  }
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)
             FUN_00d77610(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0xd0),L"Frame");
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d77b90(plVar3,&local_38);
    (**(code **)(*plVar3 + 0xa8))(plVar3,param_3,&DAT_01ecf394);
  }
  return;
}

