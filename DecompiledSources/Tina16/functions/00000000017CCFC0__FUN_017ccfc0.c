/* Ghidra address: 017ccfc0 */
/* Ghidra symbol: FUN_017ccfc0 */


undefined1 FUN_017ccfc0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 local_res8 [4];
  undefined1 local_31;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  local_31 = 1;
  iVar1 = (**(code **)(*param_2 + 0xb0))(param_2,local_res8[0]);
  iVar2 = (**(code **)(*param_2 + 0x28))(param_2);
  iVar1 = iVar1 + 1;
  if (iVar1 <= iVar2 + -1) {
    iVar2 = ((iVar2 + -1) - iVar1) + 1;
    do {
      (**(code **)(*param_2 + 0x18))(param_2,local_30,iVar1);
      iVar3 = FUN_0043e6d0(local_30[0],local_res8[0]);
      if (iVar3 == 0) {
        local_31 = 0;
        break;
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00414480(local_30);
  FUN_00414480(local_res8);
  return local_31;
}

