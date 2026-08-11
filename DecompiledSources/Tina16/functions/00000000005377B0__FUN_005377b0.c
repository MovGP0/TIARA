/* Ghidra address: 005377b0 */
/* Ghidra symbol: FUN_005377b0 */


undefined8 FUN_005377b0(undefined8 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_005360d0(param_1);
  if ((cVar1 == '\0') && ((undefined *)*param_1 == &DAT_00401008)) {
    uVar2 = CONCAT71(0x4010,*(char *)(param_1 + 2) != '\0');
  }
  else {
    uVar2 = FUN_00560290(param_1,1);
  }
  return uVar2;
}

