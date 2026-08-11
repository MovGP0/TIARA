/* Ghidra address: 0135b130 */
/* Ghidra symbol: FUN_0135b130 */


void FUN_0135b130(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 local_38;
  undefined8 local_30 [2];
  longlong local_20 [2];
  
  local_38 = 0;
  local_30[0] = 0;
  local_20[0] = 0;
  uVar1 = FUN_00414ce0(*param_2);
  FUN_004147f0(local_20,*param_2,uVar1,0);
  FUN_00416880(local_30,local_20[0]);
  iVar2 = FUN_004170c0(L"SetState(",local_30[0],1);
  if (0 < iVar2) {
    FUN_00416880(&local_38,local_20[0]);
    iVar3 = FUN_004170c0(&LAB_0135b2a8,local_38,iVar2);
    FUN_00415b50(local_20,iVar2,(iVar3 - iVar2) + 1);
    if (local_20[0] == 0) {
      FUN_004095f0(*param_2);
      *param_2 = 0;
    }
    else {
      iVar2 = 0;
      if (local_20[0] != 0) {
        iVar2 = *(int *)(local_20[0] + -4);
      }
      FUN_00409620(param_2,(longlong)(iVar2 + 1));
      FUN_004425e0(*param_2,local_20[0]);
    }
  }
  FUN_00414560(&local_38,2);
  FUN_004144d0(local_20);
  return;
}

