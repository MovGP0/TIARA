/* Ghidra address: 01884770 */
/* Ghidra symbol: FUN_01884770 */


undefined8 FUN_01884770(longlong param_1,undefined8 param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20;
  
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_20 = 0;
  local_28 = 0;
  FUN_00414480(param_2);
  FUN_00414b50(&local_20,*(undefined8 *)(param_1 + 0x2a8));
  FUN_00414480(&local_28);
  iVar2 = FUN_004170c0(&DAT_01884978,local_20,1);
  if (iVar2 == 1) {
    FUN_00416ad0(&local_20,&DAT_01884978);
    iVar2 = FUN_00414cb0(local_20);
    iVar4 = 2;
    if (1 < iVar2) {
      iVar2 = iVar2 + -1;
      do {
        sVar1 = *(short *)(local_20 + -2 + (longlong)iVar4 * 2);
        if (sVar1 == 0x23) {
          uVar3 = FUN_0043fc00(local_28);
          FUN_00416780(&local_30,uVar3);
          FUN_00416ad0(param_2,local_30);
          FUN_00414480(&local_28);
        }
        else {
          FUN_00416780(&local_38,sVar1);
          FUN_00416ad0(&local_28,local_38);
        }
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  else {
    iVar2 = FUN_00414cb0(local_20);
    iVar4 = 1;
    if (0 < iVar2) {
      do {
        FUN_00416780(&local_40,*(undefined2 *)(local_20 + -2 + (longlong)iVar4 * 2));
        FUN_00416ad0(&local_28,local_40);
        if (iVar4 % 2 == 0) {
          FUN_00416ba0(&local_48,&LAB_01884988,local_28);
          uVar3 = FUN_0043fc00(local_48);
          FUN_00416780(&local_50,uVar3);
          FUN_00416ad0(param_2,local_50);
          FUN_00414480(&local_28);
        }
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  FUN_00414560(&local_50,7);
  return param_2;
}

