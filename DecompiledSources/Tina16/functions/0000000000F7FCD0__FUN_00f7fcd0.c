/* Ghidra address: 00f7fcd0 */
/* Ghidra symbol: FUN_00f7fcd0 */


longlong FUN_00f7fcd0(longlong param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
                     int param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong local_1d8;
  undefined8 local_1d0 [2];
  longlong local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168 [35];
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_2c [4];
  
  local_1d0[0] = 0;
  local_38 = 0;
  local_40 = 0;
  local_168[0] = 0;
  local_170 = 0;
  local_178 = 0;
  local_180 = 0;
  local_188 = 0;
  local_190 = 0;
  local_198 = 0;
  local_1a0 = 0;
  local_1a8 = 0;
  local_1b0 = 0;
  local_1b8 = 0;
  bVar1 = false;
  iVar2 = (**(code **)(*param_3 + 0x28))();
  iVar4 = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(*param_4 + 0x18))(param_4,local_1d0,iVar4);
      FUN_0043fc00(local_1d0[0]);
      _Diag_GetCurveData(param_2,iVar4,&local_1c0,local_2c,local_44,local_48,local_4c,local_50);
      if (local_1c0 != 0) {
        (**(code **)(*param_3 + 0x18))(param_3,local_168,iVar4);
        FUN_01b21cd0(local_168[0],0x3a,&local_170,&local_178,&local_180,&local_188,&local_190,
                     &local_198);
        iVar3 = FUN_0043fc00(local_198);
        if (iVar3 == param_5) {
          FUN_015f44d0(&local_40,local_170);
          FUN_00414b50(&local_1b8,local_178);
          bVar1 = true;
          break;
        }
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (bVar1) {
    local_1d8 = FUN_00f81ad0(*(undefined8 *)(param_1 + 8),local_1b8);
    if (local_1d8 == 0) {
      local_1d8 = FUN_00f81c30(*(undefined8 *)(param_1 + 8),local_40,local_1b8);
      *(int *)(local_1d8 + 0x28) = param_5;
    }
  }
  else {
    local_1d8 = 0;
  }
  FUN_00414480(local_1d0);
  FUN_00414560(&local_1b8,0xb);
  FUN_00414560(&local_40,2);
  return local_1d8;
}

