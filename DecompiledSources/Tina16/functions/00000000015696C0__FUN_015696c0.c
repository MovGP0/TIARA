/* Ghidra address: 015696c0 */
/* Ghidra symbol: FUN_015696c0 */


undefined1 FUN_015696c0(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 local_49;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  
  local_40[0] = 0;
  local_48 = 0;
  local_30[0] = 0;
  local_49 = 0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x28))();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0x30) + 0x18))
                (*(longlong **)(param_1 + 0x30),local_30,iVar3);
      FUN_00416ba0(&local_48,&LAB_015697e8,local_30[0]);
      FUN_0043e1a0(local_40,local_48);
      iVar2 = (**(code **)(**(longlong **)(param_1 + 0x910) + 0xb0))
                        (*(longlong **)(param_1 + 0x910),local_40[0]);
      if (iVar2 != -1) {
        local_49 = 1;
        break;
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414560(&local_48,2);
  FUN_00414480(local_30);
  return local_49;
}

