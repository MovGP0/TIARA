/* Ghidra address: 005b32d0 */
/* Ghidra symbol: FUN_005b32d0 */


void FUN_005b32d0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (param_1[0x21] == 0) {
    lVar1 = (**(code **)(*param_1 + 0xc0))(param_1);
    param_1[0x21] = lVar1;
  }
  (**(code **)(*(longlong *)param_1[0x21] + 0x10))((longlong *)param_1[0x21],param_2);
  return;
}

