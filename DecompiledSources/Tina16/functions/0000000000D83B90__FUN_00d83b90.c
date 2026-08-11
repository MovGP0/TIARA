/* Ghidra address: 00d83b90 */
/* Ghidra symbol: FUN_00d83b90 */


void FUN_00d83b90(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong local_20;
  
  FUN_00d84660(param_1);
  if (*(longlong *)(param_1 + 0x48) != 0) {
    iVar1 = FUN_00d74940(*(longlong *)(param_1 + 0x48));
    if (iVar1 != 0) {
      lVar2 = FUN_00d74650(*(undefined8 *)(param_1 + 0x48),L"Form");
      **(longlong **)(param_1 + 0x58) = lVar2;
      if (lVar2 == 0) {
        local_20 = 0;
      }
      else {
        local_20 = FUN_00d77580(lVar2,0xd);
      }
      if (local_20 != 0) {
        uVar3 = FUN_00d75d50(local_20,0);
        *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x20) = uVar3;
        uVar3 = *(undefined8 *)(local_20 + 8);
        FUN_00d774d0(uVar3,local_20);
        FUN_00410f20(local_20);
        lVar2 = FUN_00d75900(&PTR_FUN_00d5d820,1,uVar3);
        *(longlong *)(*(longlong *)(param_1 + 0x58) + 8) = lVar2;
        *(undefined4 *)(lVar2 + 0x114) = 0x1fffffff;
        *(undefined1 *)(lVar2 + 0x78) =
             *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x20) + 0x78);
        *(undefined1 *)(lVar2 + 0x79) = 0xd;
        uVar3 = FUN_00d75d50(**(undefined8 **)(param_1 + 0x58),0);
        *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x10) = uVar3;
        uVar3 = FUN_00d75d50(**(undefined8 **)(param_1 + 0x58),0);
        *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x18) = uVar3;
        lVar2 = FUN_00d774e0(**(undefined8 **)(param_1 + 0x58),9);
        if (lVar2 != 0) {
          *(undefined1 *)(lVar2 + 0x8c) = 0;
        }
        lVar2 = FUN_00d774e0(**(undefined8 **)(param_1 + 0x58),1);
        if (lVar2 != 0) {
          *(undefined1 *)(lVar2 + 0x8c) = 0;
        }
        lVar2 = FUN_00d774e0(**(undefined8 **)(param_1 + 0x58),2);
        if (lVar2 != 0) {
          *(undefined1 *)(lVar2 + 0x8c) = 0;
        }
        lVar2 = FUN_00d774e0(**(undefined8 **)(param_1 + 0x58),3);
        if (lVar2 != 0) {
          *(undefined1 *)(lVar2 + 0x8c) = 0;
        }
        lVar2 = FUN_00d774e0(**(undefined8 **)(param_1 + 0x58),4);
        if (lVar2 != 0) {
          *(undefined1 *)(lVar2 + 0x8c) = 0;
        }
        lVar2 = FUN_00d774e0(**(undefined8 **)(param_1 + 0x58),5);
        if (lVar2 != 0) {
          *(undefined1 *)(lVar2 + 0x8c) = 0;
        }
        lVar2 = FUN_00d774e0(**(undefined8 **)(param_1 + 0x58),6);
        if (lVar2 != 0) {
          *(undefined1 *)(lVar2 + 0x8c) = 0;
        }
        lVar2 = FUN_00d774e0(**(undefined8 **)(param_1 + 0x58),7);
        if (lVar2 != 0) {
          *(undefined1 *)(lVar2 + 0x8c) = 0;
        }
        lVar2 = FUN_00d774e0(**(undefined8 **)(param_1 + 0x58),8);
        if (lVar2 != 0) {
          *(undefined1 *)(lVar2 + 0x8c) = 0;
        }
      }
      lVar2 = FUN_00d74650(*(undefined8 *)(param_1 + 0x48),L"ToolWindow");
      *(longlong *)(*(longlong *)(param_1 + 0x58) + 0xf0) = lVar2;
      if (lVar2 == 0) {
        local_20 = 0;
      }
      else {
        local_20 = FUN_00d77580(lVar2,0xd);
      }
      if (local_20 != 0) {
        uVar3 = FUN_00d75d50(local_20,0);
        *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x110) = uVar3;
        uVar3 = *(undefined8 *)(local_20 + 8);
        FUN_00d774d0(uVar3,local_20);
        FUN_00410f20(local_20);
        lVar2 = FUN_00d75900(&PTR_FUN_00d5d820,1,uVar3);
        *(longlong *)(*(longlong *)(param_1 + 0x58) + 0xf8) = lVar2;
        *(undefined4 *)(lVar2 + 0x114) = 0x1fffffff;
        *(undefined1 *)(lVar2 + 0x78) =
             *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x110) + 0x78);
        *(undefined1 *)(lVar2 + 0x79) = 0xd;
        uVar3 = FUN_00d75d50(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0xf0),0);
        *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x100) = uVar3;
        uVar3 = FUN_00d75d50(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0xf0),0);
        *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x108) = uVar3;
        lVar2 = FUN_00d774e0(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0xf0),9);
        if (lVar2 != 0) {
          *(undefined1 *)(lVar2 + 0x8c) = 0;
        }
        lVar2 = FUN_00d774e0(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0xf0),1);
        if (lVar2 != 0) {
          *(undefined1 *)(lVar2 + 0x8c) = 0;
        }
        lVar2 = FUN_00d774e0(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0xf0),2);
        if (lVar2 != 0) {
          *(undefined1 *)(lVar2 + 0x8c) = 0;
        }
        lVar2 = FUN_00d774e0(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0xf0),3);
        if (lVar2 != 0) {
          *(undefined1 *)(lVar2 + 0x8c) = 0;
        }
        lVar2 = FUN_00d774e0(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0xf0),4);
        if (lVar2 != 0) {
          *(undefined1 *)(lVar2 + 0x8c) = 0;
        }
        lVar2 = FUN_00d774e0(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0xf0),5);
        if (lVar2 != 0) {
          *(undefined1 *)(lVar2 + 0x8c) = 0;
        }
        lVar2 = FUN_00d774e0(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0xf0),6);
        if (lVar2 != 0) {
          *(undefined1 *)(lVar2 + 0x8c) = 0;
        }
        lVar2 = FUN_00d774e0(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0xf0),7);
        if (lVar2 != 0) {
          *(undefined1 *)(lVar2 + 0x8c) = 0;
        }
        lVar2 = FUN_00d774e0(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0xf0),8);
        if (lVar2 != 0) {
          *(undefined1 *)(lVar2 + 0x8c) = 0;
        }
      }
      uVar3 = FUN_00d74650(*(undefined8 *)(param_1 + 0x48),L"Button");
      *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x28) = uVar3;
      uVar3 = FUN_00d74650(*(undefined8 *)(param_1 + 0x48),L"Checkbox");
      *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x30) = uVar3;
      uVar3 = FUN_00d74650(*(undefined8 *)(param_1 + 0x48),L"RadioButton");
      *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x38) = uVar3;
      uVar3 = FUN_00d74650(*(undefined8 *)(param_1 + 0x48),L"GroupBox");
      *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x40) = uVar3;
      uVar3 = FUN_00d74650(*(undefined8 *)(param_1 + 0x48),L"ScrollBar");
      *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x48) = uVar3;
      uVar3 = FUN_00d74650(*(undefined8 *)(param_1 + 0x48),L"ProgressBar");
      *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x50) = uVar3;
      uVar3 = FUN_00d74650(*(undefined8 *)(param_1 + 0x48),L"Edit");
      *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x58) = uVar3;
      uVar3 = FUN_00d74650(*(undefined8 *)(param_1 + 0x48),L"ComboBox");
      *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x60) = uVar3;
      uVar3 = FUN_00d74650(*(undefined8 *)(param_1 + 0x48),L"TrackBar");
      *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x68) = uVar3;
      uVar3 = FUN_00d74650(*(undefined8 *)(param_1 + 0x48),L"MenuBar");
      *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x70) = uVar3;
      uVar3 = FUN_00d74650(*(undefined8 *)(param_1 + 0x48),L"PopupMenu");
      *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x78) = uVar3;
      uVar3 = FUN_00d74650(*(undefined8 *)(param_1 + 0x48),L"Header");
      *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x80) = uVar3;
      uVar3 = FUN_00d74650(*(undefined8 *)(param_1 + 0x48),L"StatusBar");
      *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x88) = uVar3;
      uVar3 = FUN_00d74650(*(undefined8 *)(param_1 + 0x48),L"Tabs");
      *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x90) = uVar3;
      uVar3 = FUN_00d74650(*(undefined8 *)(param_1 + 0x48),L"Container");
      *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x98) = uVar3;
      uVar3 = FUN_00d74650(*(undefined8 *)(param_1 + 0x48),L"Frame");
      *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0xa0) = uVar3;
      uVar3 = FUN_00d74650(*(undefined8 *)(param_1 + 0x48),L"ScrollBox");
      *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0xa8) = uVar3;
      uVar3 = FUN_00d74650(*(undefined8 *)(param_1 + 0x48),L"Splitter");
      *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0xb0) = uVar3;
      uVar3 = FUN_00d74650(*(undefined8 *)(param_1 + 0x48),L"SpinButton");
      *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0xb8) = uVar3;
      uVar3 = FUN_00d74650(*(undefined8 *)(param_1 + 0x48),L"ControlBar");
      *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0xc0) = uVar3;
      uVar3 = FUN_00d74650(*(undefined8 *)(param_1 + 0x48),L"Grid");
      *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 200) = uVar3;
      uVar3 = FUN_00d74650(*(undefined8 *)(param_1 + 0x48),L"ListBox");
      *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0xd0) = uVar3;
      uVar3 = FUN_00d74650(*(undefined8 *)(param_1 + 0x48),L"Hint");
      *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0xd8) = uVar3;
      uVar3 = FUN_00d74650(*(undefined8 *)(param_1 + 0x48),L"SpeedButton");
      *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0xe0) = uVar3;
      uVar3 = FUN_00d74650(*(undefined8 *)(param_1 + 0x48),L"ToolBar");
      *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0xe8) = uVar3;
      uVar3 = FUN_00d74650(*(undefined8 *)(param_1 + 0x48),L"Panel");
      *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x118) = uVar3;
      uVar3 = FUN_00d74650(*(undefined8 *)(param_1 + 0x48),L"ScrollBox");
      *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x120) = uVar3;
    }
  }
  return;
}

