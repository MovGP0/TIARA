/* Ghidra address: 00c51820 */
/* Ghidra symbol: FUN_00c51820 */


void FUN_00c51820(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_004113d0(param_3,&PTR_FUN_00434b98);
  if ((cVar1 == '\0') && (*(longlong *)(param_1 + 0x98) != 0)) {
    (**(code **)(param_1 + 0x98))(*(undefined8 *)(param_1 + 0xa0),param_2,param_3);
  }
  return;
}

