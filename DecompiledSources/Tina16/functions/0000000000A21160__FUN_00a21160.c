/* Ghidra address: 00a21160 */
/* Ghidra symbol: FUN_00a21160 */


void FUN_00a21160(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  code *pcVar4;
  
  lVar1 = param_1[0x39];
  *(undefined4 *)(lVar1 + 0x10) = 0;
  uVar3 = 1;
  if (*(int *)((longlong)param_1 + 0x144) < 2) {
    if ((int)param_1[0x28] == 1) {
      uVar3 = *(undefined4 *)(param_1[0x29] + 0x48);
    }
    else {
      uVar3 = *(undefined4 *)(param_1[0x29] + 0xc);
    }
  }
  *(undefined4 *)(lVar1 + 0x1c) = uVar3;
  *(undefined8 *)(lVar1 + 0x14) = 0;
  if (param_2 == 3) {
    if (*(longlong *)(lVar1 + 0x70) == 0) {
      puVar2 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar2 + 5) = 4;
      (*(code *)*puVar2)();
    }
    pcVar4 = FUN_00a216b0;
  }
  else if (param_2 == 2) {
    if (*(longlong *)(lVar1 + 0x70) == 0) {
      puVar2 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar2 + 5) = 4;
      (*(code *)*puVar2)();
    }
    pcVar4 = FUN_00a21b00;
  }
  else {
    if (param_2 != 0) {
      puVar2 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar2 + 5) = 4;
                    /* WARNING: Could not recover jumptable at 0x00a2121d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar2)();
      return;
    }
    if (*(longlong *)(lVar1 + 0x70) != 0) {
      puVar2 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar2 + 5) = 4;
      (*(code *)*puVar2)();
    }
    pcVar4 = FUN_00a21220;
  }
  *(code **)(lVar1 + 8) = pcVar4;
  return;
}

