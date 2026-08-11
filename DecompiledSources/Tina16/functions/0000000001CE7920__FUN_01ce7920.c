/* Ghidra address: 01ce7920 */
/* Ghidra symbol: FUN_01ce7920 */


undefined4 FUN_01ce7920(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  longlong local_res8 [4];
  undefined4 local_34;
  undefined8 local_30 [2];
  int local_1c;
  
  local_30[0] = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  while (iVar3 = FUN_004170c0(&LAB_01ce7a54,local_res8[0],1), 0 < iVar3) {
    iVar1 = FUN_004170c0(&LAB_01ce7a54,local_res8[0],1);
    iVar3 = 0;
    if (local_res8[0] != 0) {
      iVar3 = *(int *)(local_res8[0] + -4);
    }
    iVar2 = FUN_004170c0(&LAB_01ce7a54,local_res8[0],1);
    FUN_00416dc0(local_res8,local_res8[0],iVar1 + 1,iVar3 - iVar2);
  }
  FUN_0043ea00(local_30,local_res8[0]);
  local_34 = FUN_0040e860(local_30[0],&local_1c);
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
    local_34 = 1000;
  }
  FUN_00414480(local_30);
  FUN_00414480(local_res8);
  return local_34;
}

