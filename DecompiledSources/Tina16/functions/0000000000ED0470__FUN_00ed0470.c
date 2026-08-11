/* Ghidra address: 00ed0470 */
/* Ghidra symbol: FUN_00ed0470 */


void FUN_00ed0470(byte param_1,longlong param_2,longlong *param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong local_res10 [2];
  undefined8 local_res20;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  
  local_60 = 0;
  local_58 = 0;
  local_50[0] = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_res10[0] = param_2;
  local_res20 = param_4;
  FUN_00414610(param_2);
  FUN_00414610(local_res20);
  if (param_1 < 4) {
    if (param_1 == 3) {
      FUN_00414b50(&local_38,L"Diode");
    }
    else if (param_1 == 0) {
      FUN_00414b50(&local_38,L"Spice");
    }
    else if (param_1 == 1) {
      FUN_00414b50(&local_38,&DAT_00ed089c);
    }
    else if (param_1 == 2) {
      FUN_00414b50(&local_38,&DAT_00ed08b0);
    }
  }
  else if (param_1 == 4) {
    FUN_00414b50(&local_38,L"Mixed");
  }
  else if (param_1 == 5) {
    FUN_00414b50(&local_38,L"OtherSC");
  }
  iVar1 = FUN_004170c0(&DAT_00ed0910,local_res10[0],1);
  if (iVar1 < 1) {
    FUN_00414b50(&local_40,L"TINA");
  }
  else {
    iVar1 = FUN_004170c0(&DAT_00ed0910,local_res10[0],1);
    FUN_00416dc0(local_50,local_res10[0],1,iVar1 + -1);
    FUN_00ea9ef0(&local_40,local_50[0]);
    iVar1 = FUN_004170c0(&DAT_00ed0910,local_res10[0],1);
    uVar2 = 0;
    if (local_res10[0] != 0) {
      uVar2 = *(undefined4 *)(local_res10[0] + -4);
    }
    FUN_00416dc0(local_res10,local_res10[0],iVar1 + 1,uVar2);
  }
  if (DAT_01ef72c4 == '\0') {
    FUN_00ecbb60();
  }
  plVar3 = (longlong *)FUN_00eae5f0(local_40,local_res20);
  if (plVar3 != (longlong *)0x0) {
    FUN_00ea9ca0(&local_58,local_res10[0]);
    (**(code **)(*plVar3 + 0x10))(plVar3,&local_20,local_38,local_58,0);
    if (local_20 != 0) {
      (**(code **)(*param_3 + 0x90))(param_3);
      plVar3 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
      FUN_004b67b0(plVar3,1);
      iVar1 = FUN_004170c0(&DAT_00ed0938,local_20,1);
      if (0 < iVar1) {
        do {
          iVar1 = FUN_004170c0(&LAB_00ed0948,local_20,1);
          FUN_00416dc0(&local_30,local_20,1,iVar1 + -1);
          uVar2 = FUN_004170c0(&DAT_00ed0938,local_20,1);
          FUN_00416e20(&local_20,1,uVar2);
          do {
            FUN_00ea9ab0(&local_28,&local_30);
            if (local_28 != 0) {
              FUN_00ea9ef0(&local_60,local_28);
              (**(code **)(*plVar3 + 0x78))(plVar3,local_60);
            }
          } while (local_30 != 0);
        } while (local_20 != 0);
      }
      (**(code **)(*param_3 + 0x88))(param_3,plVar3);
      FUN_00410f20(plVar3);
    }
  }
  FUN_00414560(&local_60,3);
  FUN_00414560(&local_40,5);
  FUN_00414480(local_res10);
  FUN_00414480(&local_res20);
  return;
}

