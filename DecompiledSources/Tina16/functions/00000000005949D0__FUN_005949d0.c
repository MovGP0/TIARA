/* Ghidra address: 005949d0 */
/* Ghidra symbol: FUN_005949d0 */


int FUN_005949d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int local_3c;
  longlong local_38;
  longlong local_30 [2];
  
  local_30[0] = 0;
  local_38 = 0;
  FUN_0043e600(local_30,param_2);
  FUN_0043e600(&local_38,param_3);
  iVar4 = 0;
  if (local_30[0] != 0) {
    iVar4 = *(int *)(local_30[0] + -4);
  }
  iVar5 = 0;
  if (local_38 != 0) {
    iVar5 = *(int *)(local_38 + -4);
  }
  iVar5 = iVar4 - iVar5;
  iVar1 = 0;
  if (local_38 != 0) {
    iVar1 = *(int *)(local_38 + -4);
  }
  if ((iVar1 < iVar4) && (iVar4 = 0, local_38 != 0)) {
    iVar4 = *(int *)(local_38 + -4);
  }
  uVar2 = FUN_00416740(local_30[0]);
  uVar3 = FUN_00416740(local_38);
  local_3c = FUN_005932e0(uVar2,uVar3,iVar4 * 2);
  if (local_3c == 0) {
    local_3c = iVar5;
  }
  FUN_00414560(&local_38,2);
  return local_3c;
}

