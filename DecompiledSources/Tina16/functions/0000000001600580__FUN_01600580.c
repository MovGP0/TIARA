/* Ghidra address: 01600580 */
/* Ghidra symbol: FUN_01600580 */


undefined4 FUN_01600580(longlong param_1)

{
  longlong lVar1;
  undefined4 local_1c [3];
  
  local_1c[0] = 0;
  lVar1 = (**(code **)**(undefined8 **)(param_1 + 0xf8))(*(undefined8 **)(param_1 + 0xf8));
  if (lVar1 < 1) {
    local_1c[0] = (undefined4)param_1;
    FUN_004b89e0(*(undefined8 *)(param_1 + 0xf8),local_1c,4);
    FUN_004b6dc0(*(undefined8 *)(param_1 + 0xf8),0);
  }
  else {
    FUN_004b6dc0(*(undefined8 *)(param_1 + 0xf8),0);
    FUN_004b84c0(*(undefined8 *)(param_1 + 0xf8),local_1c,4);
    FUN_004b6dc0(*(undefined8 *)(param_1 + 0xf8),0);
  }
  return local_1c[0];
}

