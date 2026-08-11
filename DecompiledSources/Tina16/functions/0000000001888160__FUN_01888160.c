/* Ghidra address: 01888160 */
/* Ghidra symbol: FUN_01888160 */


void FUN_01888160(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong local_30 [2];
  
  local_30[0] = 0;
  FUN_018883e0(param_1);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x28))();
  iVar2 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0x28) + 0x18))
                (*(longlong **)(param_1 + 0x28),local_30,iVar2);
      *(undefined8 *)(local_30[0] + 0x38) = 0;
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x90))(*(longlong **)(param_1 + 0x28));
  FUN_018872f0(*(undefined8 *)(param_1 + 0x18));
  FUN_018872f0(*(undefined8 *)(param_1 + 0x20));
  FUN_01888940(param_1,1);
  FUN_01888970(param_1);
  FUN_00414480(local_30);
  return;
}

