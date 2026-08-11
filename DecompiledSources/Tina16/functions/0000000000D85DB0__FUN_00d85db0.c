/* Ghidra address: 00d85db0 */
/* Ghidra symbol: FUN_00d85db0 */


void FUN_00d85db0(longlong param_1,byte param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  
  uVar1 = FUN_00416db0(param_5,L"default");
  if ((int)uVar1 != 0) {
    lVar2 = FUN_00d74650(*(undefined8 *)(param_1 + 0x48),param_5);
    uVar1 = 0;
    if (lVar2 != 0) {
      plVar3 = (longlong *)FUN_00d77580(lVar2,0xd);
      uVar1 = 0;
      if (plVar3 != (longlong *)0x0) {
        FUN_00d77b90(plVar3,param_4);
        (**(code **)(*plVar3 + 0xa8))(plVar3,param_3,&DAT_01ecf394);
        return;
      }
    }
  }
  if (param_2 < 8) {
    bVar4 = ((int)CONCAT71((int7)((ulonglong)uVar1 >> 8),1) << (param_2 & 0x1f) & 3U) != 0;
  }
  else {
    bVar4 = false;
  }
  if ((bVar4) && (*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x20) != 0)) {
    FUN_00d77b90(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x20),param_4);
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 0x20);
    (**(code **)(*plVar3 + 0xa8))(plVar3,param_3,&DAT_01ecf394);
  }
  else if ((param_2 == 6) && (*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x110) != 0)) {
    FUN_00d77b90(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x110),param_4);
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 0x110);
    (**(code **)(*plVar3 + 0xa8))(plVar3,param_3,&DAT_01ecf394);
  }
  return;
}

