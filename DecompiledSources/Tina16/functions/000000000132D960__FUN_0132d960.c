/* Ghidra address: 0132d960 */
/* Ghidra symbol: FUN_0132d960 */


undefined4 FUN_0132d960(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  undefined8 uVar5;
  ushort uVar6;
  undefined4 local_44;
  uint local_40 [2];
  undefined1 local_38;
  undefined8 local_30;
  
  local_30 = 0;
  if ((param_1 == (ushort *)0x0) || (param_2 == (ushort *)0x0)) {
    local_44 = 0xffffffff;
  }
  else {
    uVar3 = *param_2;
    if (uVar3 != *param_1) {
      local_40[0] = (uint)uVar3;
      local_38 = 0;
      FUN_00442f70(&local_30,L"vector lengths are not equal",local_40,0);
      uVar5 = FUN_0044d490(&PTR_FUN_004355d0,1,local_30);
      uVar3 = FUN_004134c0(uVar5);
    }
    uVar1 = param_2[1];
    uVar2 = param_1[1];
    uVar4 = 0;
    do {
      uVar6 = 0;
      do {
        *(undefined8 *)
         (*(longlong *)(param_1 + 4) + (ulonglong)((uint)uVar2 * (uint)uVar4 + (uint)uVar6) * 8) =
             *(undefined8 *)
              (*(longlong *)(param_2 + 4) + (ulonglong)((uint)uVar1 * (uint)uVar4 + (uint)uVar6) * 8
              );
        uVar6 = uVar6 + 1;
      } while (uVar6 != 1);
      uVar4 = uVar4 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
    local_44 = 0;
  }
  FUN_00414480(&local_30);
  return local_44;
}

