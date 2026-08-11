/* Ghidra address: 019c1af0 */
/* Ghidra symbol: FUN_019c1af0 */


undefined8 FUN_019c1af0(undefined8 param_1,undefined4 *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 local_58;
  undefined4 local_50 [2];
  undefined1 local_48;
  undefined4 local_40;
  undefined1 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_58 = 0;
  local_30[0] = 0;
  local_20 = 0;
  FUN_00414480(&local_20);
  lVar1 = 0;
  if (param_2 != (undefined4 *)0x0) {
    lVar1 = *(longlong *)(param_2 + -2);
  }
  if (0 < lVar1) {
    local_50[0] = *param_2;
    local_48 = 0;
    local_40 = param_2[1];
    local_38 = 0;
    FUN_00442f70(local_30,L"(%d,%d)",local_50,1);
    FUN_00416ad0(&local_20,local_30[0]);
    iVar3 = 0;
    if (param_2 != (undefined4 *)0x0) {
      iVar3 = (int)*(undefined8 *)(param_2 + -2);
    }
    iVar3 = iVar3 + -1;
    iVar2 = 1;
    if (0 < iVar3) {
      do {
        local_50[0] = param_2[(longlong)iVar2 * 2];
        local_48 = 0;
        local_40 = param_2[(longlong)iVar2 * 2 + 1];
        local_38 = 0;
        FUN_00442f70(&local_58,L"(%d,%d)",local_50,1);
        FUN_00416cd0(&local_20,3,local_20,L" -> ",local_58);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  FUN_00414ad0(param_1,local_20);
  FUN_00414480(&local_58);
  FUN_00414480(local_30);
  FUN_00414480(&local_20);
  return param_1;
}

