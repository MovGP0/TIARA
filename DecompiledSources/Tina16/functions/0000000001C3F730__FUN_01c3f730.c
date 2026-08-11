/* Ghidra address: 01c3f730 */
/* Ghidra symbol: FUN_01c3f730 */


void FUN_01c3f730(longlong param_1,undefined8 param_2,short *param_3)

{
  undefined8 local_28;
  longlong local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  if (*param_3 == 0xd) {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x730),&local_28);
    FUN_0043ea00(local_20,local_28);
    if (local_20[0] == 0) {
      (**(code **)(**(longlong **)(param_1 + 0x730) + 0x268))(*(longlong **)(param_1 + 0x730),0);
    }
  }
  FUN_00414480(&local_28);
  FUN_00414480(local_20);
  return;
}

