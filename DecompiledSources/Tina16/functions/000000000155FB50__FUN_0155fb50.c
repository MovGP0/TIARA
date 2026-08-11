/* Ghidra address: 0155fb50 */
/* Ghidra symbol: FUN_0155fb50 */


void FUN_0155fb50(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  iVar1 = (**(code **)(*param_2 + 0x28))();
  iVar2 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*param_2 + 0x18))(param_2,local_30,iVar2);
      (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))
                (*(longlong **)(param_1 + 0x8f8),local_30[0]);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414480(local_30);
  return;
}

