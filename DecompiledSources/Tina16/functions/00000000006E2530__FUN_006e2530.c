/* Ghidra address: 006e2530 */
/* Ghidra symbol: FUN_006e2530 */


undefined8 FUN_006e2530(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_0065be20(param_1);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else if ((*(char *)(param_1 + 0x510) == '\0') || (*(longlong *)(param_1 + 0x508) == 0)) {
    uVar2 = FUN_0065b870(param_1);
    uVar2 = FUN_00612030(uVar2);
    uVar2 = FUN_006df650(*(undefined8 *)(param_1 + 0x550),uVar2);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x508);
  }
  return uVar2;
}

