/* Ghidra address: 00bd0070 */
/* Ghidra symbol: FUN_00bd0070 */


void FUN_00bd0070(longlong *param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 *local_28;
  int local_1c;
  
  local_30 = auStack_58;
  if ((param_2 < 0) || (puVar1 = auStack_58, (int)param_1[8] < param_2)) {
    FUN_00bceea0(param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  if (0 < param_3) {
    FUN_004b3260(param_1);
    (**(code **)(*param_1 + 0x50))(param_1,(int)param_1[8] + param_3);
    if (param_2 < (int)param_1[8]) {
      FUN_00409a70(param_1[7] + (longlong)param_2 * 0x28,
                   param_1[7] + (longlong)(param_2 + param_3) * 0x28,
                   (longlong)(((int)param_1[8] - param_2) * 0x28));
    }
    iVar2 = param_2 + param_3 + -1;
    local_1c = param_2;
    if (param_2 <= iVar2) {
      iVar2 = (iVar2 - param_2) + 1;
      do {
        local_28 = (undefined8 *)(param_1[7] + (longlong)local_1c * 0x28);
        *local_28 = 0;
        local_28[1] = 0;
        local_28[2] = 0xffffffffffffffff;
        *(undefined4 *)(local_28 + 3) = 0xffffffff;
        *(undefined1 *)(local_28 + 4) = 4;
        local_1c = local_1c + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    *(int *)(param_1 + 8) = (int)param_1[8] + param_3;
    if (param_1[0x17] != 0) {
      (*(code *)param_1[0x17])(param_1[0x18],param_1,param_2,param_3);
    }
    FUN_004b3390(param_1);
  }
  return;
}

