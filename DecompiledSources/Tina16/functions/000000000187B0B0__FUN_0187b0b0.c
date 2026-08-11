/* Ghidra address: 0187b0b0 */
/* Ghidra symbol: FUN_0187b0b0 */


undefined1 FUN_0187b0b0(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong local_res10 [3];
  undefined1 local_49;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  longlong local_28;
  longlong local_20 [2];
  
  local_28 = 0;
  local_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_49 = 0;
  if (local_res10[0] != 0) {
    iVar2 = FUN_018163f0(*(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x298),local_res10[0]);
    if (iVar2 == -1) {
      FUN_01970ff0(*(undefined8 *)(param_1 + 0x98),local_res10[0],local_20,&local_28);
      if ((local_20[0] != 0) && (local_28 != 0)) {
        local_49 = 1;
      }
    }
    else {
      lVar3 = FUN_018163e0(*(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x298),iVar2);
      FUN_00461840(&local_40,lVar3 + 0x28);
      cVar1 = FUN_0046c3d0(&local_40);
      if (cVar1 == '\0') {
        FUN_00467e90(local_res10,&local_40);
      }
      else {
        FUN_00414480(local_res10);
      }
      FUN_0187b4f0(param_1,local_res10[0]);
      local_49 = 1;
    }
  }
  FUN_00460ba0(&local_40);
  FUN_00414480(&local_28);
  FUN_00414480(local_res10);
  return local_49;
}

