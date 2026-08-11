/* Ghidra address: 0132ea10 */
/* Ghidra symbol: FUN_0132ea10 */


longlong FUN_0132ea10(short *param_1,short *param_2,longlong *param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 uVar4;
  ushort uVar5;
  ulonglong uVar6;
  short sVar7;
  ushort local_62;
  longlong local_60;
  ushort local_52;
  uint local_50 [2];
  undefined1 local_48;
  undefined8 local_40 [2];
  
  local_40[0] = 0;
  sVar7 = *param_1;
  uVar1 = param_1[1];
  if ((((*param_2 == sVar7) && (param_2[1] == uVar1)) && (*(short *)*param_3 == sVar7)) &&
     (*(ushort *)(*param_3 + 2) == uVar1)) {
    uVar2 = param_1[2];
    uVar3 = param_2[2];
    local_62 = 0;
    do {
      local_52 = 0;
      uVar5 = uVar1;
      do {
        uVar6 = (ulonglong)((uint)local_62 * (uint)uVar2 + (uint)local_52);
        *(double *)(*(longlong *)(*param_3 + 8) + uVar6 * 8) =
             *(double *)(*(longlong *)(param_1 + 4) + uVar6 * 8) -
             *(double *)
              (*(longlong *)(param_2 + 4) +
              (ulonglong)((uint)local_62 * (uint)uVar3 + (uint)local_52) * 8);
        local_52 = local_52 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      local_62 = local_62 + 1;
      sVar7 = sVar7 + -1;
    } while (sVar7 != 0);
    local_60 = *param_3;
  }
  else {
    local_50[0] = (uint)uVar1;
    local_48 = 0;
    FUN_00442f70(local_40,L"matrices must have same length",local_50,0);
    uVar4 = FUN_0044d490(&PTR_FUN_004355d0,1,local_40[0]);
    FUN_004134c0(uVar4);
  }
  FUN_00414480(local_40);
  return local_60;
}

