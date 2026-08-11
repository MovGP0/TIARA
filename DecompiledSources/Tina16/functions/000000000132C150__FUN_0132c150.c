/* Ghidra address: 0132c150 */
/* Ghidra symbol: FUN_0132c150 */


ushort * FUN_0132c150(ushort param_1)

{
  undefined8 uVar1;
  ushort *puVar2;
  longlong lVar3;
  undefined8 local_40;
  undefined8 local_38;
  uint local_30 [2];
  undefined1 local_28;
  undefined8 local_20;
  
  local_40 = 0;
  local_38 = 0;
  local_20 = 0;
  if (param_1 == 0) {
    local_30[0] = 0;
    local_28 = 0;
    FUN_00442f70(&local_20,L"block length n must be positive integer",local_30,0);
    uVar1 = FUN_0044d490(&PTR_FUN_004355d0,1,local_20);
    FUN_004134c0(uVar1);
  }
  puVar2 = (ushort *)FUN_00409570(0x10);
  if (puVar2 == (ushort *)0x0) {
    local_30[0] = (uint)param_1;
    local_28 = 0;
    FUN_00442f70(&local_38,L"failed to allocate space for block struct",local_30,0);
    uVar1 = FUN_0044d490(&PTR_FUN_00434e60,1,local_38);
    FUN_004134c0(uVar1);
  }
  lVar3 = FUN_00409570((ulonglong)param_1 << 3);
  *(longlong *)(puVar2 + 4) = lVar3;
  if (lVar3 == 0) {
    FUN_004095f0(puVar2);
    local_30[0] = (uint)param_1;
    local_28 = 0;
    FUN_00442f70(&local_40,L"failed to allocate space for block data",local_30,0);
    uVar1 = FUN_0044d490(&PTR_FUN_00434e60,1,local_40);
    FUN_004134c0(uVar1);
  }
  *puVar2 = param_1;
  FUN_00414560(&local_40,2);
  FUN_00414480(&local_20);
  return puVar2;
}

