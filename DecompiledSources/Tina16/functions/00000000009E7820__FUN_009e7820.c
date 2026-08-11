/* Ghidra address: 009e7820 */
/* Ghidra symbol: FUN_009e7820 */


undefined1 FUN_009e7820(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 local_39;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  local_38 = 0;
  local_39 = 0;
  iVar1 = (**(code **)(*param_1 + 0x28))(param_1);
  iVar2 = (**(code **)(*param_2 + 0x28))(param_2);
  if (iVar1 == iVar2) {
    iVar2 = 0;
    if (-1 < iVar1 + -1) {
      do {
        (**(code **)(*param_1 + 0x18))(param_1,local_30,iVar2);
        (**(code **)(*param_2 + 0x18))(param_2,&local_38,iVar2);
        iVar3 = FUN_00416420(local_30[0],local_38);
        if (iVar3 != 0) goto LAB_009e78c7;
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    local_39 = 1;
  }
LAB_009e78c7:
  FUN_004145c0(&local_38,2);
  return local_39;
}

