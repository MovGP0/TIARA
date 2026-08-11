/* Ghidra address: 00a175f0 */
/* Ghidra symbol: FUN_00a175f0 */


void FUN_00a175f0(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  lVar1 = param_1[0x47];
  if (param_2 == 3) {
    if (*(longlong *)(lVar1 + 0x10) == 0) {
      puVar2 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar2 + 5) = 4;
      (*(code *)*puVar2)();
    }
    pcVar4 = FUN_00a17740;
  }
  else if (param_2 == 2) {
    if (*(longlong *)(lVar1 + 0x10) == 0) {
      puVar2 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar2 + 5) = 4;
      (*(code *)*puVar2)();
    }
    pcVar4 = FUN_00a17840;
  }
  else {
    if (param_2 != 0) {
      puVar2 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar2 + 5) = 4;
      (*(code *)*puVar2)();
      goto LAB_00a17697;
    }
    if (*(int *)((longlong)param_1 + 0x6c) != 0) {
      *(code **)(lVar1 + 8) = FUN_00a176b0;
      if (*(longlong *)(lVar1 + 0x18) == 0) {
        uVar3 = (**(code **)(param_1[1] + 0x38))
                          (param_1,*(undefined8 *)(lVar1 + 0x10),0,*(undefined4 *)(lVar1 + 0x20),1);
        *(undefined8 *)(lVar1 + 0x18) = uVar3;
      }
      goto LAB_00a17697;
    }
    pcVar4 = *(code **)(param_1[0x4c] + 8);
  }
  *(code **)(lVar1 + 8) = pcVar4;
LAB_00a17697:
  *(undefined8 *)(lVar1 + 0x24) = 0;
  return;
}

