/* Ghidra address: 01880090 */
/* Ghidra symbol: FUN_01880090 */


undefined1 FUN_01880090(longlong *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 local_29;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  local_29 = 0;
  (**(code **)(*param_1 + 0x30))(param_1);
  iVar1 = (**(code **)(*(longlong *)param_1[4] + 0x28))((longlong *)param_1[4]);
  if (0 < iVar1) {
    (**(code **)(*param_1 + 0x28))(param_1,local_20);
    iVar1 = (**(code **)(*(longlong *)param_1[4] + 0xb0))((longlong *)param_1[4],local_20[0]);
    iVar1 = iVar1 + 1;
    iVar2 = (**(code **)(*(longlong *)param_1[4] + 0x28))((longlong *)param_1[4]);
    if (iVar1 == iVar2) {
      iVar1 = 0;
    }
    (**(code **)(*(longlong *)param_1[4] + 0x18))((longlong *)param_1[4],&local_28,iVar1);
    (**(code **)(*param_1 + 0x38))(param_1,local_28);
    local_29 = 1;
  }
  FUN_00414560(&local_28,2);
  return local_29;
}

