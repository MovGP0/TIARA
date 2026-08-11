/* Ghidra address: 012b2340 */
/* Ghidra symbol: FUN_012b2340 */


void FUN_012b2340(longlong param_1)

{
  undefined8 local_20;
  
  FUN_004113f0(*(undefined8 *)(param_1 + 0x870),&PTR_FUN_01105a20);
  (**(code **)(**(longlong **)(param_1 + 0xdb8) + 0xf8))
            (*(longlong **)(param_1 + 0xdb8),param_1 + 0xd93,&local_20,1);
  FUN_00b90440(*(undefined8 *)(param_1 + 0xd28),local_20);
  return;
}

