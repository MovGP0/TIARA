/* Ghidra address: 004086a0 */
/* Ghidra symbol: FUN_004086a0 */


undefined8 FUN_004086a0(undefined8 param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  char cVar2;
  
  if (((999 < param_3) || (cVar2 = FUN_00408610(param_1,param_2 + -200), cVar2 == '\0')) ||
     (cVar2 = FUN_00408610(param_1,param_2 + -0x78), cVar2 == '\0')) {
    return 0;
  }
  puVar1 = *(undefined8 **)(param_2 + -0x78);
  if ((*(longlong *)(param_2 + -200) == param_2) &&
     ((puVar1 == (undefined8 *)0x0 ||
      ((cVar2 = FUN_00408610(param_1,puVar1), cVar2 != '\0' &&
       (cVar2 = FUN_004086a0(param_1,*puVar1,param_3 + 1), cVar2 != '\0')))))) {
    return 1;
  }
  return 0;
}

