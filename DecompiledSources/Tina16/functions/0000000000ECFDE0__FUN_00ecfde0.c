/* Ghidra address: 00ecfde0 */
/* Ghidra symbol: FUN_00ecfde0 */


undefined8 FUN_00ecfde0(undefined8 param_1,byte param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 local_res20;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  longlong local_28;
  longlong local_20 [2];
  
  local_68 = 0;
  local_58 = 0;
  local_60 = 0;
  local_48 = 0;
  local_50 = 0;
  local_40[0] = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  if (param_2 < 4) {
    if (param_2 == 3) {
      FUN_00414b50(&local_30,L"Diode");
    }
    else if (param_2 == 0) {
      FUN_00414b50(&local_30,L"Spice");
    }
    else if (param_2 == 1) {
      FUN_00414b50(&local_30,&DAT_00ed0184);
    }
    else if (param_2 == 2) {
      FUN_00414b50(&local_30,&DAT_00ed0198);
    }
  }
  else if (param_2 == 4) {
    FUN_00414b50(&local_30,L"Mixed");
  }
  else if (param_2 == 5) {
    FUN_00414b50(&local_30,L"OtherSC");
  }
  if (DAT_01ef72c4 == '\0') {
    FUN_00ecbb60();
  }
  FUN_00414480(param_1);
  FUN_00414480(&local_28);
  FUN_00eaebb0(&local_28,local_30,*param_3);
  if (local_28 == 0) {
    plVar3 = (longlong *)FUN_00eae5f0(L"tina",local_res20);
    if (plVar3 != (longlong *)0x0) {
      FUN_00ea9ca0(&local_60,*param_3);
      (**(code **)(*plVar3 + 0x10))(plVar3,&local_58,local_30,local_60,0);
      FUN_0043ea00(local_20,local_58);
      if (local_20[0] != 0) {
        FUN_00ea99b0(&local_68,local_20);
        FUN_00ea9ef0(param_1,local_68);
      }
    }
  }
  else {
    iVar1 = FUN_004170c0(&DAT_00ed01f8,local_28,1);
    if (iVar1 < 1) {
      FUN_00ea9ef0(param_1,local_28);
    }
    else {
      iVar1 = FUN_004170c0(&DAT_00ed01f8,local_28,1);
      uVar2 = 0;
      if (local_28 != 0) {
        uVar2 = *(undefined4 *)(local_28 + -4);
      }
      FUN_00416dc0(local_40,local_28,iVar1 + 2,uVar2);
      FUN_00ea9ef0(param_1,local_40[0]);
      uVar2 = FUN_004170c0(&DAT_00ed01f8,local_28,1);
      FUN_00416dc0(&local_50,local_28,1,uVar2);
      FUN_00416ad0(&local_50,*param_3);
      FUN_00ea9ef0(&local_48,local_50);
      FUN_00414ad0(param_3,local_48);
    }
  }
  FUN_00414560(&local_68,6);
  FUN_00414560(&local_30,3);
  FUN_00414480(&local_res20);
  return param_1;
}

