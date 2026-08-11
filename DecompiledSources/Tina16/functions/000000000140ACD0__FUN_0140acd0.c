/* Ghidra address: 0140acd0 */
/* Ghidra symbol: FUN_0140acd0 */


void FUN_0140acd0(undefined8 *param_1,longlong param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  uint uVar8;
  double dVar9;
  double dVar10;
  undefined8 local_a0;
  longlong local_98;
  ushort local_88;
  ushort local_84;
  double local_80;
  char local_60;
  
  puVar7 = &local_a0;
  for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar7 = *param_1;
    param_1 = param_1 + 1;
    puVar7 = puVar7 + 1;
  }
  dVar9 = 0.0;
  uVar6 = (uint)local_a0._2_2_;
  iVar4 = 0;
  if (-1 < (int)(uVar6 - 1)) {
    do {
      FUN_0140a6a0(*(undefined8 *)(param_2 + -8 + (longlong)(iVar4 + 1) * 8));
      if (local_60 != '\0') {
        FUN_0140a720(*(undefined8 *)(param_2 + -8 + (longlong)(iVar4 + 1) * 8),1);
      }
      iVar4 = iVar4 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  uVar6 = (uint)local_88;
  dVar10 = 0.0;
  if (uVar6 <= local_84) {
    iVar4 = (local_84 - uVar6) + 1;
    do {
      uVar1 = *(undefined2 *)(local_98 + (longlong)(int)uVar6 * 2);
      iVar5 = 0;
      uVar8 = (uint)local_a0._2_2_;
      if (-1 < (int)(uVar8 - 1)) {
        do {
          uVar2 = FUN_01aa0c20(iVar5 + 1,uVar1);
          FUN_0140a760(dVar9,uVar2,
                       *(undefined8 *)
                        (param_2 + -8 + (longlong)(int)((uint)local_a0._2_2_ - iVar5) * 8),1);
          iVar5 = iVar5 + 1;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      dVar9 = dVar9 + local_80;
      uVar6 = uVar6 + 1;
      iVar4 = iVar4 + -1;
      dVar10 = dVar9;
    } while (iVar4 != 0);
  }
  uVar6 = (uint)local_a0._2_2_;
  iVar4 = 0;
  if (-1 < (int)(uVar6 - 1)) {
    do {
      FUN_0140a760(dVar10,0,*(undefined8 *)(param_2 + -8 + (longlong)(iVar4 + 1) * 8),1);
      iVar4 = iVar4 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}

