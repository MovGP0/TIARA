/* Ghidra address: 00d89540 */
/* Ghidra symbol: FUN_00d89540 */


void FUN_00d89540(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined7 uVar5;
  ulonglong uVar4;
  bool bVar6;
  undefined8 local_3c;
  undefined8 uStack_34;
  undefined4 local_2c;
  undefined1 auStack_28 [8];
  
  local_3c = *param_4;
  uStack_34 = param_4[1];
  uVar1 = *(undefined4 *)(param_4 + 2);
  local_2c._0_1_ = (char)uVar1;
  uVar5 = (undefined7)((ulonglong)auStack_28 >> 8);
  if ((char)local_2c == '\x04') {
    uVar4 = CONCAT71(uVar5,8);
  }
  else if ((char)local_2c == '\x02') {
    uVar4 = CONCAT71(uVar5,6);
  }
  else if ((char)local_2c == '\x01') {
    uVar4 = CONCAT71(uVar5,5);
  }
  else {
    uVar4 = 0;
  }
  plVar3 = (longlong *)0x0;
  local_2c._1_1_ = (byte)((uint)uVar1 >> 8);
  local_2c = uVar1;
  if (local_2c._1_1_ < 6) {
    if (local_2c._1_1_ == 5) {
      plVar3 = (longlong *)
               FUN_00d77610(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x58),L"Button");
    }
    else if (local_2c._1_1_ == 0) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x60);
      if (lVar2 != 0) {
        plVar3 = (longlong *)FUN_00d77610(lVar2,L"Button");
      }
    }
    else if (local_2c._1_1_ == 2) {
      plVar3 = (longlong *)
               FUN_00d77610(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x58),L"Button");
    }
    else if (local_2c._1_1_ == 3) {
      plVar3 = (longlong *)
               FUN_00d77610(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x58),L"Button");
    }
    else {
      bVar6 = local_2c._1_1_ == 4;
      plVar3 = (longlong *)0x0;
      if (bVar6) {
        plVar3 = (longlong *)
                 FUN_00d77610(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x58),L"Button");
      }
    }
  }
  else if (local_2c._1_1_ == 6) {
    plVar3 = (longlong *)
             FUN_00d77610(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x58),L"Button");
  }
  else if (local_2c._1_1_ == 7) {
    plVar3 = (longlong *)
             FUN_00d77610(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x58),L"Button");
  }
  else if (local_2c._1_1_ == 8) {
    plVar3 = (longlong *)
             FUN_00d77610(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x58),L"Button");
  }
  else {
    bVar6 = local_2c._1_1_ == 9;
    if (bVar6) {
      plVar3 = (longlong *)
               FUN_00d77610(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x58),L"Button");
    }
  }
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x98))(plVar3,uVar4 & 0xffffffff);
    FUN_00d77b90(plVar3,&local_3c);
    (**(code **)(*plVar3 + 0xa8))(plVar3,param_3,&DAT_01ecf394);
  }
  return;
}

