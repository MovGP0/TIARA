/* Ghidra address: 0132c400 */
/* Ghidra symbol: FUN_0132c400 */


longlong FUN_0132c400(longlong *param_1,ushort param_2)

{
  longlong lVar1;
  undefined8 uVar2;
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
    FUN_00442f70(&local_10,L"block length n must be positive integer",local_20,0);
    uVar2 = FUN_0044d490(&PTR_FUN_004355d0,1,local_10);
    FUN_004134c0(uVar2);
  }
  if (*param_1 == 0) {
    local_20[0] = (uint)param_2;
    local_18 = 0;
    FUN_00442f70(&local_28,L"failed to allocate space for block struct",local_20,0);
    uVar2 = FUN_0044d490(&PTR_FUN_00434e60,1,local_28);
    FUN_004134c0(uVar2);
  }
  FUN_00409620(*param_1 + 8,(ulonglong)param_2 << 3);
  if (*(longlong *)(*param_1 + 8) == 0) {
    FUN_004095f0(*param_1);
    *param_1 = 0;
    local_20[0] = (uint)param_2;
    local_18 = 0;
    FUN_00442f70(&local_30,L"failed to allocate space for block data",local_20,0);
    uVar2 = FUN_0044d490(&PTR_FUN_00434e60,1,local_30);
    FUN_004134c0(uVar2);
  }
  *(ushort *)*param_1 = param_2;
  lVar1 = *param_1;
  FUN_00414560(&local_30,2);
  FUN_00414480(&local_10);
  return lVar1;
}

