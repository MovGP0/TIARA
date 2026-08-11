/* Ghidra address: 00bff870 */
/* Ghidra symbol: FUN_00bff870 */


undefined8 FUN_00bff870(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x278))(param_1);
  if ((cVar1 == '\0') && (cVar1 = FUN_00bd10c0(param_1[0xab]), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}

