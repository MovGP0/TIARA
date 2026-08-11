/* Ghidra address: 00a1b1f0 */
/* Ghidra symbol: FUN_00a1b1f0 */


void FUN_00a1b1f0(longlong *param_1,int param_2,uint param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  uint uVar3;
  code *pcVar4;
  uint uVar5;
  
  uVar3 = *(int *)(param_1[1] + 0x5c) - 0x20;
  if ((int)param_3 < (int)uVar3) {
    uVar3 = param_3;
  }
  lVar1 = param_1[0x49];
  if (uVar3 == 0) {
    pcVar4 = FUN_00a1af10;
    if (param_2 == 0xe0 || param_2 == 0xee) {
      pcVar4 = FUN_00a1afe0;
    }
    uVar5 = 0;
  }
  else {
    pcVar4 = FUN_00a1b2c0;
    if (((param_2 != 0xe0) || (uVar5 = 0xe, 0xd < uVar3)) &&
       (uVar5 = 0xc, param_2 != 0xee || 0xb < uVar3)) {
      uVar5 = uVar3;
    }
  }
  if (param_2 == 0xfe) {
    *(code **)(lVar1 + 0x28) = pcVar4;
    *(uint *)(lVar1 + 0xb0) = uVar5;
  }
  else {
    uVar3 = param_2 - 0xe0;
    if (0xf < uVar3) {
      puVar2 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar2 + 5) = 0x44;
      *(int *)((longlong)puVar2 + 0x2c) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00a1b2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar2)();
      return;
    }
    *(code **)(lVar1 + 0x30 + (longlong)(int)uVar3 * 8) = pcVar4;
    *(uint *)(lVar1 + 0xb4 + (longlong)(int)uVar3 * 4) = uVar5;
  }
  return;
}

