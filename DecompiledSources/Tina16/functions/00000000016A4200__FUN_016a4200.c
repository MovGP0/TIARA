/* Ghidra address: 016a4200 */
/* Ghidra symbol: FUN_016a4200 */


double FUN_016a4200(byte *param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  byte bVar5;
  ulonglong uVar6;
  byte *pbVar7;
  double local_260;
  undefined1 local_258 [8];
  undefined8 local_250;
  undefined8 local_248;
  undefined4 local_240 [5];
  int local_22c;
  undefined1 local_228 [256];
  byte local_128 [264];
  
  local_248 = 0;
  local_250 = 0;
  lVar4 = (ulonglong)*param_1 + 1;
  pbVar7 = local_128;
  for (; lVar4 != 0; lVar4 = lVar4 + -1) {
    *pbVar7 = *param_1;
    param_1 = param_1 + 1;
    pbVar7 = pbVar7 + 1;
  }
  local_260 = 0.0;
  bVar5 = local_128[0];
  while ((bVar5 != 0 &&
         ((byte)(local_128[bVar5] - 0x40) < 0x20 &&
          (1 << (local_128[bVar5] - 0x40 & 0x1f) & 0x7fffffeU) != 0))) {
    bVar5 = bVar5 - 1;
  }
  if ((bVar5 == 0) || (local_128[0] < bVar5)) {
    if (param_2 == 0) {
      uVar3 = FUN_0044d490(&PTR_FUN_00436080,1,L"not a number");
      FUN_004134c0(uVar3);
    }
    else {
      local_258[0] = 0;
      FUN_016a4020(param_2,0x21,local_258,0xffffffff);
    }
  }
  else {
    FUN_004151b0(local_228,local_128,bVar5 + 1,(uint)local_128[0] - (uint)bVar5);
    FUN_00415260(local_128,0xff,bVar5 + 1,(uint)local_128[0] - (uint)bVar5);
    for (bVar5 = 1; bVar5 < 0xb; bVar5 = bVar5 + 1) {
      local_240[0] = *(PEx64_UnwindInfo *)((longlong)&UNWIND_INFO_01f90c70 + (ulonglong)bVar5 * 4);
      iVar1 = FUN_00416fd0(local_240,local_128,1);
      if (iVar1 != 0) break;
    }
    if (bVar5 < 0xb) {
      uVar6 = (ulonglong)bVar5;
      local_240[0] = *(PEx64_UnwindInfo *)((longlong)&UNWIND_INFO_01f90c70 + uVar6 * 4);
      uVar2 = FUN_00416fd0(local_240,local_128,1);
      FUN_004151b0(local_228,local_128,uVar2,
                   *(undefined1 *)((longlong)&UNWIND_INFO_01f90c70 + uVar6 * 4));
      local_240[0] = *(PEx64_UnwindInfo *)((longlong)&UNWIND_INFO_01f90c70 + uVar6 * 4);
      uVar2 = FUN_00416fd0(local_240,local_128,1);
      FUN_00415260(local_128,0xff,uVar2,*(undefined1 *)((longlong)&UNWIND_INFO_01f90c70 + uVar6 * 4)
                  );
    }
    FUN_004154b0(&local_248,local_128,0);
    FUN_00416880(&local_250,local_248);
    local_260 = (double)FUN_00410100(local_250,&local_22c);
    if (local_22c != 0) {
      if (param_2 == 0) {
        uVar3 = FUN_0044d490(&PTR_FUN_00436080,1,L"not a number");
        FUN_004134c0(uVar3);
      }
      else {
        FUN_016a4020(param_2,0xe,local_128,0xffffffff);
      }
    }
    if (bVar5 >= 0xb) {
      for (bVar5 = 1; bVar5 < 0xb; bVar5 = bVar5 + 1) {
        local_240[0] = *(PEx64_UnwindInfo *)((longlong)&UNWIND_INFO_01f90c70 + (ulonglong)bVar5 * 4)
        ;
        iVar1 = FUN_00416fd0(local_240,local_228,1);
        if (iVar1 == 1) break;
      }
    }
    if (bVar5 < 0xb) {
      local_260 = local_260 * *(double *)(&DAT_01f90c98 + (ulonglong)bVar5 * 8);
    }
  }
  FUN_00414480(&local_250);
  FUN_004144d0(&local_248);
  return local_260;
}

