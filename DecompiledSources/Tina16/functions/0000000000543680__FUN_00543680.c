/* Ghidra address: 00543680 */
/* Ghidra symbol: FUN_00543680 */


longlong * FUN_00543680(undefined8 param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *local_40;
  longlong local_38;
  longlong local_30 [2];
  
  local_30[0] = 0;
  local_38 = 0;
  (**(code **)(*param_2 + 0x40))(param_2,local_30);
  uVar4 = 0;
  while( true ) {
    uVar3 = 0;
    if (local_30[0] != 0) {
      uVar3 = *(ulonglong *)(local_30[0] + -8);
    }
    if (uVar3 <= uVar4) {
      FUN_00419430(local_30,&DAT_0052f648);
      lVar1 = *(longlong *)(param_3 + 6 + (longlong)*(int *)(param_3 + 2));
      (**(code **)(*param_2 + 0x40))(param_2,&local_38);
      uVar4 = 0;
      goto LAB_0054374d;
    }
    local_40 = *(longlong **)(local_30[0] + uVar4 * 8);
    lVar1 = (**(code **)(*local_40 + 0x50))(local_40);
    if (lVar1 == param_3) break;
    uVar4 = uVar4 + 1;
  }
LAB_00543776:
  FUN_00417840(&local_38,&DAT_0052f648,2);
  return local_40;
LAB_0054374d:
  uVar3 = 0;
  if (local_38 != 0) {
    uVar3 = *(ulonglong *)(local_38 + -8);
  }
  if (uVar3 <= uVar4) {
    FUN_00419430(&local_38,&DAT_0052f648);
    local_40 = (longlong *)0x0;
    goto LAB_00543776;
  }
  local_40 = *(longlong **)(local_38 + uVar4 * 8);
  lVar2 = (**(code **)(*local_40 + 0x50))(local_40);
  if (lVar2 == lVar1) goto LAB_00543776;
  uVar4 = uVar4 + 1;
  goto LAB_0054374d;
}

