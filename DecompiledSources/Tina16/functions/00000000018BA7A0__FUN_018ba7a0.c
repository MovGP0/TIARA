/* Ghidra address: 018ba7a0 */
/* Ghidra symbol: FUN_018ba7a0 */


double FUN_018ba7a0(longlong param_1,double param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  double local_50;
  longlong local_40 [4];
  
  local_40[0] = 0;
  local_50 = 0.0;
  dVar7 = 0.0;
  FUN_018b8410(param_1);
  iVar2 = FUN_01803a10();
  iVar5 = 0;
  if (-1 < iVar2 + -1) {
    do {
      uVar3 = FUN_018b8410(param_1);
      lVar4 = FUN_018039f0(uVar3,iVar5);
      lVar4 = FUN_018bc4b0(param_1,*(undefined8 *)(lVar4 + 0x20));
      cVar1 = FUN_004113d0(lVar4,&PTR_FUN_0192c3a0);
      if (((cVar1 != '\0') && (cVar1 = FUN_004113d0(lVar4,&PTR_FUN_01930a20), cVar1 == '\0')) &&
         (cVar1 = FUN_004113d0(lVar4,&PTR_FUN_01933a98), cVar1 == '\0')) {
        uVar3 = FUN_018b8410(param_1);
        uVar3 = FUN_018039f0(uVar3,iVar5);
        FUN_01803cc0(uVar3,local_40,&DAT_018baa44);
        if (local_40[0] == 0) {
          dVar6 = *(double *)(lVar4 + 0x98);
        }
        else {
          dVar6 = (double)FUN_0180d800(local_40[0]);
        }
        if (((param_2 == 0.0) || (dVar6 = (double)FUN_0040c850(param_2 - dVar6), dVar6 < 0.001)) ||
           ((cVar1 = FUN_004113d0(lVar4,&PTR_FUN_01930480), cVar1 != '\0' ||
            (cVar1 = FUN_004113d0(lVar4,&PTR_FUN_01932898), cVar1 != '\0')))) {
          uVar3 = FUN_018b8410(param_1);
          uVar3 = FUN_018039f0(uVar3,iVar5);
          FUN_01803cc0(uVar3,local_40,&DAT_018baa54);
          if (local_40[0] == 0) {
            dVar7 = *(double *)(lVar4 + 0xa0);
          }
          else {
            dVar7 = (double)FUN_0180d800(local_40[0]);
          }
          uVar3 = FUN_018b8410(param_1);
          uVar3 = FUN_018039f0(uVar3,iVar5);
          FUN_01803cc0(uVar3,local_40,&LAB_018baa64);
          if (local_40[0] == 0) {
            dVar7 = dVar7 + *(double *)(lVar4 + 0xb0);
          }
          else {
            dVar6 = (double)FUN_0180d800(local_40[0]);
            dVar7 = dVar7 + dVar6;
          }
        }
        if (local_50 < dVar7) {
          local_50 = dVar7;
        }
      }
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if ((local_50 == 0.0) && (*(double *)(param_1 + 0xa8) != 0.0)) {
    local_50 = *(double *)(param_1 + 0xa8);
  }
  FUN_00414480(local_40);
  return local_50;
}

