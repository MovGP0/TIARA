/* Ghidra address: 00cb9b80 */
/* Ghidra symbol: FUN_00cb9b80 */


void FUN_00cb9b80(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *local_30;
  
  plVar1 = *(longlong **)(param_1 + 0x1a0);
  if (plVar1 != param_2) {
    if (param_2 == (longlong *)0x0) {
      if (plVar1 != (longlong *)0x0) {
        if (*(char *)(param_1 + 0x1a8) == '\0') {
          *(undefined8 *)(param_1 + 0x1a0) = 0;
          FUN_004d2d90(plVar1,param_1);
        }
        else {
          *(undefined8 *)(param_1 + 0x1a0) = 0;
          *(undefined1 *)(param_1 + 0x1a8) = 0;
          FUN_00410f20(plVar1);
        }
      }
    }
    else if (param_2[1] == 0) {
      if ((plVar1 != (longlong *)0x0) && (*(char *)(param_1 + 0x1a8) == '\0')) {
        *(undefined8 *)(param_1 + 0x1a0) = 0;
        FUN_004d2d90(plVar1,param_1);
      }
      lVar2 = *param_2;
      local_30 = plVar1;
      if ((plVar1 != (longlong *)0x0) && (*plVar1 != lVar2)) {
        *(undefined8 *)(param_1 + 0x1a0) = 0;
        *(undefined1 *)(param_1 + 0x1a8) = 0;
        local_30 = (longlong *)0x0;
        FUN_00410f20(plVar1);
      }
      if (local_30 == (longlong *)0x0) {
        local_30 = (longlong *)FUN_00882aa0(lVar2,1,param_1);
        *(longlong **)(param_1 + 0x1a0) = local_30;
        *(undefined1 *)(param_1 + 0x1a8) = 1;
      }
      (**(code **)(*local_30 + 0x10))(local_30,param_2);
    }
    else {
      if (plVar1 != (longlong *)0x0) {
        if (*(char *)(param_1 + 0x1a8) == '\0') {
          FUN_004d2d90(plVar1,param_1);
        }
        else {
          *(undefined8 *)(param_1 + 0x1a0) = 0;
          *(undefined1 *)(param_1 + 0x1a8) = 0;
          FUN_00410f20(plVar1);
        }
      }
      *(longlong **)(param_1 + 0x1a0) = param_2;
      FUN_004d26c0(param_2,param_1);
    }
  }
  return;
}

