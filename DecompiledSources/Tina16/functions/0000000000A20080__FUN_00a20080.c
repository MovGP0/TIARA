/* Ghidra address: 00a20080 */
/* Ghidra symbol: FUN_00a20080 */


void FUN_00a20080(longlong *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  int *piVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar8 = param_1[0x1f];
  if (lVar8 == 0) {
    uVar1 = *(uint *)((longlong)param_1 + 0x4c);
    if (4 < (int)uVar1) {
      lVar8 = *param_1;
      *(undefined4 *)(lVar8 + 0x28) = 0x1a;
      *(uint *)(lVar8 + 0x2c) = uVar1;
      *(undefined4 *)(*param_1 + 0x30) = 4;
      (**(code **)*param_1)(param_1);
      uVar1 = *(uint *)((longlong)param_1 + 0x4c);
    }
    *(uint *)((longlong)param_1 + 0x144) = uVar1;
    if (0 < (int)uVar1) {
      uVar4 = (ulonglong)(uVar1 & 3);
      if ((ulonglong)uVar1 - 1 < 3) {
        lVar8 = 0;
      }
      else {
        lVar8 = 0;
        lVar3 = 0x120;
        do {
          param_1[lVar8 + 0x29] = param_1[0xb] + -0x120 + lVar3;
          param_1[lVar8 + 0x2a] = param_1[0xb] + -0xc0 + lVar3;
          param_1[lVar8 + 0x2b] = param_1[0xb] + -0x60 + lVar3;
          param_1[lVar8 + 0x2c] = param_1[0xb] + lVar3;
          lVar8 = lVar8 + 4;
          lVar3 = lVar3 + 0x180;
        } while (uVar1 - uVar4 != lVar8);
      }
      if (uVar4 != 0) {
        plVar7 = param_1 + lVar8 + 0x29;
        lVar8 = lVar8 * 0x60;
        lVar3 = -uVar4;
        do {
          *plVar7 = param_1[0xb] + lVar8;
          plVar7 = plVar7 + 1;
          lVar8 = lVar8 + 0x60;
          lVar3 = lVar3 + 1;
        } while (lVar3 != 0);
      }
    }
    *(undefined8 *)((longlong)param_1 + 0x19c) = 0x3f00000000;
    *(undefined4 *)((longlong)param_1 + 0x1a4) = 0;
    uVar2 = 0;
  }
  else {
    lVar3 = (longlong)*(int *)(param_1[0x36] + 0x2c);
    uVar1 = *(uint *)(lVar8 + lVar3 * 0x24);
    *(uint *)((longlong)param_1 + 0x144) = uVar1;
    if (0 < (int)uVar1) {
      uVar4 = (ulonglong)(uVar1 & 3);
      if ((ulonglong)uVar1 - 1 < 3) {
        lVar5 = 0;
      }
      else {
        lVar9 = lVar8 + 0x10 + lVar3 * 0x24;
        lVar5 = 0;
        do {
          param_1[lVar5 + 0x29] = (longlong)*(int *)(lVar9 + -0xc + lVar5 * 4) * 0x60 + param_1[0xb]
          ;
          param_1[lVar5 + 0x2a] = (longlong)*(int *)(lVar9 + -8 + lVar5 * 4) * 0x60 + param_1[0xb];
          param_1[lVar5 + 0x2b] = (longlong)*(int *)(lVar9 + -4 + lVar5 * 4) * 0x60 + param_1[0xb];
          param_1[lVar5 + 0x2c] = (longlong)*(int *)(lVar9 + lVar5 * 4) * 0x60 + param_1[0xb];
          lVar5 = lVar5 + 4;
        } while (uVar1 - uVar4 != lVar5);
      }
      if (uVar4 != 0) {
        plVar7 = param_1 + lVar5 + 0x29;
        piVar6 = (int *)(lVar8 + lVar3 * 0x24 + 4 + lVar5 * 4);
        lVar9 = -uVar4;
        do {
          *plVar7 = (longlong)*piVar6 * 0x60 + param_1[0xb];
          plVar7 = plVar7 + 1;
          piVar6 = piVar6 + 1;
          lVar9 = lVar9 + 1;
        } while (lVar9 != 0);
      }
    }
    *(undefined4 *)((longlong)param_1 + 0x19c) = *(undefined4 *)(lVar8 + 0x14 + lVar3 * 0x24);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(lVar8 + 0x18 + lVar3 * 0x24);
    *(undefined4 *)((longlong)param_1 + 0x1a4) = *(undefined4 *)(lVar8 + 0x1c + lVar3 * 0x24);
    uVar2 = *(undefined4 *)(lVar8 + 0x20 + lVar3 * 0x24);
  }
  *(undefined4 *)(param_1 + 0x35) = uVar2;
  return;
}

