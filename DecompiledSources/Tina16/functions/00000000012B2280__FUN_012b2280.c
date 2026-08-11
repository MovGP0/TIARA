/* Ghidra address: 012b2280 */
/* Ghidra symbol: FUN_012b2280 */


void FUN_012b2280(longlong param_1,undefined8 param_2,short *param_3)

{
  undefined8 local_20;
  
  if (*param_3 == 0xd) {
    *param_3 = 0;
    FUN_004113f0(*(undefined8 *)(param_1 + 0x870),&PTR_FUN_01105a20);
    local_20 = FUN_00b90090(*(undefined8 *)(param_1 + 0xd28));
    (**(code **)(**(longlong **)(param_1 + 0xdb8) + 0xf8))
              (*(longlong **)(param_1 + 0xdb8),param_1 + 0xd93,&local_20,0);
    FUN_00b90440(*(undefined8 *)(param_1 + 0xd28),local_20);
    FUN_012b1580(param_1,param_1);
  }
  return;
}

