/* Ghidra address: 0160ef50 */
/* Ghidra symbol: FUN_0160ef50 */


undefined1 FUN_0160ef50(longlong *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined1 local_29;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  local_28 = 0;
  local_29 = 0;
  *param_2 = 0;
  iVar1 = (**(code **)(*param_1 + 0x28))();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar3 = (**(code **)(*param_1 + 0x30))(param_1,iVar4);
      FUN_0043e1a0(&local_28,*(undefined8 *)(lVar3 + 0x30));
      FUN_00441a10(&local_20,local_28);
      iVar2 = FUN_00416db0(local_20,L".ino");
      if (iVar2 == 0) {
        local_29 = 1;
        *param_2 = iVar4;
        break;
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414560(&local_28,2);
  return local_29;
}

