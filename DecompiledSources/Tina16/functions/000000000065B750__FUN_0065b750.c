/* Ghidra address: 0065b750 */
/* Ghidra symbol: FUN_0065b750 */


undefined8 FUN_0065b750(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  plVar2 = (longlong *)FUN_007f9b70(param_1,1);
  if (plVar2 != (longlong *)0x0) {
    for (; param_1 != plVar2; param_1 = (longlong *)param_1[0xf]) {
      if (*(char *)((longlong)param_1 + 0xa9) == '\0') {
        return 0;
      }
      cVar1 = (**(code **)(*param_1 + 0xf0))(param_1);
      if (cVar1 == '\0') {
        return 0;
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}

