/* Ghidra address: 009e9010 */
/* Ghidra symbol: FUN_009e9010 */


void FUN_009e9010(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_40 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  iVar1 = (**(code **)(*param_1 + 0xb8))(param_1,param_2);
  iVar2 = FUN_00416420(param_3,0);
  if (iVar2 == 0) {
    if (-1 < iVar1) {
      (**(code **)(*param_1 + 0x98))(param_1,iVar1);
    }
  }
  else {
    if (iVar1 < 0) {
      iVar1 = (**(code **)(*param_1 + 0x70))(param_1,0);
    }
    FUN_004168b0(&local_28,param_2);
    uVar3 = FUN_009e9660(param_1);
    FUN_00416780(&local_30,uVar3);
    FUN_004168b0(&local_38,param_3);
    FUN_00416cd0(local_20,3,local_28,local_30,local_38);
    FUN_004168e0(&local_40,local_20[0]);
    (**(code **)(*param_1 + 0x40))(param_1,iVar1,local_40);
  }
  FUN_00414520(&local_40);
  FUN_00414560(&local_38,4);
  return;
}

