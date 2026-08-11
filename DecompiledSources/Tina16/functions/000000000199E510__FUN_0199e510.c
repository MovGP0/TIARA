/* Ghidra address: 0199e510 */
/* Ghidra symbol: FUN_0199e510 */


void FUN_0199e510(longlong param_1)

{
  double dVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined1 local_c0;
  undefined1 local_b8;
  undefined1 local_b0;
  undefined1 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [16];
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  
  dVar5 = 3.937007874015748 / *(double *)(param_1 + 0x60);
  if (*(char *)(param_1 + 0x58) == '\0') {
    dVar6 = *(double *)(param_1 + 0x28);
    dVar1 = *(double *)(param_1 + 0x30);
  }
  else {
    dVar6 = *(double *)(param_1 + 0x30);
    dVar1 = *(double *)(param_1 + 0x28);
  }
  dVar7 = *(double *)(param_1 + 0x38) * dVar5;
  dVar8 = *(double *)(param_1 + 0x40) * dVar5;
  dVar9 = *(double *)(param_1 + 0x48) * dVar5;
  dVar10 = *(double *)(param_1 + 0x50) * dVar5;
  uVar4 = FUN_0040c770((dVar6 * dVar5 - dVar9) - dVar10);
  *(undefined4 *)(param_1 + 0x9c) = uVar4;
  uVar4 = FUN_0040c770((dVar1 * dVar5 - dVar7) - dVar8);
  *(undefined4 *)(param_1 + 0xa0) = uVar4;
  uVar4 = FUN_0040c770(dVar9);
  *(undefined4 *)(param_1 + 0xb4) = uVar4;
  uVar4 = FUN_0040c770(dVar7);
  *(undefined4 *)(param_1 + 0xb8) = uVar4;
  uVar4 = FUN_0040c770(dVar10);
  *(undefined4 *)(param_1 + 0xbc) = uVar4;
  uVar4 = FUN_0040c770(dVar8);
  *(undefined4 *)(param_1 + 0xc0) = uVar4;
  *(int *)(param_1 + 0xa4) = -*(int *)(param_1 + 0xb4);
  *(int *)(param_1 + 0xa8) = -*(int *)(param_1 + 0xb8);
  *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0x9c) + *(int *)(param_1 + 0xbc);
  *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xa0) + *(int *)(param_1 + 0xc0);
  *(int *)PTR_DAT_02002620 = (*(int *)(param_1 + 0xac) - *(int *)(param_1 + 0xa4)) / 10;
  *(int *)PTR_DAT_02001fb0 = (*(int *)(param_1 + 0xb0) - *(int *)(param_1 + 0xa8)) / 10;
  if (*(int *)PTR_DAT_02002620 < *(int *)PTR_DAT_02001fb0) {
    *(undefined4 *)PTR_DAT_02001fb0 = *(undefined4 *)PTR_DAT_02002620;
  }
  else {
    *(undefined4 *)PTR_DAT_02002620 = *(undefined4 *)PTR_DAT_02001fb0;
  }
  if (*(longlong *)(param_1 + 0x210) != 0) {
    local_c8 = PTR_DAT_02004010[0x814];
    local_c0 = *PTR_DAT_020037e8;
    local_b8 = PTR_DAT_02004010[0x815];
    local_b0 = *PTR_DAT_02001560;
    local_a8 = *PTR_DAT_02005310;
    local_a0 = 0x1c7;
    FUN_0198d580(param_1,&local_88,*PTR_DAT_02002480,PTR_DAT_02004010[0x816]);
    cVar3 = FUN_0199e4d0(auStack_e8,&local_88);
    if (cVar3 == '\0') {
      *(int *)(param_1 + 0xa4) =
           (local_88 / *(int *)(param_1 + 0x9c)) * *(int *)(param_1 + 0x9c) -
           *(int *)(param_1 + 0xb4);
      *(int *)(param_1 + 0xac) =
           (local_80 / *(int *)(param_1 + 0x9c) + 1) * *(int *)(param_1 + 0x9c) +
           *(int *)(param_1 + 0xbc);
      *(int *)(param_1 + 0xa8) =
           (local_84 / *(int *)(param_1 + 0xa0)) * *(int *)(param_1 + 0xa0) -
           *(int *)(param_1 + 0xb8);
      *(int *)(param_1 + 0xb0) =
           (local_7c / *(int *)(param_1 + 0xa0) + 1) * *(int *)(param_1 + 0xa0) +
           *(int *)(param_1 + 0xc0);
    }
  }
  lVar2 = *(longlong *)(param_1 + 0x210);
  if (lVar2 != 0) {
    FUN_019ab9a0(param_1,local_98);
    FUN_0199e410(param_1,lVar2,local_98,0);
  }
  return;
}

