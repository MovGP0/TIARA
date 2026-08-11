/* Ghidra address: 006d5880 */
/* Ghidra symbol: FUN_006d5880 */


void FUN_006d5880(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x4d4) == '\0') {
    cVar1 = FUN_0065be20(param_1);
    if (cVar1 != '\0') {
      uVar2 = FUN_0065b870(param_1);
      thunk_FUN_041b2403(uVar2,5,0,
                         (longlong)
                         CONCAT22(*(undefined2 *)(param_1 + 0x9c),*(undefined2 *)(param_1 + 0x98)));
    }
    FUN_00654450(param_1);
  }
  return;
}

