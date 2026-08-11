/* Ghidra address: 01c2ba70 */
/* Ghidra symbol: FUN_01c2ba70 */


void FUN_01c2ba70(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 local_res10 [3];
  longlong local_28;
  longlong local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  (**(code **)(*param_1 + 0x90))(param_1);
  FUN_004b67b0(param_1,0);
  FUN_00414b50(local_20,local_res10[0]);
  uVar1 = FUN_004170c0(&DAT_01c2bcc8,local_20[0],1);
  uVar2 = 0;
  if (local_20[0] != 0) {
    uVar2 = *(undefined4 *)(local_20[0] + -4);
  }
  FUN_01c29c00(local_20,uVar1,uVar2);
  FUN_00416ba0(param_1 + 0xf,local_20[0],&DAT_01c2bcc8);
  while( true ) {
    iVar3 = 0;
    if (param_1[0xf] != 0) {
      iVar3 = *(int *)(param_1[0xf] + -4);
    }
    if (0xf < iVar3) break;
    FUN_00416ad0(param_1 + 0xf,&DAT_01c2bcc8);
  }
  FUN_00414b50(local_20,local_res10[0]);
  iVar3 = FUN_004170c0(&LAB_01c2bcd8,local_20[0],1);
  if (iVar3 == 0) {
    FUN_00414ad0(param_1 + 0xf,local_res10[0]);
  }
  else {
    iVar3 = FUN_004170c0(&LAB_01c2bcd8,local_20[0],1);
    FUN_01c29c00(local_20,1,iVar3 + -1);
    FUN_00416ad0(local_20,&LAB_01c2bcd8);
    do {
      FUN_01c29c00(local_20,1,1);
      FUN_00414b50(&local_28,local_20[0]);
      uVar1 = FUN_004170c0(&LAB_01c2bcd8,local_28,1);
      uVar2 = 0;
      if (local_28 != 0) {
        uVar2 = *(undefined4 *)(local_28 + -4);
      }
      FUN_01c29c00(&local_28,uVar1,uVar2);
      (**(code **)(*param_1 + 0x78))(param_1,local_28);
      iVar3 = FUN_004170c0(&LAB_01c2bcd8,local_20[0],1);
      FUN_01c29c00(local_20,1,iVar3 + -1);
      iVar3 = FUN_00416db0(local_20[0],&LAB_01c2bcd8);
    } while (iVar3 != 0);
  }
  FUN_00414560(&local_28,2);
  FUN_00414480(local_res10);
  return;
}

