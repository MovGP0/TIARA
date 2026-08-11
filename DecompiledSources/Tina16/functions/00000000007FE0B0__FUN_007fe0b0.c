/* Ghidra address: 007fe0b0 */
/* Ghidra symbol: FUN_007fe0b0 */


void FUN_007fe0b0(longlong *param_1,longlong *param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  char local_19;
  
  local_30 = auStack_58;
  if (((longlong *)param_1[0xf] != param_2) && (param_2 != param_1)) {
    local_19 = (longlong *)param_1[0xf] == (longlong *)0x0;
    puVar1 = auStack_58;
    if ((bool)local_19) {
      FUN_0065ed10(param_1,1);
      puVar1 = local_30;
    }
    local_30 = puVar1;
    if (local_19 != '\0') {
      (**(code **)(*param_1 + 0x1e8))(param_1);
    }
    if ((*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0) {
      param_1[0x98] = 0;
    }
    param_1[0x99] = 0;
    FUN_0065f000(param_1,param_2);
    if (param_1[0xf] == 0) {
      FUN_00655e40(param_1);
    }
    if (local_19 != '\0') {
      FUN_0065ed10(param_1,0);
    }
  }
  return;
}

