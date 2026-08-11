/* Ghidra address: 01613620 */
/* Ghidra symbol: FUN_01613620 */


undefined1 FUN_01613620(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  longlong local_res8 [4];
  undefined1 local_39;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_38 = 0;
  local_30 = 0;
  local_20 = 0;
  local_28 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  *param_2 = 0;
  iVar2 = 0;
  if (local_res8[0] != 0) {
    iVar2 = *(int *)(local_res8[0] + -4);
  }
  iVar1 = FUN_004170c0(&LAB_01613758,local_res8[0],1);
  if (iVar1 < 1) {
    local_39 = 0;
  }
  else {
    FUN_00416dc0(&local_30,local_res8[0],iVar1 + -1,iVar1 + -1);
    FUN_0043e130(&local_20,local_30);
    FUN_00416dc0(&local_38,local_res8[0],iVar1 + 1,iVar2 - iVar1);
    FUN_0043e130(&local_28,local_38);
    iVar2 = FUN_01d3d6e0(&local_28);
    *param_2 = iVar2 + -1;
  }
  FUN_00414560(&local_38,4);
  FUN_00414480(local_res8);
  return local_39;
}

