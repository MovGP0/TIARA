/* Ghidra address: 0069d2f0 */
/* Ghidra symbol: FUN_0069d2f0 */


void FUN_0069d2f0(longlong param_1,char param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 local_30;
  
  local_30 = 0;
  if (param_2 != *(char *)(param_1 + 0x3b)) {
    pcVar7 = (code *)0x0;
    if (param_2 == '\0') {
      FUN_0069d4b0(param_1,0);
      if (*(longlong *)(param_1 + 8) != 0) {
        FUN_005ffb10(*(longlong *)(param_1 + 8),0);
      }
      thunk_FUN_041a2fd8(*(undefined8 *)(param_1 + 0x40));
      *(undefined8 *)(param_1 + 0x40) = 0;
    }
    else if (param_2 == '\x01') {
      if (*(char *)(param_1 + 0x3b) == '\x02') goto LAB_0069d47b;
      pcVar7 = thunk_FUN_041ae455;
    }
    else if (param_2 == '\x02') {
      if (*(longlong *)(param_1 + 8) != 0) {
        FUN_005ffb10(*(longlong *)(param_1 + 8),0);
      }
      if (*(longlong *)(param_1 + 0x40) != 0) {
        thunk_FUN_041a2fd8(*(longlong *)(param_1 + 0x40));
      }
      pcVar7 = thunk_FUN_04162799;
    }
    if (pcVar7 != (code *)0x0) {
      plVar2 = (longlong *)FUN_0069e100(param_1);
      uVar1 = FUN_0069df70(param_1);
      lVar3 = (**(code **)(*plVar2 + 0x30))(plVar2,uVar1);
      uVar4 = FUN_00416740(*(undefined8 *)(lVar3 + 8));
      uVar5 = FUN_00416740(*(undefined8 *)(lVar3 + 0x10));
      uVar6 = FUN_00416740(*(undefined8 *)(lVar3 + 0x18));
      uVar4 = (*pcVar7)(uVar4,uVar5,uVar6,*(undefined8 *)(param_1 + 0x50));
      *(undefined8 *)(param_1 + 0x40) = uVar4;
      if (*(longlong *)(param_1 + 0x40) == 0) {
        FUN_0041ddd0(&local_30,PTR_PTR_020049c0);
        FUN_0069c390(local_30);
      }
      if (*(longlong *)(param_1 + 8) != 0) {
        FUN_005ffb10(*(longlong *)(param_1 + 8),*(undefined8 *)(param_1 + 0x40));
      }
    }
    *(char *)(param_1 + 0x3b) = param_2;
  }
LAB_0069d47b:
  FUN_00414480(&local_30);
  return;
}

