/* Ghidra address: 00d8d680 */
/* Ghidra symbol: FUN_00d8d680 */


void FUN_00d8d680(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  undefined8 local_3c;
  undefined8 uStack_34;
  undefined4 local_2c;
  undefined1 auStack_28 [8];
  
  local_3c = *param_4;
  uStack_34 = param_4[1];
  uVar1 = *(undefined4 *)(param_4 + 2);
  local_2c._0_1_ = (byte)uVar1;
  uVar4 = (undefined7)((ulonglong)auStack_28 >> 8);
  if ((byte)local_2c < 3) {
    if ((byte)local_2c == 2) {
      uVar3 = CONCAT71(uVar4,7);
      goto LAB_00d8d6ec;
    }
    if ((byte)local_2c == 0) {
      uVar3 = 0;
      goto LAB_00d8d6ec;
    }
    if ((byte)local_2c == 1) {
      uVar3 = CONCAT71(uVar4,5);
      goto LAB_00d8d6ec;
    }
  }
  else {
    if ((byte)local_2c == 3) {
      uVar3 = CONCAT71(uVar4,7);
      goto LAB_00d8d6ec;
    }
    if ((byte)local_2c == 4) {
      uVar3 = CONCAT71(uVar4,8);
      goto LAB_00d8d6ec;
    }
  }
  uVar3 = 0;
LAB_00d8d6ec:
  local_2c._1_1_ = (char)((uint)uVar1 >> 8);
  local_2c = uVar1;
  if (local_2c._1_1_ == '\x01') {
    plVar2 = (longlong *)FUN_00d77610(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 200),L"Fixed")
    ;
  }
  else {
    plVar2 = (longlong *)FUN_00d77610(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 200),L"Cell");
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x98))(plVar2,uVar3 & 0xffffffff);
    FUN_00d77b90(plVar2,&local_3c);
    (**(code **)(*plVar2 + 0xa8))(plVar2,param_3,&DAT_01ecf394);
  }
  return;
}

