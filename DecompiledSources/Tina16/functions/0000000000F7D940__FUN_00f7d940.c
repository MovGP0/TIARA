/* Ghidra address: 00f7d940 */
/* Ghidra symbol: FUN_00f7d940 */


void FUN_00f7d940(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  local_38 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0x90))(*(longlong **)(param_1 + 0x30));
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x28))();
  iVar3 = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0x28) + 0x18))
                (*(longlong **)(param_1 + 0x28),local_30,iVar3);
      cVar1 = FUN_00f7d750(param_1,local_30[0],&local_38);
      if (cVar1 != '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x30) + 0x78))
                  (*(longlong **)(param_1 + 0x30),local_38);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00414560(&local_38,2);
  return;
}

