/* Ghidra address: 0094f710 */
/* Ghidra symbol: FUN_0094f710 */


void FUN_0094f710(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = 0;
  local_10 = 0;
  local_18 = 0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x28))(*(longlong **)(param_1 + 0x50));
  if (iVar1 == 0) {
    iVar1 = FUN_00416420(*(undefined8 *)(param_1 + 0x58),0);
    if (iVar1 != 0) {
      FUN_00416020(&local_10,*(undefined8 *)(param_1 + 0x58),param_2);
      FUN_004168b0(&local_18,local_10);
      FUN_004b2dd0(*(undefined8 *)(param_1 + 0x50),local_18);
      goto LAB_0094f7b4;
    }
  }
  FUN_004168b0(&local_20,param_2);
  FUN_004b2dd0(*(undefined8 *)(param_1 + 0x50),local_20);
LAB_0094f7b4:
  FUN_00414520(param_1 + 0x58);
  FUN_00414560(&local_20,2);
  FUN_00414520(&local_10);
  return;
}

