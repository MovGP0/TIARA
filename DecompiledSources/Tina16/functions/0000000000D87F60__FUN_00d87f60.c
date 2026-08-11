/* Ghidra address: 00d87f60 */
/* Ghidra symbol: FUN_00d87f60 */


void FUN_00d87f60(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 wchar_t *param_5)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  wchar_t *pwVar5;
  bool bVar6;
  undefined8 local_3c;
  undefined8 uStack_34;
  undefined4 local_2c;
  
  local_3c = *param_4;
  uStack_34 = param_4[1];
  local_2c = *(undefined4 *)(param_4 + 2);
  lVar2 = 0;
  pwVar5 = L"default";
  iVar1 = FUN_00416db0(param_5,L"default");
  if (iVar1 != 0) {
    lVar2 = FUN_00d74650(*(undefined8 *)(param_1 + 0x48),param_5);
    pwVar5 = param_5;
  }
  if (lVar2 == 0) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x48);
  }
  if ((byte)local_2c < 7) {
    if ((byte)local_2c == 6) {
      plVar3 = (longlong *)0x0;
      goto LAB_00d88119;
    }
    if ((byte)local_2c < 4) {
      if ((byte)local_2c == 3) {
        plVar3 = (longlong *)0x0;
        goto LAB_00d88119;
      }
      if ((byte)local_2c == 0) {
        pwVar5 = L"TopButton";
        plVar3 = (longlong *)FUN_00d77610(lVar2,L"TopButton");
        goto LAB_00d88119;
      }
      if ((byte)local_2c == 1) {
        pwVar5 = L"BottomButton";
        plVar3 = (longlong *)FUN_00d77610(lVar2,L"BottomButton");
        goto LAB_00d88119;
      }
      if ((byte)local_2c == 2) {
        plVar3 = (longlong *)0x0;
        goto LAB_00d88119;
      }
    }
    else {
      if ((byte)local_2c == 4) {
        pwVar5 = L"LeftButton";
        plVar3 = (longlong *)FUN_00d77610(lVar2,L"LeftButton");
        goto LAB_00d88119;
      }
      if ((byte)local_2c == 5) {
        pwVar5 = L"RightButton";
        plVar3 = (longlong *)FUN_00d77610(lVar2,L"RightButton");
        goto LAB_00d88119;
      }
    }
  }
  else if ((byte)local_2c < 0xb) {
    if ((byte)local_2c == 10) {
      plVar3 = (longlong *)0x0;
      goto LAB_00d88119;
    }
    if ((byte)local_2c == 7) {
      plVar3 = (longlong *)0x0;
      goto LAB_00d88119;
    }
    if ((byte)local_2c == 8) {
      pwVar5 = L"HorzSlider";
      plVar3 = (longlong *)FUN_00d77610(lVar2,L"HorzSlider");
      goto LAB_00d88119;
    }
    if ((byte)local_2c == 9) {
      pwVar5 = L"VertSlider";
      plVar3 = (longlong *)FUN_00d77610(lVar2,L"VertSlider");
      goto LAB_00d88119;
    }
  }
  else {
    if ((byte)local_2c == 0xb) {
      plVar3 = (longlong *)0x0;
      goto LAB_00d88119;
    }
    if ((byte)local_2c == 0xc) {
      plVar3 = (longlong *)0x0;
      goto LAB_00d88119;
    }
  }
  plVar3 = (longlong *)0x0;
LAB_00d88119:
  if (plVar3 != (longlong *)0x0) {
    if (local_2c._1_1_ == '\x03') {
      uVar4 = 8;
    }
    else if (local_2c._1_1_ == '\x01') {
      uVar4 = 6;
    }
    else if (local_2c._1_1_ == '\x02') {
      uVar4 = 5;
    }
    else {
      uVar4 = 0;
    }
    if ((byte)local_2c < 0x10) {
      bVar6 = ((int)CONCAT62((int6)((ulonglong)pwVar5 >> 0x10),1) << ((byte)local_2c & 0x1f) &
              0x303U) != 0;
    }
    else {
      bVar6 = false;
    }
    if (bVar6) {
      (**(code **)(*plVar3 + 0x98))(plVar3,uVar4);
      FUN_00d77b90(plVar3,&local_3c);
      (**(code **)(*plVar3 + 0xb0))(plVar3,param_3,&DAT_01ecf394);
    }
    else {
      (**(code **)(*plVar3 + 0x98))(plVar3,uVar4);
      FUN_00d77b90(plVar3,&local_3c);
      (**(code **)(*plVar3 + 0xa8))(plVar3,param_3,&DAT_01ecf394);
    }
  }
  return;
}

