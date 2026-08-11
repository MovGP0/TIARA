/* Ghidra address: 00864dd0 */
/* Ghidra symbol: FUN_00864dd0 */


undefined4 FUN_00864dd0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  local_28 = 0;
  local_30 = 0;
  FUN_00863030(&local_30,param_2);
  uVar2 = FUN_00414520(&local_28);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x118))
                    (*(longlong **)(param_1 + 0x18),local_30,uVar2);
  FUN_0041d630(uVar1);
  FUN_00414b90(param_3,local_28);
  local_20 = 0;
  FUN_0041b800(&local_30);
  FUN_00414520(&local_28);
  return local_20;
}

