/* Ghidra address: 01516cf0 */
/* Ghidra symbol: FUN_01516cf0 */


undefined4 FUN_01516cf0(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  longlong local_res8 [4];
  undefined4 local_2c;
  int local_1c;
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  while( true ) {
    iVar3 = FUN_004170c0(&LAB_01516df4,local_res8[0],1);
    if (iVar3 < 1) break;
    iVar1 = FUN_004170c0(&LAB_01516df4,local_res8[0],1);
    iVar3 = 0;
    if (local_res8[0] != 0) {
      iVar3 = *(int *)(local_res8[0] + -4);
    }
    iVar2 = FUN_004170c0(&LAB_01516df4,local_res8[0],1);
    FUN_00416dc0(local_res8,local_res8[0],iVar1 + 1,iVar3 - iVar2);
  }
  local_2c = FUN_0040e860(local_res8[0],&local_1c);
  if (local_1c == 0) {
    iVar3 = 0;
    if (local_res8[0] != 0) {
      iVar3 = *(int *)(local_res8[0] + -4);
    }
    bVar4 = iVar3 == 0;
  }
  else {
    bVar4 = true;
  }
  if (bVar4) {
    local_2c = 1000;
  }
  FUN_00414480(local_res8);
  return local_2c;
}

