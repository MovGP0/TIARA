/* Ghidra address: 0198abb0 */
/* Ghidra symbol: FUN_0198abb0 */


void FUN_0198abb0(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong local_res10 [3];
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar1 = 0;
  if (local_res10[0] != 0) {
    iVar1 = *(int *)(local_res10[0] + -4);
  }
  if (0 < iVar1) {
    FUN_005b86c0(&local_10,local_res10[0],&LAB_0198acb8);
    FUN_00415dd0(param_1,*local_10,0);
    FUN_00415dd0(param_1 + 8,local_10[1],0);
    uVar2 = FUN_0043fc00(local_10[2]);
    *(undefined4 *)(param_1 + 0x10) = uVar2;
    uVar3 = FUN_00b8f030(local_10[3]);
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    FUN_00419430(&local_10,&DAT_004210c0);
  }
  FUN_00419430(&local_10,&DAT_004210c0);
  FUN_00414480(local_res10);
  return;
}

