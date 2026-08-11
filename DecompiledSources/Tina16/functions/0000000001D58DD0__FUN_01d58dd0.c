/* Ghidra address: 01d58dd0 */
/* Ghidra symbol: FUN_01d58dd0 */


undefined8 FUN_01d58dd0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_01d57440(param_1 + 0x20,param_2,param_3,param_4);
  if (cVar1 == '\0') {
    cVar1 = FUN_01d57440(param_1 + 0x48,param_2,param_3,param_4);
    if (cVar1 == '\0') {
      cVar1 = FUN_01d57440(param_1 + 0x70,param_2,param_3,param_4);
      if (cVar1 == '\0') {
        uVar2 = 0;
        goto LAB_01d58e2d;
      }
    }
  }
  uVar2 = 1;
LAB_01d58e2d:
  if (*(char *)(param_1 + 0x98) == '\x01') {
    uVar2 = FUN_01164e00(param_1 + 0xa0,param_2,param_3,param_4);
  }
  return uVar2;
}

