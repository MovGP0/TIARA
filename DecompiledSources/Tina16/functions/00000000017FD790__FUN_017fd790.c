/* Ghidra address: 017fd790 */
/* Ghidra symbol: FUN_017fd790 */


void FUN_017fd790(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong local_res10 [3];
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_58 = 0;
  local_60 = 0;
  local_48 = 0;
  local_50 = 0;
  local_38 = 0;
  local_40 = 0;
  local_28 = 0;
  local_30 = 0;
  local_20 = 0;
  local_10 = 0;
  local_18 = 0;
  local_res10[0] = param_2;
  local_68 = param_1;
  FUN_00414610(param_2);
  if (local_res10[0] != 0) {
    FUN_00415dd0(&local_20,local_res10[0],0);
    FUN_017f64b0(local_20,*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8));
    FUN_00415dd0(&local_30,local_res10[0],0);
    FUN_017fd470(auStack_88,&local_28,local_30);
    FUN_00416880(&local_18,local_28);
    FUN_00415dd0(&local_40,local_res10[0],0);
    FUN_017fd3b0(auStack_88,&local_38,local_40);
    FUN_00416880(&local_10,local_38);
    iVar1 = FUN_00416db0(local_10,L"SetParameters");
    if (iVar1 != 0) {
      iVar1 = FUN_00416db0(local_10,L"SelectPart");
      if (iVar1 != 0) {
        iVar1 = FUN_00416db0(local_10,L"SetWindowState");
        if (iVar1 != 0) goto code_r0x017fd992;
      }
    }
    iVar1 = FUN_00416db0(local_18,L"Edison");
    if (iVar1 != 0) {
      iVar1 = FUN_00416db0(local_18,L"PCBViewer");
      if (iVar1 != 0) goto code_r0x017fd992;
    }
    iVar1 = FUN_00416db0(local_18,L"Edison");
    if (iVar1 == 0) {
      FUN_017fd640(auStack_88,&local_48,local_res10[0]);
      FUN_00415dd0(&local_50,local_48,0);
      FUN_017fe450(local_68,local_50,2,1);
    }
    else {
      FUN_017fd640(auStack_88,&local_58,local_res10[0]);
      FUN_00415dd0(&local_60,local_58,0);
      FUN_017fe450(local_68,local_60,1,1);
    }
  }
code_r0x017fd992:
  FUN_004144d0(&local_60);
  FUN_00414480(&local_58);
  FUN_004144d0(&local_50);
  FUN_00414480(&local_48);
  FUN_00414590(&local_40,5);
  FUN_00414560(&local_18,2);
  FUN_00414480(local_res10);
  return;
}

