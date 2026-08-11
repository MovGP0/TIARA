/* Ghidra address: 01448900 */
/* Ghidra symbol: FUN_01448900 */


void FUN_01448900(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  
  iVar5 = 1;
  iVar6 = 1;
  if (*(char *)(param_1 + 0x92) == '\0') {
    for (; lVar3 = FUN_0040c770(*(undefined8 *)(param_1 + 0x368)), iVar5 <= lVar3; iVar5 = iVar5 + 1
        ) {
      for (; lVar3 = FUN_0040c770(*(undefined8 *)(param_1 + 0xd8)), iVar6 <= lVar3;
          iVar6 = iVar6 + 1) {
        FUN_019b7940(param_1);
        dVar7 = (double)FUN_0040c850(*(double *)(param_1 + 0x368 + (longlong)iVar5 * 8) -
                                     *(double *)(param_1 + 0xd8 + (longlong)iVar6 * 8));
        if ((dVar7 < 1e-100) &&
           (dVar7 = (double)FUN_0040c850(*(double *)(param_1 + 0x4b0 + (longlong)iVar5 * 8) -
                                         *(double *)(param_1 + 0x220 + (longlong)iVar6 * 8)),
           dVar7 < 1e-100)) {
          iVar1 = FUN_0040c770(*(undefined8 *)(param_1 + 0x368));
          if (iVar5 <= iVar1 + -1) {
            iVar4 = ((iVar1 + -1) - iVar5) + 1;
            iVar1 = iVar5;
            do {
              *(undefined8 *)(param_1 + 0x368 + (longlong)iVar1 * 8) =
                   *(undefined8 *)(param_1 + 0x368 + (longlong)(iVar1 + 1) * 8);
              iVar1 = iVar1 + 1;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
          iVar1 = FUN_0040c770(*(undefined8 *)(param_1 + 0x368));
          if (iVar5 <= iVar1 + -1) {
            iVar4 = ((iVar1 + -1) - iVar5) + 1;
            iVar1 = iVar5;
            do {
              *(undefined8 *)(param_1 + 0x4b0 + (longlong)iVar1 * 8) =
                   *(undefined8 *)(param_1 + 0x4b0 + (longlong)(iVar1 + 1) * 8);
              iVar1 = iVar1 + 1;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
          *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + -1;
          *(double *)(param_1 + 0x368) = *(double *)(param_1 + 0x368) - 1.0;
          iVar1 = FUN_0040c770(*(undefined8 *)(param_1 + 0xd8));
          if (iVar6 <= iVar1 + -1) {
            iVar4 = ((iVar1 + -1) - iVar6) + 1;
            iVar1 = iVar6;
            do {
              *(undefined8 *)(param_1 + 0xd8 + (longlong)iVar1 * 8) =
                   *(undefined8 *)(param_1 + 0xd8 + (longlong)(iVar1 + 1) * 8);
              iVar1 = iVar1 + 1;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
          iVar1 = FUN_0040c770(*(undefined8 *)(param_1 + 0xd8));
          if (iVar6 <= iVar1 + -1) {
            iVar4 = ((iVar1 + -1) - iVar6) + 1;
            iVar1 = iVar6;
            do {
              *(undefined8 *)(param_1 + 0x220 + (longlong)iVar1 * 8) =
                   *(undefined8 *)(param_1 + 0x220 + (longlong)(iVar1 + 1) * 8);
              iVar1 = iVar1 + 1;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
          *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
          lVar3 = FUN_0040c770(*(undefined8 *)(param_1 + 0xd8));
          *(double *)(param_1 + 0xd8) = (double)(lVar3 + -1);
        }
      }
    }
    uVar2 = FUN_0040c770(*(undefined8 *)(param_1 + 0x368));
    *(undefined4 *)(param_1 + 0x48) = uVar2;
    uVar2 = FUN_0040c770(*(undefined8 *)(param_1 + 0xd8));
    *(undefined4 *)(param_1 + 0x4c) = uVar2;
  }
  return;
}

