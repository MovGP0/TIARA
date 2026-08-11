/* Ghidra address: 00a689e0 */
/* Ghidra symbol: FUN_00a689e0 */


void FUN_00a689e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x28))();
  iVar2 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0x38) + 0x18))
                (*(longlong **)(param_1 + 0x38),local_30,iVar2);
      FUN_00a5cdc0(*(undefined8 *)(param_1 + 0x40),local_30[0],param_2,param_3,param_4);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414480(local_30);
  return;
}

