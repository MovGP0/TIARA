/* Ghidra address: 01706390 */
/* Ghidra symbol: FUN_01706390 */


void FUN_01706390(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  longlong local_30 [2];
  
  local_30[0] = 0;
  *(undefined4 *)(param_1 + 0x6ec) = 0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x708) + 0x28))();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0x708) + 0x18))
                (*(longlong **)(param_1 + 0x708),local_30,iVar4);
      iVar2 = 0;
      if (local_30[0] != 0) {
        iVar2 = *(int *)(local_30[0] + -4);
      }
      if (*(int *)(param_1 + 0x6ec) < iVar2) {
        uVar3 = 0;
        if (local_30[0] != 0) {
          uVar3 = *(undefined4 *)(local_30[0] + -4);
        }
        *(undefined4 *)(param_1 + 0x6ec) = uVar3;
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414480(local_30);
  return;
}

