/* Ghidra address: 01629a40 */
/* Ghidra symbol: FUN_01629a40 */


void FUN_01629a40(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_38 = 0;
  local_30[0] = 0;
  iVar1 = (**(code **)(*param_2 + 0x28))();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*param_2 + 0x18))(param_2,local_30,iVar3);
      iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb0))
                        (*(longlong **)(param_1 + 8),local_30[0]);
      if (iVar2 == -1) {
        (**(code **)(*param_2 + 0x18))(param_2,&local_38,iVar3);
        (**(code **)(**(longlong **)(param_1 + 8) + 0x78))(*(longlong **)(param_1 + 8),local_38);
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414560(&local_38,2);
  return;
}

