/* Ghidra address: 00ce94c0 */
/* Ghidra symbol: FUN_00ce94c0 */


void FUN_00ce94c0(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_78 [36];
  int local_54;
  undefined1 *local_50;
  longlong local_40;
  int local_34;
  longlong *local_30;
  longlong local_28;
  longlong *local_20;
  
  local_50 = auStack_78;
  if ((param_2 != 0) && (param_2 != param_1)) {
    local_28 = FUN_00ce9860(param_2,0);
    FUN_00ce9860(param_1,1);
    local_54 = *(int *)(local_28 + 0x10) + -1;
    local_34 = 0;
    iVar1 = *(int *)(local_28 + 0x10);
    if (-1 < local_54) {
      do {
        local_54 = iVar1;
        local_30 = (longlong *)FUN_00ce6f60(local_28,local_34);
        local_40 = *local_30;
        local_20 = (longlong *)(**(code **)(local_40 + 0x38))(local_40,1,param_1);
        (**(code **)(*local_20 + 0x10))(local_20,local_30);
        FUN_004ae7e0(*(undefined8 *)(param_1 + 0x30),local_20);
        local_34 = local_34 + 1;
        local_54 = local_54 + -1;
        iVar1 = local_54;
      } while (local_54 != 0);
    }
    FUN_00ce98a0(param_1,1);
    FUN_00ce98a0(param_2,0);
  }
  return;
}

