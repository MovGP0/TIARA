/* Ghidra address: 0132e830 */
/* Ghidra symbol: FUN_0132e830 */


undefined4 FUN_0132e830(short *param_1,short *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  undefined8 uVar5;
  short sVar6;
  ushort uVar7;
  ulonglong uVar8;
  undefined4 local_58;
  ushort local_52;
  uint local_50 [2];
  undefined1 local_48;
  undefined8 local_40 [2];
  
  local_40[0] = 0;
  sVar6 = *param_1;
  uVar1 = param_1[1];
  if ((*param_2 == sVar6) && (param_2[1] == uVar1)) {
    uVar2 = param_1[2];
    uVar3 = param_2[2];
    local_52 = 0;
    do {
      uVar4 = 0;
      uVar7 = uVar1;
      do {
        uVar8 = (ulonglong)((uint)local_52 * (uint)uVar2 + (uint)uVar4);
        *(double *)(*(longlong *)(param_1 + 4) + uVar8 * 8) =
             *(double *)(*(longlong *)(param_1 + 4) + uVar8 * 8) +
             *(double *)
              (*(longlong *)(param_2 + 4) +
              (ulonglong)((uint)local_52 * (uint)uVar3 + (uint)uVar4) * 8);
        uVar4 = uVar4 + 1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
      local_52 = local_52 + 1;
      sVar6 = sVar6 + -1;
    } while (sVar6 != 0);
    local_58 = 0;
  }
  else {
    local_50[0] = (uint)uVar1;
    local_48 = 0;
    FUN_00442f70(local_40,L"matrices must have same length",local_50,0);
    uVar5 = FUN_0044d490(&PTR_FUN_004355d0,1,local_40[0]);
    FUN_004134c0(uVar5);
  }
  FUN_00414480(local_40);
  return local_58;
}

