/* Ghidra address: 0132c9c0 */
/* Ghidra symbol: FUN_0132c9c0 */


longlong FUN_0132c9c0(longlong *param_1,ushort param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong local_38;
  undefined8 local_30;
  undefined8 local_28;
  uint local_20 [2];
  undefined1 local_18;
  undefined8 local_10;
  
  local_30 = 0;
  local_28 = 0;
  local_10 = 0;
  if (param_2 == 0) {
    local_20[0] = 0;
    local_18 = 0;
    FUN_00442f70(&local_10,L"vector length n must be positive integer",local_20,0);
    uVar1 = FUN_0044d490(&PTR_FUN_004355d0,1,local_10);
    FUN_004134c0(uVar1);
  }
  if (*param_1 == 0) {
    lVar2 = FUN_0132c700(param_2);
    *param_1 = lVar2;
    local_38 = *param_1;
  }
  else {
    lVar2 = FUN_0132c400(*param_1 + 0x10,param_2);
    *(longlong *)(*param_1 + 0x10) = lVar2;
    if (lVar2 == 0) {
      FUN_004095f0(*param_1);
      *param_1 = 0;
      local_20[0] = (uint)param_2;
      local_18 = 0;
      FUN_00442f70(&local_30,L"failed to allocate space for block",local_20,0);
      uVar1 = FUN_0044d490(&PTR_FUN_00434e60,1,local_30);
      FUN_004134c0(uVar1);
    }
    *(undefined8 *)(*param_1 + 8) = *(undefined8 *)(*(longlong *)(*param_1 + 0x10) + 8);
    *(ushort *)*param_1 = param_2;
    *(undefined2 *)(*param_1 + 2) = 1;
    *(undefined4 *)(*param_1 + 0x18) = 1;
    local_38 = *param_1;
  }
  FUN_00414560(&local_30,2);
  FUN_00414480(&local_10);
  return local_38;
}

