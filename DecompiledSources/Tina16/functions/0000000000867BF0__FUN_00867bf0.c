/* Ghidra address: 00867bf0 */
/* Ghidra symbol: FUN_00867bf0 */


undefined4 FUN_00867bf0(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_18 = 0;
  local_20 = 0;
  local_28 = (longlong *)0x0;
  *param_2 = 0;
  if (*(longlong *)(param_1 + 0x58) == 0) {
    FUN_00867900(param_1,&local_28);
    uVar2 = FUN_0041b800(&local_20);
    uVar1 = (**(code **)(*local_28 + 0x168))(local_28,uVar2);
    FUN_0041d630(uVar1);
    FUN_00862ff0(&local_18,local_20);
    FUN_0041b840(param_1 + 0x58,local_18);
  }
  FUN_0041b840(param_2,*(undefined8 *)(param_1 + 0x58));
  local_10 = 0;
  FUN_0041b800(&local_28);
  FUN_0041b800(&local_20);
  FUN_0041b800(&local_18);
  return local_10;
}

