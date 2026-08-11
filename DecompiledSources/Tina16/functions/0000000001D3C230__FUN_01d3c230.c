/* Ghidra address: 01d3c230 */
/* Ghidra symbol: FUN_01d3c230 */


void FUN_01d3c230(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = param_2;
  local_28 = param_3;
  local_20 = param_4;
  uVar1 = FUN_01d3c160(0,&PTR_FUN_01d35528,&local_30);
  (**(code **)(*param_1 + 0x20))(param_1,uVar1);
  return;
}

