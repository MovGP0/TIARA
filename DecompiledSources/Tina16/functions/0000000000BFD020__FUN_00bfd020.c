/* Ghidra address: 00bfd020 */
/* Ghidra symbol: FUN_00bfd020 */


void FUN_00bfd020(longlong *param_1)

{
  char cVar1;
  code *pcVar2;
  undefined8 uVar3;
  HWND pHVar4;
  HIMC pHVar5;
  int iVar6;
  int iVar7;
  tagCOMPOSITIONFORM local_64;
  undefined8 local_48;
  undefined8 local_40;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  if (*(int *)((longlong)param_1 + 0x514) == 0) {
    pcVar2 = (code *)FUN_00411550(param_1,0xffb0);
    cVar1 = (*pcVar2)(param_1);
    if ((cVar1 != '\0') || ((char)param_1[0x96] != '\0')) {
      *(ushort *)(param_1 + 199) = *(ushort *)(param_1 + 199) & 0xfffe;
      local_40 = FUN_00bfaa90(param_1);
      cVar1 = FUN_00c10e70(param_1);
      if ((cVar1 != '\0') && ((int)param_1[0x9a] + 1 < (int)local_40)) {
        local_40 = CONCAT44(local_40._4_4_,(int)param_1[0x9a] + 1);
      }
      uVar3 = FUN_00bf1a10(param_1,&local_40);
      local_48._0_4_ = (int)uVar3;
      iVar6 = (int)local_48 + *(int *)((longlong)param_1 + 0x5cc);
      local_48._4_4_ = (int)((ulonglong)uVar3 >> 0x20);
      iVar7 = local_48._4_4_ + (int)param_1[0xba];
      local_48 = uVar3;
      (**(code **)(*param_1 + 0xe0))(param_1,&local_38);
      local_38 = local_38 + (int)param_1[0x122];
      if ((((iVar6 < local_38) || (local_30 <= iVar6)) || (iVar7 < local_34)) || (local_2c <= iVar7)
         ) {
        thunk_FUN_041a6241(iVar6,iVar7);
        FUN_00bf3710(param_1);
      }
      else {
        thunk_FUN_041a6241(iVar6,iVar7);
        FUN_00bfcfd0(param_1);
      }
      local_64.dwStyle = 2;
      local_64.ptCurrentPos.y = iVar7;
      local_64.ptCurrentPos.x = iVar6;
      pHVar4 = (HWND)FUN_0065b870(param_1);
      pHVar5 = ImmGetContext(pHVar4);
      ImmSetCompositionWindow((HIMC)((ulonglong)pHVar5 & 0xffffffff),&local_64);
      return;
    }
  }
  *(ushort *)(param_1 + 199) = *(ushort *)(param_1 + 199) | 1;
  return;
}

