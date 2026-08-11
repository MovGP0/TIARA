/* Ghidra address: 00d8d4f0 */
/* Ghidra symbol: FUN_00d8d4f0 */


void FUN_00d8d4f0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  undefined7 uVar3;
  ulonglong uVar2;
  undefined8 local_3c;
  undefined8 uStack_34;
  undefined4 local_2c;
  undefined1 auStack_28 [8];
  
  local_3c = *param_4;
  uStack_34 = param_4[1];
  local_2c = *(undefined4 *)(param_4 + 2);
  plVar1 = (longlong *)FUN_00d77610(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0xd0),L"Item");
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  uVar3 = (undefined7)((ulonglong)auStack_28 >> 8);
  if ((byte)local_2c < 3) {
    if ((byte)local_2c == 2) {
      uVar2 = CONCAT71(uVar3,7);
      goto LAB_00d8d57f;
    }
    if ((byte)local_2c == 0) {
      uVar2 = 0;
      goto LAB_00d8d57f;
    }
    if ((byte)local_2c == 1) {
      uVar2 = 0;
      goto LAB_00d8d57f;
    }
  }
  else {
    if ((byte)local_2c == 3) {
      uVar2 = CONCAT71(uVar3,7);
      goto LAB_00d8d57f;
    }
    if ((byte)local_2c == 4) {
      uVar2 = CONCAT71(uVar3,8);
      goto LAB_00d8d57f;
    }
  }
  uVar2 = 0;
LAB_00d8d57f:
  FUN_00d77b90(plVar1,&local_3c);
  (**(code **)(*plVar1 + 0x98))(plVar1,uVar2 & 0xffffffff);
  (**(code **)(*plVar1 + 0xa8))(plVar1,param_3,&DAT_01ecf394);
  return;
}

