/* Ghidra address: 00c0e730 */
/* Ghidra symbol: FUN_00c0e730 */


void FUN_00c0e730(longlong param_1,char param_2,char param_3)

{
  undefined1 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined8 local_30;
  int local_20;
  bool local_19;
  
  local_19 = *(int *)(param_1 + 0x7e4) == 0;
  if (param_3 != '\0') {
    if (param_2 == '\0') {
      *(int *)(param_1 + 0x7e4) = *(int *)(param_1 + 0x7e4) + 1;
    }
    else {
      *(int *)(param_1 + 0x7e4) = *(int *)(param_1 + 0x7e4) + -1;
      local_19 = *(int *)(param_1 + 0x7e4) == 0;
    }
  }
  if (local_19 != false) {
    local_40 = auStack_68;
    if (*(longlong *)(param_1 + 0x668) != 0) {
      iVar4 = *(int *)(*(longlong *)(param_1 + 0x668) + 0x10);
      local_20 = 0;
      local_40 = auStack_68;
      puVar1 = auStack_68;
      if (-1 < iVar4 + -1) {
        do {
          local_40 = puVar1;
          local_30 = *(undefined8 *)(param_1 + 0x668);
          plVar2 = (longlong *)FUN_004aeac0(local_30,local_20);
          (**(code **)(*plVar2 + 8))(plVar2,*(undefined8 *)(param_1 + 0x490),param_2);
          local_20 = local_20 + 1;
          iVar4 = iVar4 + -1;
          puVar1 = local_40;
        } while (iVar4 != 0);
      }
    }
    if (*(longlong *)(param_1 + 0x770) != 0) {
      uVar3 = FUN_00bf2c10(param_1);
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x490) + 0x70);
      (**(code **)(*plVar2 + 0x10))(plVar2,uVar3);
      FUN_005fdab0(*(undefined8 *)(*(longlong *)(param_1 + 0x490) + 0x80),
                   *(undefined4 *)(param_1 + 200));
      FUN_00bf3710(param_1);
      (**(code **)(param_1 + 0x770))
                (*(undefined8 *)(param_1 + 0x778),param_1,*(undefined8 *)(param_1 + 0x490),param_2);
      FUN_00bfcfd0(param_1);
    }
  }
  return;
}

