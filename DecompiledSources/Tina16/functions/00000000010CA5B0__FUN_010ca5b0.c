/* Ghidra address: 010ca5b0 */
/* Ghidra symbol: FUN_010ca5b0 */


undefined8 FUN_010ca5b0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_30[0] = 0;
  local_20[0] = 0;
  FUN_00414480(local_20);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 8);
  iVar1 = 0;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x18) + -4);
  }
  if (*(int *)(param_1 + 8) <= iVar1) {
    uVar2 = *(undefined2 *)
             (*(longlong *)(param_1 + 0x18) + -2 + (longlong)*(int *)(param_1 + 8) * 2);
    while( true ) {
      iVar1 = 0;
      if (*(longlong *)(param_1 + 0x18) != 0) {
        iVar1 = *(int *)(*(longlong *)(param_1 + 0x18) + -4);
      }
      if (iVar1 < *(int *)(param_1 + 8)) break;
      FUN_00416780(local_30,uVar2);
      FUN_00416ad0(local_20,local_30[0]);
      iVar1 = 0;
      if (*(longlong *)(param_1 + 0x18) != 0) {
        iVar1 = *(int *)(*(longlong *)(param_1 + 0x18) + -4);
      }
      if (*(int *)(param_1 + 8) < iVar1) {
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        uVar2 = *(undefined2 *)
                 (*(longlong *)(param_1 + 0x18) + -2 + (longlong)*(int *)(param_1 + 8) * 2);
      }
      else {
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      }
    }
  }
  FUN_0043ea00(param_2,local_20[0]);
  FUN_00414480(local_30);
  FUN_00414480(local_20);
  return param_2;
}

