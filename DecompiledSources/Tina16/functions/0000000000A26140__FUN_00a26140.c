/* Ghidra address: 00a26140 */
/* Ghidra symbol: FUN_00a26140 */


void FUN_00a26140(longlong *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  code *pcVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar3 = param_1[0x3e];
  pcVar5 = FUN_00a26600;
  if (param_2 != 0) {
    pcVar5 = FUN_00a262d0;
  }
  pcVar6 = FUN_00a27100;
  if (param_2 != 0) {
    pcVar6 = FUN_00a264f0;
  }
  *(code **)(lVar3 + 8) = pcVar5;
  *(code **)(lVar3 + 0x10) = pcVar6;
  if (0 < *(int *)((longlong)param_1 + 0x144)) {
    lVar7 = 0;
    do {
      uVar1 = *(uint *)(param_1[lVar7 + 0x29] + 0x14);
      uVar2 = *(uint *)(param_1[lVar7 + 0x29] + 0x18);
      lVar8 = (longlong)(int)uVar1;
      lVar9 = (longlong)(int)uVar2;
      if (param_2 == 0) {
        FUN_00a25b90(param_1,1,uVar1,lVar3 + 0x38 + lVar8 * 8);
        FUN_00a25b90(param_1,0,uVar2,lVar3 + 0x58 + lVar9 * 8);
      }
      else {
        if (3 < uVar1) {
          lVar4 = *param_1;
          *(undefined4 *)(lVar4 + 0x28) = 0x32;
          *(uint *)(lVar4 + 0x2c) = uVar1;
          (**(code **)*param_1)(param_1);
        }
        if (3 < uVar2) {
          lVar4 = *param_1;
          *(undefined4 *)(lVar4 + 0x28) = 0x32;
          *(uint *)(lVar4 + 0x2c) = uVar2;
          (**(code **)*param_1)(param_1);
        }
        lVar4 = *(longlong *)(lVar3 + 0x78 + lVar8 * 8);
        if (lVar4 == 0) {
          lVar4 = (**(code **)param_1[1])(param_1,1,0x404);
          *(longlong *)(lVar3 + 0x78 + lVar8 * 8) = lVar4;
        }
        FUN_00626680(lVar4,0,0x404);
        lVar8 = *(longlong *)(lVar3 + 0x98 + lVar9 * 8);
        if (lVar8 == 0) {
          lVar8 = (**(code **)param_1[1])(param_1,1,0x404);
          *(longlong *)(lVar3 + 0x98 + lVar9 * 8) = lVar8;
        }
        FUN_00626680(lVar8,0,0x404);
      }
      *(undefined4 *)(lVar3 + 0x20 + lVar7 * 4) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)((longlong)param_1 + 0x144));
  }
  *(undefined8 *)(lVar3 + 0x18) = 0;
  *(int *)(lVar3 + 0x30) = (int)param_1[0x23];
  *(undefined4 *)(lVar3 + 0x34) = 0;
  return;
}

