/* Ghidra address: 01114a80 */
/* Ghidra symbol: FUN_01114a80 */


void FUN_01114a80(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20 [2];
  
  local_48 = 0;
  local_40 = 0;
  local_30 = 0;
  local_38 = 0;
  local_28 = 0;
  local_20[0] = 0;
  if (*(longlong *)(param_2 + 0x10) != 0) {
    uVar2 = FUN_0065b870(param_1);
    iVar1 = thunk_FUN_039bb6fb(uVar2);
    if (iVar1 == 0) {
      FUN_00bf2ed0(param_1,&local_30);
      FUN_00415dd0(&local_38,local_30,0);
      uVar2 = FUN_00415ab0(local_38);
      FUN_00bf2ed0(param_1,&local_40);
      uVar3 = 0;
      if (local_40 != 0) {
        uVar3 = *(undefined4 *)(local_40 + -4);
      }
      FUN_0061db10(*(undefined8 *)(param_2 + 0x10),uVar2,uVar3);
    }
    else {
      FUN_00bf2ed0(param_1,local_20);
      uVar2 = FUN_00416740(local_20[0]);
      FUN_00bf2ed0(param_1,&local_28);
      uVar3 = 0;
      if (local_28 != 0) {
        uVar3 = *(undefined4 *)(local_28 + -4);
      }
      FUN_00711330(*(undefined8 *)(param_2 + 0x10),uVar2,uVar3);
    }
    FUN_00bf2ed0(param_1,&local_48);
    iVar1 = 0;
    if (local_48 != 0) {
      iVar1 = *(int *)(local_48 + -4);
    }
    *(longlong *)(param_2 + 0x18) = (longlong)iVar1;
  }
  FUN_00414560(&local_48,2);
  FUN_004144d0(&local_38);
  FUN_00414560(&local_30,3);
  return;
}

