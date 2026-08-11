/* Ghidra address: 01d3c530 */
/* Ghidra symbol: FUN_01d3c530 */


double FUN_01d3c530(longlong *param_1,double param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_98 [40];
  undefined1 *local_70;
  double *local_60;
  longlong local_58;
  int local_50;
  int local_4c;
  double local_48;
  double local_38;
  double local_28;
  longlong local_20;
  
  local_70 = auStack_98;
  local_58 = 0;
  local_50 = (int)param_1[2] + -1;
  puVar1 = auStack_98;
  if (-1 < local_50) {
    do {
      local_70 = puVar1;
      uVar3 = FUN_00b94e60(param_1,local_50);
      cVar2 = FUN_01d3c510(auStack_98,uVar3);
      if (cVar2 != '\0') {
        local_58 = FUN_00b94e60(param_1,local_50);
        break;
      }
      local_50 = local_50 + -1;
      puVar1 = local_70;
    } while (local_50 != -1);
  }
  local_20 = local_58;
  if (local_58 != 0) {
    local_4c = (**(code **)(*param_1 + 0x18))(param_1,local_58);
    if (local_4c < (int)param_1[2] + -1) {
      lVar4 = FUN_00b94e60(param_1,local_4c);
      local_60 = (double *)(lVar4 + 8);
      local_38 = *local_60;
      local_28 = *(double *)(lVar4 + 0x18);
      lVar4 = FUN_00b94e60(param_1,local_4c + 1);
      local_48 = local_28 +
                 ((*(double *)(lVar4 + 0x18) - local_28) * (param_2 - local_38)) /
                 (*(double *)(lVar4 + 8) - local_38);
    }
    else {
      local_48 = *(double *)(local_20 + 0x18);
    }
  }
  return local_48;
}

