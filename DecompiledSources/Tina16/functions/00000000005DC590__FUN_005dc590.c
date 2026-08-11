/* Ghidra address: 005dc590 */
/* Ghidra symbol: FUN_005dc590 */


void FUN_005dc590(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = 0;
  local_20 = 0;
  local_28 = 0;
  plVar1 = *(longlong **)(param_1 + 8);
  FUN_00416780(&local_28,(short)plVar1[6]);
  FUN_00416cd0(&local_20,3,param_2,local_28,param_3);
  uVar3 = (**(code **)(*plVar1 + 0x78))(plVar1,local_20);
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (lVar2 != 0) {
    FUN_005dbea0(param_1,&local_30,param_2);
    FUN_005e1410(lVar2,local_30,uVar3);
  }
  FUN_00414560(&local_30,3);
  return;
}

