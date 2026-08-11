/* Ghidra address: 010ca410 */
/* Ghidra symbol: FUN_010ca410 */


undefined8 FUN_010ca410(longlong param_1,undefined8 param_2,short param_3)

{
  bool bVar1;
  int iVar2;
  short sVar3;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_38 = 0;
  local_30[0] = 0;
  local_20[0] = 0;
  FUN_00414480(local_20);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 8);
  iVar2 = 0;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x18) + -4);
  }
  if (*(int *)(param_1 + 8) <= iVar2) {
    sVar3 = *(short *)(*(longlong *)(param_1 + 0x18) + -2 + (longlong)*(int *)(param_1 + 8) * 2);
LAB_010ca4df:
    if (sVar3 == 0x20) {
LAB_010ca52c:
      bVar1 = false;
    }
    else {
      FUN_00416780(&local_38,sVar3);
      iVar2 = FUN_00416db0(local_38,&LAB_010ca5a8);
      if ((iVar2 == 0) || (sVar3 == param_3)) goto LAB_010ca52c;
      iVar2 = 0;
      if (*(longlong *)(param_1 + 0x18) != 0) {
        iVar2 = *(int *)(*(longlong *)(param_1 + 0x18) + -4);
      }
      bVar1 = *(int *)(param_1 + 8) <= iVar2;
    }
    if (bVar1) {
      FUN_00416780(local_30,sVar3);
      FUN_00416ad0(local_20,local_30[0]);
      iVar2 = 0;
      if (*(longlong *)(param_1 + 0x18) != 0) {
        iVar2 = *(int *)(*(longlong *)(param_1 + 0x18) + -4);
      }
      if (*(int *)(param_1 + 8) < iVar2) {
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        sVar3 = *(short *)(*(longlong *)(param_1 + 0x18) + -2 + (longlong)*(int *)(param_1 + 8) * 2)
        ;
      }
      else {
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      }
      goto LAB_010ca4df;
    }
  }
  FUN_0043ea00(param_2,local_20[0]);
  FUN_00414560(&local_38,2);
  FUN_00414480(local_20);
  return param_2;
}

