/* Ghidra address: 0132d530 */
/* Ghidra symbol: FUN_0132d530 */


longlong FUN_0132d530(longlong param_1,ushort *param_2,ushort *param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 uVar4;
  ushort uVar5;
  ushort local_52;
  uint local_50 [2];
  undefined1 local_48;
  undefined8 local_40 [2];
  
  local_40[0] = 0;
  uVar5 = *param_2;
  uVar1 = param_2[1];
  uVar2 = param_3[1];
  uVar3 = *(ushort *)(param_1 + 2);
  if (*param_3 == uVar5) {
    local_52 = 0;
    do {
      uVar4 = FUN_00b90620(*(undefined8 *)
                            (*(longlong *)(param_2 + 4) +
                            (ulonglong)((uint)local_52 * (uint)uVar1) * 8),
                           *(undefined8 *)
                            (*(longlong *)(param_3 + 4) +
                            (ulonglong)((uint)local_52 * (uint)uVar2) * 8));
      *(undefined8 *)(*(longlong *)(param_1 + 8) + (ulonglong)((uint)local_52 * (uint)uVar3) * 8) =
           uVar4;
      local_52 = local_52 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  else {
    local_50[0] = (uint)uVar5;
    local_48 = 0;
    FUN_00442f70(local_40,L"vectors must have same length",local_50,0);
    uVar4 = FUN_0044d490(&PTR_FUN_004355d0,1,local_40[0]);
    FUN_004134c0(uVar4);
  }
  FUN_00414480(local_40);
  return param_1;
}

