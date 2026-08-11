/* Ghidra address: 004b5000 */
/* Ghidra symbol: FUN_004b5000 */


void FUN_004b5000(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  FUN_004c4890(param_2);
  iVar1 = (**(code **)(*param_1 + 0x28))();
  iVar2 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*param_1 + 0x18))(param_1,local_30,iVar2);
      FUN_004c81b0(param_2,local_30[0]);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_004c48a0(param_2);
  FUN_00414480(local_30);
  return;
}

