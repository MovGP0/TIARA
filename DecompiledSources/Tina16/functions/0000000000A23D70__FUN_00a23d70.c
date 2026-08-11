/* Ghidra address: 00a23d70 */
/* Ghidra symbol: FUN_00a23d70 */


void FUN_00a23d70(longlong *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  code *pcVar6;
  longlong lVar7;
  
  lVar3 = param_1[0x3e];
  *(longlong **)(lVar3 + 0x38) = param_1;
  *(int *)(lVar3 + 0x18) = param_2;
  iVar1 = *(int *)((longlong)param_1 + 0x19c);
  if (*(int *)((longlong)param_1 + 0x1a4) == 0) {
    pcVar6 = FUN_00a240d0;
    if (iVar1 == 0) {
      pcVar6 = FUN_00a23f30;
    }
    *(code **)(lVar3 + 8) = pcVar6;
  }
  else if (iVar1 == 0) {
    *(code **)(lVar3 + 8) = FUN_00a24340;
  }
  else {
    *(code **)(lVar3 + 8) = FUN_00a24420;
    if (*(longlong *)(lVar3 + 0x60) == 0) {
      uVar4 = (**(code **)param_1[1])(param_1,1,1000);
      *(undefined8 *)(lVar3 + 0x60) = uVar4;
    }
  }
  pcVar6 = FUN_00a24850;
  if (param_2 != 0) {
    pcVar6 = FUN_00a24760;
  }
  *(code **)(lVar3 + 0x10) = pcVar6;
  if (0 < *(int *)((longlong)param_1 + 0x144)) {
    lVar7 = 0;
    do {
      lVar5 = param_1[lVar7 + 0x29];
      *(undefined4 *)(lVar3 + 0x40 + lVar7 * 4) = 0;
      if (iVar1 == 0) {
        if (*(int *)((longlong)param_1 + 0x1a4) == 0) {
          uVar2 = *(uint *)(lVar5 + 0x14);
          goto joined_r0x00a23ebf;
        }
      }
      else {
        uVar2 = *(uint *)(lVar5 + 0x18);
        *(uint *)(lVar3 + 0x50) = uVar2;
joined_r0x00a23ebf:
        if (param_2 == 0) {
          FUN_00a25b90(param_1,iVar1 == 0,(longlong)(int)uVar2,
                       lVar3 + 0x70 + (longlong)(int)uVar2 * 8);
        }
        else {
          if (3 < uVar2) {
            lVar5 = *param_1;
            *(undefined4 *)(lVar5 + 0x28) = 0x32;
            *(uint *)(lVar5 + 0x2c) = uVar2;
            (**(code **)*param_1)(param_1);
          }
          lVar5 = *(longlong *)(lVar3 + 0x90 + (longlong)(int)uVar2 * 8);
          if (lVar5 == 0) {
            lVar5 = (**(code **)param_1[1])(param_1,1,0x404);
            *(longlong *)(lVar3 + 0x90 + (longlong)(int)uVar2 * 8) = lVar5;
          }
          FUN_00626680(lVar5,0,0x404);
        }
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)((longlong)param_1 + 0x144));
  }
  *(undefined8 *)(lVar3 + 0x54) = 0;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  *(int *)(lVar3 + 0x68) = (int)param_1[0x23];
  *(undefined4 *)(lVar3 + 0x6c) = 0;
  return;
}

