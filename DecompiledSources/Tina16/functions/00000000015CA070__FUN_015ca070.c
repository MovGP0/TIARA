/* Ghidra address: 015ca070 */
/* Ghidra symbol: FUN_015ca070 */


void FUN_015ca070(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  FUN_015ca1c0(param_1);
  FUN_015ca240(param_1);
  FUN_00414bf0(*(longlong *)(param_1 + 0x238) + 0x30,param_2);
  cVar1 = FUN_015c9e90(param_1);
  if ((cVar1 == '\0') && (*(char *)(param_1 + 0x103) == '\0')) {
    FUN_015c8e90(*(undefined8 *)(param_1 + 0x238),0,0);
  }
  return;
}

