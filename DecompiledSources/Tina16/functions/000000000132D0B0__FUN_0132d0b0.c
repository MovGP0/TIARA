/* Ghidra address: 0132d0b0 */
/* Ghidra symbol: FUN_0132d0b0 */


undefined4 FUN_0132d0b0(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ushort uVar6;
  undefined4 local_34;
  uint local_30 [2];
  undefined1 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  uVar6 = *param_1;
  if (*param_2 == uVar6) {
    uVar1 = param_1[1];
    uVar2 = param_2[1];
    uVar3 = 0;
    do {
      uVar5 = (ulonglong)((uint)uVar3 * (uint)uVar1);
      *(double *)(*(longlong *)(param_1 + 4) + uVar5 * 8) =
           *(double *)(*(longlong *)(param_1 + 4) + uVar5 * 8) *
           *(double *)(*(longlong *)(param_2 + 4) + (ulonglong)((uint)uVar3 * (uint)uVar2) * 8);
      uVar3 = uVar3 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    local_34 = 0;
  }
  else {
    local_30[0] = (uint)uVar6;
    local_28 = 0;
    FUN_00442f70(&local_20,L"vectors must have same length",local_30,0);
    uVar4 = FUN_0044d490(&PTR_FUN_004355d0,1,local_20);
    FUN_004134c0(uVar4);
  }
  FUN_00414480(&local_20);
  return local_34;
}

