/* Ghidra address: 0132cd70 */
/* Ghidra symbol: FUN_0132cd70 */


longlong FUN_0132cd70(longlong param_1,ushort *param_2,ushort *param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  undefined8 uVar5;
  ushort uVar6;
  longlong local_58;
  uint local_50 [2];
  undefined1 local_48;
  undefined8 local_40 [2];
  
  local_40[0] = 0;
  uVar6 = *param_2;
  if (*param_3 == uVar6) {
    uVar1 = param_2[1];
    uVar2 = param_3[1];
    uVar3 = *(ushort *)(param_1 + 2);
    uVar4 = 0;
    do {
      *(double *)(*(longlong *)(param_1 + 8) + (ulonglong)((uint)uVar4 * (uint)uVar3) * 8) =
           *(double *)(*(longlong *)(param_2 + 4) + (ulonglong)((uint)uVar4 * (uint)uVar1) * 8) +
           *(double *)(*(longlong *)(param_3 + 4) + (ulonglong)((uint)uVar4 * (uint)uVar2) * 8);
      uVar4 = uVar4 + 1;
      uVar6 = uVar6 - 1;
      local_58 = param_1;
    } while (uVar6 != 0);
  }
  else {
    local_50[0] = (uint)uVar6;
    local_48 = 0;
    FUN_00442f70(local_40,L"vectors must have same length",local_50,0);
    uVar5 = FUN_0044d490(&PTR_FUN_004355d0,1,local_40[0]);
    FUN_004134c0(uVar5);
  }
  FUN_00414480(local_40);
  return local_58;
}

