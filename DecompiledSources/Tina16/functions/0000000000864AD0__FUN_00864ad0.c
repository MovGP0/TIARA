/* Ghidra address: 00864ad0 */
/* Ghidra symbol: FUN_00864ad0 */


undefined4 FUN_00864ad0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  longlong local_10;
  
  local_10 = 0;
  *param_3 = 0;
  FUN_0041b800(&local_10);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x120))
                    (*(longlong **)(param_1 + 0x18),param_2,&local_10);
  FUN_0041d630(uVar1);
  if (local_10 == 0) {
    FUN_0041b800(param_3);
  }
  else {
    FUN_00862fb0(param_3,local_10);
  }
  FUN_0041b800(&local_10);
  return 0;
}

