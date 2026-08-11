/* Ghidra address: 010c9ef0 */
/* Ghidra symbol: FUN_010c9ef0 */


undefined8 FUN_010c9ef0(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  short sVar3;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_30[0] = 0;
  local_20[0] = 0;
  FUN_00414480();
  iVar2 = 0;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x18) + -4);
  }
  if (*(int *)(param_1 + 8) <= iVar2) {
    sVar3 = *(short *)(*(longlong *)(param_1 + 0x18) + -2 + (longlong)*(int *)(param_1 + 8) * 2);
    while( true ) {
      if (sVar3 == 0x5d) {
        bVar1 = false;
      }
      else {
        iVar2 = 0;
        if (*(longlong *)(param_1 + 0x18) != 0) {
          iVar2 = *(int *)(*(longlong *)(param_1 + 0x18) + -4);
        }
        bVar1 = *(int *)(param_1 + 8) <= iVar2;
      }
      if (!bVar1) break;
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
    }
  }
  FUN_00414ad0(param_2,local_20[0]);
  FUN_00414480(local_30);
  FUN_00414480(local_20);
  return param_2;
}

