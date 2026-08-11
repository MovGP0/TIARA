/* Ghidra address: 00d8cec0 */
/* Ghidra symbol: FUN_00d8cec0 */


void FUN_00d8cec0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined7 uVar5;
  ulonglong uVar4;
  undefined8 local_3c;
  undefined8 uStack_34;
  undefined4 local_2c;
  
  local_3c = *param_4;
  uStack_34 = param_4[1];
  local_2c = *(undefined4 *)(param_4 + 2);
  plVar3 = (longlong *)0x0;
  iVar1 = FUN_00416db0(param_5,L"default");
  if (iVar1 != 0) {
    lVar2 = FUN_00d74650(*(undefined8 *)(param_1 + 0x48),param_5);
    plVar3 = (longlong *)0x0;
    if (lVar2 != 0) {
      plVar3 = (longlong *)FUN_00d77610(lVar2,L"Item");
    }
  }
  if ((plVar3 == (longlong *)0x0) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0xd0), lVar2 != 0)) {
    plVar3 = (longlong *)FUN_00d77610(lVar2,L"Item");
  }
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  uVar5 = (undefined7)((ulonglong)param_1 >> 8);
  if ((byte)local_2c < 3) {
    if ((byte)local_2c == 2) {
      uVar4 = CONCAT71(uVar5,7);
      goto LAB_00d8cf9a;
    }
    if ((byte)local_2c == 0) {
      uVar4 = 0;
      goto LAB_00d8cf9a;
    }
    if ((byte)local_2c == 1) {
      uVar4 = 0;
      goto LAB_00d8cf9a;
    }
  }
  else {
    if ((byte)local_2c == 3) {
      uVar4 = CONCAT71(uVar5,7);
      goto LAB_00d8cf9a;
    }
    if ((byte)local_2c == 4) {
      uVar4 = CONCAT71(uVar5,8);
      goto LAB_00d8cf9a;
    }
  }
  uVar4 = 0;
LAB_00d8cf9a:
  FUN_00d77b90(plVar3,&local_3c);
  (**(code **)(*plVar3 + 0x98))(plVar3,uVar4 & 0xffffffff);
  (**(code **)(*plVar3 + 0xa8))(plVar3,param_3,&DAT_01ecf394);
  return;
}

