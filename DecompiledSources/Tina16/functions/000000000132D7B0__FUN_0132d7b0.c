/* Ghidra address: 0132d7b0 */
/* Ghidra symbol: FUN_0132d7b0 */


ushort * FUN_0132d7b0(ushort *param_1,ushort *param_2,double param_3)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 uVar3;
  ushort uVar4;
  uint local_20 [2];
  undefined1 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  uVar4 = *param_2;
  uVar1 = param_2[1];
  if (*param_1 == uVar4) {
    uVar2 = 0;
    do {
      *(double *)(*(longlong *)(param_1 + 4) + (ulonglong)((uint)uVar2 * (uint)uVar1) * 8) =
           *(double *)(*(longlong *)(param_2 + 4) + (ulonglong)((uint)uVar2 * (uint)uVar1) * 8) *
           param_3;
      uVar2 = uVar2 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  else {
    local_20[0] = (uint)uVar4;
    local_18 = 0;
    FUN_00442f70(&local_10,L"vectors must have same length",local_20,0);
    uVar3 = FUN_0044d490(&PTR_FUN_004355d0,1,local_10);
    FUN_004134c0(uVar3);
  }
  FUN_00414480(&local_10);
  return param_1;
}

