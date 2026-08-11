/* Ghidra address: 017fc9e0 */
/* Ghidra symbol: FUN_017fc9e0 */


void FUN_017fc9e0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_c8 [32];
  undefined *local_a8;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 local_30;
  char local_21;
  undefined8 local_20 [2];
  
  local_40 = auStack_c8;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_60 = 0;
  local_70 = 0;
  local_68 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_20[0] = 0;
  (**(code **)(**(longlong **)(param_1 + 0x6b8) + 0x98))(*(longlong **)(param_1 + 0x6b8),L"Busy");
  *(undefined1 *)(param_1 + 0x70c) = 0;
  *(undefined1 *)(param_1 + 0x70d) = 0;
  do {
    iVar2 = (**(code **)(*param_3 + 0x28))(param_3);
    if (iVar2 < 1) {
      (**(code **)(*param_3 + 0x90))(param_3);
      if (*(char *)(param_1 + 0xa9) != '\0') {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6f0) + 0x4d8);
        (**(code **)(*plVar1 + 200))(plVar1,0,L"--------------------");
      }
      if ((*(char *)(param_1 + 0x70c) != '\0') || (*(char *)(param_1 + 0x70d) != '\0')) {
        FUN_0199e310(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8),
                     *(char *)(param_1 + 0x70c),*(undefined1 *)(param_1 + 0x70d),0);
      }
      (**(code **)(**(longlong **)(param_1 + 0x6b8) + 0x98))
                (*(longlong **)(param_1 + 0x6b8),L"Ready");
      FUN_00414560(&local_90,4);
      FUN_004144d0(&local_70);
      FUN_00414560(&local_68,5);
      FUN_00414480(local_20);
      return;
    }
    if (*(char *)(param_1 + 0xa9) != '\0') {
      (**(code **)(*param_3 + 0x18))(param_3,&local_48,0);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6f0) + 0x4d8);
      (**(code **)(*plVar1 + 200))(plVar1,0);
    }
    (**(code **)(*param_3 + 0x18))(param_3,&local_50);
    iVar2 = FUN_00416db0(local_50,L"Connect(Edison)");
    if (iVar2 == 0) {
      FUN_00c4c870(*(undefined8 *)(param_1 + 0x6c0),L"Edison5",L"EdiServer");
      FUN_00414ad0(*(longlong *)(param_1 + 0x6c0) + 0xa0,L"Edison5\\Edison5");
      local_21 = FUN_00c4cb00(*(undefined8 *)(param_1 + 0x6c0));
      if (local_21 == '\0') {
        FUN_0072d440(L"Tina could not connect to Edison!",1,4,0);
      }
      else {
        *(undefined1 *)(param_1 + 0x708) = 1;
        *(undefined1 *)(param_1 + 0x70a) = 0;
        FUN_0135b920(*(undefined8 *)PTR_DAT_020058b0);
        FUN_00414480(local_20);
        local_30 = FUN_00448ed0();
        FUN_0044a350(local_20,local_30,PTR_DAT_02004830);
        FUN_00416ba0(&local_58,
                     L"\r\nTina DDE Log - Tina DDE message log started (Tina connected to Edison) ")
        ;
        FUN_0135b9c0(*(undefined8 *)PTR_DAT_020058b0,local_58);
        FUN_00414480(local_20);
        if (*PTR_DAT_020052b8 == '\0') {
          FUN_0080c340(*(undefined8 *)PTR_DAT_02004030,&local_68);
          local_a8 = &DAT_017fd210;
          FUN_00416cd0(&local_60,3,L"ResetDDE(",local_68);
          FUN_00415dd0(&local_70,local_60,0);
          FUN_017fe450(param_1,local_70,1,1);
          *(undefined1 *)(param_1 + 0x708) = 0;
          FUN_017fe8f0(param_1,*(undefined8 *)(param_1 + 0x6c0));
        }
        if ((*PTR_DAT_020052b8 != '\0') && (*(char *)(param_1 + 0x70f) != '\0')) {
          FUN_017fe450(param_1,"ShowEdison()");
        }
      }
    }
    else {
      (**(code **)(*param_3 + 0x18))(param_3,&local_78);
      iVar2 = FUN_00416db0(local_78,L"Connect(PCBViewer)");
      if (iVar2 == 0) {
        FUN_00c4c870(*(undefined8 *)(param_1 + 0x6d0),L"PCBViewer");
        FUN_00414ad0(*(longlong *)(param_1 + 0x6d0) + 0xa0,L"PCBViewer");
        local_21 = FUN_00c4cb00(*(undefined8 *)(param_1 + 0x6d0));
        if (local_21 == '\0') {
          FUN_0072d440(L"Tina could not connect to PCBViewer!",1,4,0);
        }
        else {
          *(undefined1 *)(param_1 + 0x709) = 1;
          *(undefined1 *)(param_1 + 0x70b) = 0;
        }
      }
      else {
        (**(code **)(*param_3 + 0x18))(param_3,&local_80);
        iVar2 = FUN_00416db0(local_80,L"ShowDDEWindow(PCBViewer)");
        if (iVar2 != 0) {
          (**(code **)(*param_3 + 0x18))(param_3,&local_88);
          iVar2 = FUN_00416db0(local_88,L"ShowDDEWindow(Edison)");
          if (iVar2 != 0) {
            (**(code **)(*param_3 + 0x18))(param_3,&local_90);
            FUN_017fd790(param_1,local_90);
            goto LAB_017fceae;
          }
        }
        FUN_008059a0(param_1);
      }
    }
LAB_017fceae:
    (**(code **)(*param_3 + 0x98))(param_3,0);
  } while( true );
}

