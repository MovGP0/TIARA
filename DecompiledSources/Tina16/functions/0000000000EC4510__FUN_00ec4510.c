/* Ghidra address: 00ec4510 */
/* Ghidra symbol: FUN_00ec4510 */


void FUN_00ec4510(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong local_res8 [2];
  undefined8 local_res18 [2];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_res8[0] = param_1;
  local_res18[0] = param_3;
  FUN_00414610(param_1);
  FUN_00414610(local_res18[0]);
  iVar1 = FUN_004170c0(&DAT_00ec4828,local_res8[0],1);
  if (iVar1 < 1) {
    FUN_00414b50(&local_38,L"TINA");
  }
  else {
    iVar1 = FUN_004170c0(&DAT_00ec4828,local_res8[0],1);
    FUN_00416dc0(&local_40,local_res8[0],1,iVar1 + -1);
    FUN_00ea9ef0(&local_38,local_40);
    iVar1 = FUN_004170c0(&DAT_00ec4828,local_res8[0],1);
    uVar2 = 0;
    if (local_res8[0] != 0) {
      uVar2 = *(undefined4 *)(local_res8[0] + -4);
    }
    FUN_00416dc0(local_res8,local_res8[0],iVar1 + 1,uVar2);
  }
  if (DAT_01ef6a40 == '\0') {
    FUN_00ec0240();
  }
  plVar3 = (longlong *)FUN_00eae5f0(local_38,local_res18[0]);
  if (plVar3 != (longlong *)0x0) {
    FUN_00ea9ca0(&local_48,local_res8[0]);
    (**(code **)(*plVar3 + 0x10))(plVar3,&local_20,L"DigitalICs",local_48,0);
    if (local_20 != 0) {
      (**(code **)(*param_2 + 0x90))(param_2);
      plVar3 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
      FUN_004b67b0(plVar3,1);
      iVar1 = FUN_004170c0(&DAT_00ec4874,local_20,1);
      if (0 < iVar1) {
        do {
          iVar1 = FUN_004170c0(&LAB_00ec4884,local_20,1);
          FUN_00416dc0(&local_30,local_20,1,iVar1 + -1);
          uVar2 = FUN_004170c0(&DAT_00ec4874,local_20,1);
          FUN_00416e20(&local_20,1,uVar2);
          do {
            FUN_00ea9ab0(&local_28,&local_30);
            if (local_28 != 0) {
              FUN_00ea9ef0(&local_50,local_28);
              (**(code **)(*plVar3 + 0x78))(plVar3,local_50);
            }
          } while (local_30 != 0);
        } while (local_20 != 0);
      }
      (**(code **)(*param_2 + 0x88))(param_2,plVar3);
      FUN_00410f20(plVar3);
    }
  }
  FUN_00414560(&local_50,7);
  FUN_00414480(local_res8);
  FUN_00414480(local_res18);
  return;
}

