/* Ghidra address: 015faf50 */
/* Ghidra symbol: FUN_015faf50 */


undefined2 FUN_015faf50(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined2 local_12;
  undefined8 local_10;
  
  local_10 = 0;
  *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) + 1;
  iVar2 = 0;
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    iVar2 = *(int *)(*(longlong *)(param_1 + 0xb0) + -4);
  }
  if (iVar2 < *(int *)(param_1 + 0xbc)) {
    FUN_00416ba0(&local_10,L"Syntax error in the S19 file: ",*(undefined8 *)(param_1 + 0xe0));
    uVar1 = FUN_0044d490(&PTR_FUN_004334c0,1,local_10);
    FUN_004134c0(uVar1);
  }
  else {
    local_12 = *(undefined2 *)
                (*(longlong *)(param_1 + 0xb0) + -2 + (longlong)*(int *)(param_1 + 0xbc) * 2);
  }
  FUN_00414480(&local_10);
  return local_12;
}

