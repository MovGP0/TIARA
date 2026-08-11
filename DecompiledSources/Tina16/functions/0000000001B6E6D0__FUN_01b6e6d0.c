/* Ghidra address: 01b6e6d0 */
/* Ghidra symbol: FUN_01b6e6d0 */


void FUN_01b6e6d0(longlong *param_1,undefined8 param_2,undefined1 *param_3)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  bool bVar5;
  char local_29 [9];
  
  lVar2 = (**(code **)(*(longlong *)param_1[0x13b] + 0xa0))((longlong *)param_1[0x13b],local_29);
  if ((*(char *)((longlong)param_1 + 0x9cd) == '\0') &&
     (lVar2 = param_1[0x13b], *(char *)(lVar2 + 0x68) != '\0')) {
    uVar4 = FUN_0065b870(param_1);
    FUN_00f833a0(uVar4,0x530,0,0);
    *param_3 = 2;
  }
  else {
    if ((byte)(local_29[0] - 8U) < 8) {
      bVar5 = ((int)CONCAT71((int7)((ulonglong)lVar2 >> 8),1) << (local_29[0] - 8U & 0x1f) & 0x38U)
              != 0;
    }
    else {
      bVar5 = false;
    }
    if (bVar5) {
      cVar1 = FUN_010e1a60(param_1);
      if (cVar1 != '\0') {
        plVar3 = (longlong *)FUN_010e1b10(param_1);
        (**(code **)(*plVar3 + 0x480))(plVar3);
        uVar4 = FUN_010e1b10(param_1);
        FUN_00805200(uVar4);
      }
    }
    *param_3 = 1;
    *(undefined1 *)((longlong)param_1 + 0x9cc) = 1;
    (**(code **)(*param_1 + 0x448))(param_1);
  }
  return;
}

