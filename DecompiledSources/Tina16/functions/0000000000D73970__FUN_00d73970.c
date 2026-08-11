/* Ghidra address: 00d73970 */
/* Ghidra symbol: FUN_00d73970 */


void FUN_00d73970(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar1 = FUN_00d74650(param_1,L"form");
  if (lVar1 != 0) {
    FUN_00d7e650(*(undefined8 *)(param_1 + 200),0x16,*(undefined4 *)(lVar1 + 0x114));
  }
  lVar1 = FUN_00d74650(param_1,L"listbox");
  if (lVar1 != 0) {
    FUN_00d7e650(*(undefined8 *)(param_1 + 200),0x10,*(undefined4 *)(lVar1 + 0x114));
    FUN_00d7e650(*(undefined8 *)(param_1 + 200),0x11,*(undefined4 *)(lVar1 + 0x114));
    FUN_00d7e650(*(undefined8 *)(param_1 + 200),0x12,*(undefined4 *)(lVar1 + 0x114));
    FUN_00d7e650(*(undefined8 *)(param_1 + 200),0x15,*(undefined4 *)(lVar1 + 0x114));
  }
  lVar1 = FUN_00d74650(param_1,L"categorybuttons");
  if (lVar1 != 0) {
    FUN_00d7e650(*(undefined8 *)(param_1 + 200),1,*(undefined4 *)(lVar1 + 0x114));
  }
  lVar1 = FUN_00d74650(param_1,L"categorypanelgroup");
  if (lVar1 != 0) {
    FUN_00d7e650(*(undefined8 *)(param_1 + 200),2,*(undefined4 *)(lVar1 + 0x114));
  }
  lVar1 = FUN_00d74650(param_1,L"combobox");
  if (lVar1 != 0) {
    FUN_00d7e650(*(undefined8 *)(param_1 + 200),3,*(undefined4 *)(lVar1 + 0x114));
    FUN_00d7e650(*(undefined8 *)(param_1 + 200),4,*(undefined4 *)(lVar1 + 0x114));
  }
  lVar1 = FUN_00d74650(param_1,L"grid");
  if (lVar1 != 0) {
    FUN_00d7e650(*(undefined8 *)(param_1 + 200),0xc,*(undefined4 *)(lVar1 + 0x114));
  }
  FUN_00d7e650(*(undefined8 *)(param_1 + 200),0,0);
  lVar1 = FUN_00d74650(param_1,L"container");
  if (lVar1 != 0) {
    FUN_00d7e650(*(undefined8 *)(param_1 + 200),0x13,*(undefined4 *)(lVar1 + 0x114));
    FUN_00d7e650(*(undefined8 *)(param_1 + 200),0x14,*(undefined4 *)(lVar1 + 0x114));
  }
  lVar1 = FUN_00d74650(param_1,L"button");
  if (lVar1 != 0) {
    FUN_00d7e650(*(undefined8 *)(param_1 + 200),5,*(undefined4 *)(lVar1 + 0x114));
    FUN_00d7e650(*(undefined8 *)(param_1 + 200),6,*(undefined4 *)(lVar1 + 0x114));
    FUN_00d7e650(*(undefined8 *)(param_1 + 200),7,*(undefined4 *)(lVar1 + 0x114));
    FUN_00d7e650(*(undefined8 *)(param_1 + 200),8,*(undefined4 *)(lVar1 + 0x114));
    FUN_00d7e650(*(undefined8 *)(param_1 + 200),9,*(undefined4 *)(lVar1 + 0x114));
  }
  lVar1 = FUN_00d74650(param_1,L"edit");
  if (lVar1 != 0) {
    FUN_00d7e650(*(undefined8 *)(param_1 + 200),10,*(undefined4 *)(lVar1 + 0x114));
    FUN_00d7e650(*(undefined8 *)(param_1 + 200),0xb,*(undefined4 *)(lVar1 + 0x114));
  }
  lVar1 = FUN_00d74650(param_1,L"hint");
  if (lVar1 == 0) {
    FUN_00d7e650(*(undefined8 *)(param_1 + 200),0xf,0xff000018);
  }
  else {
    FUN_00d7e650(*(undefined8 *)(param_1 + 200),0xf,*(undefined4 *)(lVar1 + 0x114));
  }
  lVar1 = FUN_00d74650(param_1,L"form");
  if (lVar1 != 0) {
    lVar1 = FUN_00d77580(lVar1,3);
    if (lVar1 != 0) {
      uVar2 = FUN_00d7efc0(*(undefined8 *)(param_1 + 0xd8),0);
      FUN_00d72cd0(uVar2,lVar1,7);
      uVar2 = FUN_00d7efc0(*(undefined8 *)(param_1 + 0xd8),1);
      FUN_00d72cd0(uVar2,lVar1,0);
    }
  }
  lVar1 = FUN_00d74650(param_1,L"button");
  if (lVar1 != 0) {
    lVar1 = FUN_00d77610(lVar1,L"text");
    if (lVar1 != 0) {
      uVar2 = FUN_00d7efc0(*(undefined8 *)(param_1 + 0xd8),10);
      FUN_00d72cd0(uVar2,lVar1,0);
      uVar2 = FUN_00d7efc0(*(undefined8 *)(param_1 + 0xd8),0xb);
      FUN_00d72cd0(uVar2,lVar1,6);
      uVar2 = FUN_00d7efc0(*(undefined8 *)(param_1 + 0xd8),0xc);
      FUN_00d72cd0(uVar2,lVar1,5);
      uVar2 = FUN_00d7efc0(*(undefined8 *)(param_1 + 0xd8),0xd);
      FUN_00d72cd0(uVar2,lVar1,7);
      uVar2 = FUN_00d7efc0(*(undefined8 *)(param_1 + 0xd8),0xe);
      FUN_00d72cd0(uVar2,lVar1,8);
    }
  }
  lVar1 = FUN_00d74650(param_1,L"checkbox");
  if (lVar1 != 0) {
    lVar1 = FUN_00d77610(lVar1,L"text");
    if (lVar1 != 0) {
      uVar2 = FUN_00d7efc0(*(undefined8 *)(param_1 + 0xd8),0xf);
      FUN_00d72cd0(uVar2,lVar1,0);
      uVar2 = FUN_00d7efc0(*(undefined8 *)(param_1 + 0xd8),0x10);
      FUN_00d72cd0(uVar2,lVar1,6);
      uVar2 = FUN_00d7efc0(*(undefined8 *)(param_1 + 0xd8),0x11);
      FUN_00d72cd0(uVar2,lVar1,5);
      uVar2 = FUN_00d7efc0(*(undefined8 *)(param_1 + 0xd8),0x12);
      FUN_00d72cd0(uVar2,lVar1,7);
      uVar2 = FUN_00d7efc0(*(undefined8 *)(param_1 + 0xd8),0x13);
      FUN_00d72cd0(uVar2,lVar1,8);
    }
  }
  lVar1 = FUN_00d74650(param_1,L"radiobutton");
  if (lVar1 != 0) {
    lVar1 = FUN_00d77610(lVar1,L"text");
    if (lVar1 != 0) {
      uVar2 = FUN_00d7efc0(*(undefined8 *)(param_1 + 0xd8),0x14);
      FUN_00d72cd0(uVar2,lVar1,0);
      uVar2 = FUN_00d7efc0(*(undefined8 *)(param_1 + 0xd8),0x15);
      FUN_00d72cd0(uVar2,lVar1,6);
      uVar2 = FUN_00d7efc0(*(undefined8 *)(param_1 + 0xd8),0x16);
      FUN_00d72cd0(uVar2,lVar1,5);
      uVar2 = FUN_00d7efc0(*(undefined8 *)(param_1 + 0xd8),0x17);
      FUN_00d72cd0(uVar2,lVar1,7);
      uVar2 = FUN_00d7efc0(*(undefined8 *)(param_1 + 0xd8),0x18);
      FUN_00d72cd0(uVar2,lVar1,8);
    }
  }
  lVar1 = FUN_00d74650(param_1,L"groupbox");
  if (lVar1 != 0) {
    lVar1 = FUN_00d77610(lVar1,L"caption");
    if (lVar1 != 0) {
      uVar2 = FUN_00d7efc0(*(undefined8 *)(param_1 + 0xd8),0x19);
      FUN_00d72cd0(uVar2,lVar1,0);
      uVar2 = FUN_00d7efc0(*(undefined8 *)(param_1 + 0xd8),0x1a);
      FUN_00d72cd0(uVar2,lVar1,8);
    }
  }
  uVar2 = FUN_00d7efc0(*(undefined8 *)(param_1 + 0xd8),0x1b);
  FUN_00d7da40(uVar2,L"Tahoma",8,0,0);
  uVar2 = FUN_00d7efc0(*(undefined8 *)(param_1 + 0xd8),0x1c);
  FUN_00d7da40(uVar2,L"Tahoma",8,0,0);
  lVar1 = FUN_00d74650(param_1,L"edit");
  if (lVar1 != 0) {
    lVar1 = FUN_00d77610(lVar1,L"text");
    if (lVar1 != 0) {
      uVar2 = FUN_00d7efc0(*(undefined8 *)(param_1 + 0xd8),0x1d);
      FUN_00d72cd0(uVar2,lVar1,0);
      uVar2 = FUN_00d7efc0(*(undefined8 *)(param_1 + 0xd8),0x1e);
      FUN_00d72cd0(uVar2,lVar1,7);
      uVar2 = FUN_00d7efc0(*(undefined8 *)(param_1 + 0xd8),0x1f);
      FUN_00d72cd0(uVar2,lVar1,5);
      uVar2 = FUN_00d7efc0(*(undefined8 *)(param_1 + 0xd8),0x21);
      FUN_00d72cd0(uVar2,lVar1,0);
      uVar2 = FUN_00d7efc0(*(undefined8 *)(param_1 + 0xd8),0x20);
      FUN_00d72cd0(uVar2,lVar1,8);
      uVar2 = FUN_00d7efc0(*(undefined8 *)(param_1 + 0xd8),0x21);
      FUN_005fc860(uVar2,0xffffff);
    }
  }
  lVar1 = FUN_00d74650(param_1,L"listbox");
  if (lVar1 != 0) {
    lVar1 = FUN_00d77610(lVar1,L"item");
    if (lVar1 != 0) {
      uVar2 = FUN_00d7efc0(*(undefined8 *)(param_1 + 0xd8),0x39);
      FUN_00d72cd0(uVar2,lVar1,0);
      uVar2 = FUN_00d7efc0(*(undefined8 *)(param_1 + 0xd8),0x3a);
      FUN_00d72cd0(uVar2,lVar1,0);
      uVar2 = FUN_00d7efc0(*(undefined8 *)(param_1 + 0xd8),0x3b);
      FUN_00d72cd0(uVar2,lVar1,7);
      uVar2 = FUN_00d7efc0(*(undefined8 *)(param_1 + 0xd8),0x3c);
      FUN_00d72cd0(uVar2,lVar1,0);
      uVar2 = FUN_00d7efc0(*(undefined8 *)(param_1 + 0xd8),0x3d);
      FUN_00d72cd0(uVar2,lVar1,8);
    }
  }
  lVar1 = FUN_00d74650(param_1,L"menubar");
  if (lVar1 != 0) {
    lVar3 = FUN_00d77610(lVar1,L"item");
    if (lVar3 != 0) {
      uVar2 = FUN_00d7efc0(*(undefined8 *)(param_1 + 0xd8),0x22);
      FUN_00d72cd0(uVar2,lVar3,0);
      uVar2 = FUN_00d7efc0(*(undefined8 *)(param_1 + 0xd8),0x24);
      FUN_00d72cd0(uVar2,lVar3,5);
      uVar2 = FUN_00d7efc0(*(undefined8 *)(param_1 + 0xd8),0x23);
      FUN_00d72cd0(uVar2,lVar3,7);
      uVar2 = FUN_00d7efc0(*(undefined8 *)(param_1 + 0xd8),0x25);
      FUN_00d72cd0(uVar2,lVar3,8);
    }
    lVar1 = FUN_00d77610(lVar1,L"toolbaritem");
    if (lVar1 != 0) {
      uVar2 = FUN_00d7efc0(*(undefined8 *)(param_1 + 0xd8),0x26);
      FUN_00d72cd0(uVar2,lVar1,0);
      uVar2 = FUN_00d7efc0(*(undefined8 *)(param_1 + 0xd8),0x28);
      FUN_00d72cd0(uVar2,lVar1,5);
      uVar2 = FUN_00d7efc0(*(undefined8 *)(param_1 + 0xd8),0x27);
      FUN_00d72cd0(uVar2,lVar1,7);
      uVar2 = FUN_00d7efc0(*(undefined8 *)(param_1 + 0xd8),0x29);
      FUN_00d72cd0(uVar2,lVar1,8);
    }
  }
  lVar1 = FUN_00d74650(param_1,L"popupmenu");
  if (lVar1 != 0) {
    lVar1 = FUN_00d77610(lVar1,L"item");
    if (lVar1 != 0) {
      uVar2 = FUN_00d7efc0(*(undefined8 *)(param_1 + 0xd8),0x3e);
      FUN_00d72cd0(uVar2,lVar1,0);
      uVar2 = FUN_00d7efc0(*(undefined8 *)(param_1 + 0xd8),0x40);
      FUN_00d72cd0(uVar2,lVar1,5);
      uVar2 = FUN_00d7efc0(*(undefined8 *)(param_1 + 0xd8),0x3f);
      FUN_00d72cd0(uVar2,lVar1,7);
      uVar2 = FUN_00d7efc0(*(undefined8 *)(param_1 + 0xd8),0x41);
      FUN_00d72cd0(uVar2,lVar1,8);
      uVar2 = FUN_00d7efc0(*(undefined8 *)(param_1 + 0xd8),0x41);
      FUN_005fc860(uVar2,0x808080);
    }
  }
  return;
}

