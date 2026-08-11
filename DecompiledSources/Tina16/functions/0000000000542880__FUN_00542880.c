/* Ghidra address: 00542880 */
/* Ghidra symbol: FUN_00542880 */


longlong FUN_00542880(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong local_30;
  longlong local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  FUN_00542450(param_1,local_20);
  FUN_004194b0(&local_28,local_20[0],&DAT_005341c0);
  uVar3 = 0;
  while( true ) {
    uVar2 = 0;
    if (local_28 != 0) {
      uVar2 = *(ulonglong *)(local_28 + -8);
    }
    if (uVar2 <= uVar3) break;
    plVar1 = *(longlong **)(local_28 + uVar3 * 8);
    local_30 = (**(code **)(*plVar1 + 0x28))(plVar1,param_2);
    if (local_30 != 0) goto LAB_00542916;
    uVar3 = uVar3 + 1;
  }
  FUN_00419430(&local_28,&DAT_005341c0);
  local_30 = 0;
LAB_00542916:
  FUN_00417840(&local_28,&DAT_005341c0,2);
  return local_30;
}

