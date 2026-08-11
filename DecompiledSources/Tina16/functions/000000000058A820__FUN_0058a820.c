/* Ghidra address: 0058a820 */
/* Ghidra symbol: FUN_0058a820 */


longlong * FUN_0058a820(longlong param_1,undefined8 param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong *local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  
  local_40 = 0;
  local_30 = 0;
  local_38 = 0;
  plVar3 = *(longlong **)(param_1 + 0xe8);
  FUN_00414b50(&local_30,param_2);
  for (; plVar3 != (longlong *)0x0; plVar3 = (longlong *)(**(code **)(*plVar3 + 0x38))(plVar3)) {
    (**(code **)(*plVar3 + 0x88))(plVar3,&local_38);
    uVar4 = 0;
    while( true ) {
      uVar2 = 0;
      if (local_38 != 0) {
        uVar2 = *(ulonglong *)(local_38 + -8);
      }
      if (uVar2 <= uVar4) break;
      local_48 = *(longlong **)(local_38 + uVar4 * 8);
      (**(code **)(*local_48 + 0x10))(local_48,&local_40);
      iVar1 = FUN_00416db0(local_40,local_30);
      if (iVar1 == 0) goto LAB_0058a8eb;
      uVar4 = uVar4 + 1;
    }
    FUN_00419430(&local_38,&DAT_0052f648);
  }
  local_48 = (longlong *)0x0;
LAB_0058a8eb:
  FUN_00414480(&local_40);
  FUN_00419430(&local_38,&DAT_0052f648);
  FUN_00414480(&local_30);
  return local_48;
}

