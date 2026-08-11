/* Ghidra address: 00594ac0 */
/* Ghidra symbol: FUN_00594ac0 */


undefined1 FUN_00594ac0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong local_28;
  longlong local_20;
  
  local_20 = 0;
  local_28 = 0;
  FUN_0043e600(&local_20,param_2);
  FUN_0043e600(&local_28,param_3);
  iVar6 = 0;
  if (local_20 != 0) {
    iVar6 = *(int *)(local_20 + -4);
  }
  iVar3 = 0;
  if (local_28 != 0) {
    iVar3 = *(int *)(local_28 + -4);
  }
  if (iVar6 == iVar3) {
    uVar4 = FUN_00416740(local_20);
    uVar5 = FUN_00416740(local_28);
    cVar1 = FUN_0043e2c0(uVar4,uVar5,iVar6 * 2);
    if (cVar1 != '\0') {
      uVar2 = 1;
      goto LAB_00594b51;
    }
  }
  uVar2 = 0;
LAB_00594b51:
  FUN_00414560(&local_28,2);
  return uVar2;
}

