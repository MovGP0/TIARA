/* Ghidra address: 01b24380 */
/* Ghidra symbol: FUN_01b24380 */


undefined1 FUN_01b24380(longlong *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 local_31;
  longlong local_30 [2];
  
  local_30[0] = 0;
  local_31 = 1;
  iVar1 = (**(code **)(*param_1 + 0x28))();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*param_1 + 0x18))(param_1,local_30,iVar3);
      iVar2 = 0;
      if (local_30[0] != 0) {
        iVar2 = *(int *)(local_30[0] + -4);
      }
      if (0xff < iVar2) {
        local_31 = 0;
        break;
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414480(local_30);
  return local_31;
}

