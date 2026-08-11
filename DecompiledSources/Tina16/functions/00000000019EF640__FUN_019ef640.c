/* Ghidra address: 019ef640 */
/* Ghidra symbol: FUN_019ef640 */


undefined1 FUN_019ef640(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 local_res10 [3];
  undefined1 local_31;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_31 = 1;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0xc0) + 0xb0))
                    (*(longlong **)(param_1 + 0xc0),local_res10[0]);
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x28))(*(longlong **)(param_1 + 0xc0));
  iVar1 = iVar1 + 1;
  if (iVar1 <= iVar2 + -1) {
    iVar2 = ((iVar2 + -1) - iVar1) + 1;
    do {
      (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x18))
                (*(longlong **)(param_1 + 0xc0),local_30,iVar1);
      iVar3 = FUN_0043e6d0(local_30[0],local_res10[0]);
      if (iVar3 == 0) {
        local_31 = 0;
        break;
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00414480(local_30);
  FUN_00414480(local_res10);
  return local_31;
}

