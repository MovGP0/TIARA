/* Ghidra address: 00ee6d10 */
/* Ghidra symbol: FUN_00ee6d10 */


undefined1 FUN_00ee6d10(longlong *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  longlong local_res10 [3];
  undefined1 local_31;
  longlong local_30;
  
  local_30 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar3 = 0;
  local_31 = 1;
  iVar1 = (**(code **)(*param_1 + 0x1c8))();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*param_1 + 0x298))(param_1,&local_30,iVar4);
      if (local_30 == local_res10[0]) {
        bVar5 = true;
      }
      else if ((local_30 == 0) || (local_res10[0] == 0)) {
        bVar5 = false;
      }
      else {
        iVar2 = FUN_0043e420(local_30,local_res10[0]);
        bVar5 = iVar2 == 0;
      }
      if (bVar5) {
        iVar3 = iVar3 + 1;
      }
      if (1 < iVar3) {
        local_31 = 0;
        break;
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414480(&local_30);
  FUN_00414480(local_res10);
  return local_31;
}

