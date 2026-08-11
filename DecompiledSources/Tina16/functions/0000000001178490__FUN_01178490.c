/* Ghidra address: 01178490 */
/* Ghidra symbol: FUN_01178490 */


void FUN_01178490(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  double *pdVar5;
  double *pdVar6;
  int iVar7;
  undefined8 uVar8;
  uint7 uVar9;
  ulonglong in_stack_ffffffffffffffb0;
  int local_2c;
  
  DAT_02041c60 = 1;
  FUN_011762d0(PTR_DAT_020013e8);
  FUN_0115f5b0(PTR_DAT_020019a0,PTR_DAT_020013e8);
  FUN_0115f9c0(PTR_DAT_020019a0,PTR_DAT_020013e8);
  FUN_011770f0(PTR_DAT_020013e8,PTR_DAT_020042c8,0,*(undefined8 *)(PTR_DAT_02001d30 + 0xb8));
  FUN_011770f0(PTR_DAT_020013e8,PTR_DAT_020042c8,1,*(undefined8 *)(PTR_DAT_02001d30 + 0xb8));
  if ((*(longlong *)PTR_DAT_020027c0 != 0) &&
     (cVar1 = FUN_01cc6060(*(undefined8 *)PTR_DAT_020027c0), cVar1 != '\0')) {
    *(undefined8 *)PTR_DAT_020027c0 = 0;
  }
  uVar8 = 0;
  uVar2 = FUN_01cc3870(&PTR_FUN_01cb5bc0,1,0xe,1,0);
  *(undefined8 *)PTR_DAT_020027c0 = uVar2;
  puVar3 = (undefined8 *)FUN_01c8a3c0(*(undefined8 *)PTR_DAT_02004e40,0);
  FUN_01cc3760(*(undefined8 *)(*(longlong *)PTR_DAT_020027c0 + 8),*puVar3);
  cVar1 = (**(code **)(**(longlong **)(DAT_020412f0 + 0x8a0) + 0x260))
                    (*(longlong **)(DAT_020412f0 + 0x8a0));
  uVar9 = (uint7)((ulonglong)uVar8 >> 8);
  if (cVar1 == '\0') {
    FUN_01cc2930(*(undefined8 *)(*(longlong *)PTR_DAT_020027c0 + 8),&DAT_011788f4,0,1,
                 (ulonglong)uVar9 << 8,0,1,0);
  }
  else {
    FUN_01cc31d0(*(undefined8 *)(*(longlong *)PTR_DAT_020027c0 + 8),2,&DAT_011788f4,0,
                 CONCAT71(uVar9,1),in_stack_ffffffffffffffb0 & 0xffffffffffffff00,0,1);
  }
  iVar7 = *(int *)(PTR_DAT_02004b40 + 0x1650);
  local_2c = 0;
  pdVar5 = (double *)PTR_DAT_02002310;
  pdVar6 = (double *)PTR_DAT_02002690;
  if (-1 < iVar7 + -1) {
    do {
      lVar4 = (longlong)local_2c;
      FUN_01cc47e0(*(undefined8 *)PTR_DAT_020027c0,
                   *(undefined8 *)(*(longlong *)(PTR_DAT_02004b40 + 0x1618) + lVar4 * 8));
      uVar2 = FUN_00526500(0x4024000000000000,
                           *(double *)(*(longlong *)(PTR_DAT_02004b40 + 0x1620) + lVar4 * 8) / 20.0)
      ;
      FUN_01cc48a0(*(undefined8 *)PTR_DAT_020027c0,0,uVar2,
                   (*(double *)(*(longlong *)(PTR_DAT_02004b40 + 0x1628) + lVar4 * 8) / 180.0) *
                   3.1415926535898);
      cVar1 = (**(code **)(**(longlong **)(DAT_020412f0 + 0x8a0) + 0x260))
                        (*(longlong **)(DAT_020412f0 + 0x8a0));
      if (cVar1 == '\x01') {
        uVar2 = FUN_00526500(0x4024000000000000,*pdVar5 / 20.0);
        FUN_01cc48a0(*(undefined8 *)PTR_DAT_020027c0,1,uVar2,(*pdVar6 / 180.0) * 3.1415926535898);
      }
      local_2c = local_2c + 1;
      iVar7 = iVar7 + -1;
      pdVar5 = pdVar5 + 1;
      pdVar6 = pdVar6 + 1;
    } while (iVar7 != 0);
  }
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x760) + 0x260))(*(longlong **)(param_1 + 0x760));
  if (cVar1 == '\x01') {
    FUN_013d4bc0(*(undefined8 *)PTR_DAT_020027c0,1,0,0,1);
  }
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x768) + 0x260))(*(longlong **)(param_1 + 0x768));
  if (cVar1 == '\x01') {
    FUN_013d4bc0(*(undefined8 *)PTR_DAT_020027c0,2,0,0,1);
  }
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x770) + 0x260))(*(longlong **)(param_1 + 0x770));
  if (cVar1 == '\x01') {
    FUN_013d4bc0(*(undefined8 *)PTR_DAT_020027c0,4,0,0,1);
  }
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x778) + 0x260))(*(longlong **)(param_1 + 0x778));
  if (cVar1 == '\x01') {
    FUN_013d4bc0(*(undefined8 *)PTR_DAT_020027c0,8,0,0,1);
  }
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x780) + 0x260))(*(longlong **)(param_1 + 0x780));
  if (cVar1 == '\x01') {
    FUN_013d4bc0(*(undefined8 *)PTR_DAT_020027c0,0x10,0,0,1);
  }
  return;
}

