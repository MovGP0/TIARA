/* Ghidra address: 0132c700 */
/* Ghidra symbol: FUN_0132c700 */


ushort * FUN_0132c700(ushort param_1)

{
  undefined8 uVar1;
  ushort *puVar2;
  longlong lVar3;
  undefined8 local_40;
  undefined8 local_38;
  uint local_30 [2];
  undefined1 local_28;
  undefined8 local_20 [2];
  
  local_40 = 0;
  local_38 = 0;
  local_20[0] = 0;
  if (param_1 == 0) {
    local_30[0] = 0;
    local_28 = 0;
    FUN_00442f70(local_20,L"vector length n must be positive integer",local_30,0);
    uVar1 = FUN_0044d490(&PTR_FUN_004355d0,1,local_20[0]);
    FUN_004134c0(uVar1);
  }
  puVar2 = (ushort *)FUN_00409570(0x20);
  if (puVar2 == (ushort *)0x0) {
    local_30[0] = (uint)param_1;
    local_28 = 0;
    FUN_00442f70(&local_38,L"failed to allocate space for vector struct",local_30,0);
    uVar1 = FUN_0044d490(&PTR_FUN_00434e60,1,local_38);
    FUN_004134c0(uVar1);
  }
  lVar3 = FUN_0132c150(param_1);
  if (lVar3 == 0) {
    FUN_004095f0(puVar2);
    local_30[0] = (uint)param_1;
    local_28 = 0;
    FUN_00442f70(&local_40,L"failed to allocate space for block",local_30,0);
    uVar1 = FUN_0044d490(&PTR_FUN_00434e60,1,local_40);
    lVar3 = FUN_004134c0(uVar1);
  }
  *(undefined8 *)(puVar2 + 4) = *(undefined8 *)(lVar3 + 8);
  *puVar2 = param_1;
  puVar2[1] = 1;
  *(longlong *)(puVar2 + 8) = lVar3;
  puVar2[0xc] = 1;
  puVar2[0xd] = 0;
  FUN_00414560(&local_40,2);
  FUN_00414480(local_20);
  return puVar2;
}

