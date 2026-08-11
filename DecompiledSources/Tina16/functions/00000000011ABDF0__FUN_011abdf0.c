/* Ghidra address: 011abdf0 */
/* Ghidra symbol: FUN_011abdf0 */


void FUN_011abdf0(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined4 *puVar5;
  int iVar6;
  int local_58;
  int local_54;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40 [2];
  
  local_50 = 0;
  local_40[0] = 0;
  local_48 = 0;
  local_58 = 0;
  if (-1 < *(int *)(*(longlong *)PTR_DAT_02003af0 + 0x764)) {
    iVar2 = *(int *)(*(longlong *)PTR_DAT_02003af0 + 0x764) + 1;
    do {
      if (local_58 < *(int *)(*(longlong *)PTR_DAT_02003af0 + 0x764)) {
        FUN_0084e3e0(*(undefined8 *)(param_1 + 0x700),local_58,0,
                     (&PTR_DAT_01f2a648)
                     [8 - (*(int *)(*(longlong *)PTR_DAT_02003af0 + 0x764) - local_58)]);
      }
      else {
        FUN_0084e3e0(*(undefined8 *)(param_1 + 0x700),local_58,0,*(undefined8 *)PTR_DAT_02002860);
      }
      local_58 = local_58 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00526500(0x4000000000000000,(double)*(int *)(*(longlong *)PTR_DAT_02003af0 + 0x764));
  iVar2 = FUN_0040c770();
  local_58 = 0;
  if (-1 < iVar2 + -1) {
    puVar5 = &DAT_02107244;
    do {
      iVar6 = *(int *)(*(longlong *)PTR_DAT_02003af0 + 0x764);
      local_54 = 0;
      if (-1 < iVar6 + -1) {
        ppuVar4 = &PTR_LAB_01f2a688;
        iVar3 = local_58;
        do {
          FUN_00526500(0x4000000000000000,
                       (double)((*(int *)(*(longlong *)PTR_DAT_02003af0 + 0x764) - local_54) + -1));
          iVar1 = FUN_0040c770();
          if (iVar3 / iVar1 < 1) {
            FUN_00414ad0(ppuVar4,&LAB_011ac138);
          }
          else {
            iVar3 = iVar3 - iVar1;
            FUN_00414ad0(ppuVar4,&DAT_011ac128);
          }
          local_54 = local_54 + 1;
          ppuVar4 = ppuVar4 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      iVar6 = *(int *)(*(longlong *)PTR_DAT_02003af0 + 0x764);
      local_54 = 0;
      if (-1 < iVar6 + -1) {
        ppuVar4 = &PTR_LAB_01f2a688;
        do {
          FUN_0084e3e0(*(undefined8 *)(param_1 + 0x700),local_54,local_58 + 1,*ppuVar4);
          local_54 = local_54 + 1;
          ppuVar4 = ppuVar4 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      if (*(char *)(*(longlong *)PTR_DAT_02003af0 + 0x5fe8) == '\0') {
LAB_011ac07c:
        FUN_0043f750(&local_50,*puVar5);
        FUN_0084e3e0(*(undefined8 *)(param_1 + 0x700),
                     *(undefined4 *)(*(longlong *)PTR_DAT_02003af0 + 0x764),local_58 + 1,local_50);
      }
      else {
        FUN_0084e320(*(undefined8 *)(param_1 + 0x700),&local_48,
                     *(undefined4 *)(*(longlong *)PTR_DAT_02003af0 + 0x764),local_58 + 1);
        FUN_0043ea00(local_40,local_48);
        if (local_40[0] == 0) goto LAB_011ac07c;
      }
      local_58 = local_58 + 1;
      puVar5 = puVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00414560(&local_50,3);
  return;
}

