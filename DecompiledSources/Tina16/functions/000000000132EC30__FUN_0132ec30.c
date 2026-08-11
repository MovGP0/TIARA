/* Ghidra address: 0132ec30 */
/* Ghidra symbol: FUN_0132ec30 */


undefined8 FUN_0132ec30(ushort *param_1,ushort param_2,ushort param_3)

{
  undefined8 uVar1;
  undefined8 local_28;
  uint local_20 [2];
  undefined1 local_18;
  undefined8 local_10;
  
  local_28 = 0;
  local_10 = 0;
  if (param_2 < *param_1) {
    if (param_1[1] <= param_3) {
      local_20[0] = (uint)param_3;
      local_18 = 0;
      FUN_00442f70(&local_28,L"second index out of range",local_20,0);
      uVar1 = FUN_0044d490(&PTR_FUN_004355d0,1,local_28);
      FUN_004134c0(uVar1);
    }
  }
  else {
    local_20[0] = (uint)param_2;
    local_18 = 0;
    FUN_00442f70(&local_10,L"first index out of range",local_20,0);
    uVar1 = FUN_0044d490(&PTR_FUN_004355d0,1,local_10);
    FUN_004134c0(uVar1);
  }
  uVar1 = *(undefined8 *)
           (*(longlong *)(param_1 + 4) +
           (ulonglong)((uint)param_2 * (uint)param_1[2] + (uint)param_3) * 8);
  FUN_00414480(&local_28);
  FUN_00414480(&local_10);
  return uVar1;
}

