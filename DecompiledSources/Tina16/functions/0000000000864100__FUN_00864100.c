/* Ghidra address: 00864100 */
/* Ghidra symbol: FUN_00864100 */


undefined4 FUN_00864100(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 local_28;
  undefined4 local_20;
  
  local_28 = 0;
  *param_2 = 0;
  if (*(longlong *)(param_1 + 0x30) == 0) {
    uVar2 = FUN_0041b800(&local_28);
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0xb8))
                      (*(longlong **)(param_1 + 0x18),uVar2);
    FUN_0041d630(uVar1);
    lVar3 = FUN_00863630(&DAT_00862820,1,local_28);
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = lVar3 + 0x68;
    }
    FUN_0041b840(param_1 + 0x30,lVar3);
  }
  FUN_0041b840(param_2,*(undefined8 *)(param_1 + 0x30));
  local_20 = 0;
  FUN_0041b800(&local_28);
  return local_20;
}

