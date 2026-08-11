/* Ghidra address: 00b9c240 */
/* Ghidra symbol: FUN_00b9c240 */


void FUN_00b9c240(longlong param_1,longlong param_2)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x28) != param_2) {
    FUN_00b9c140(param_1);
    if (*(char *)(param_1 + 0x30) != '\0') {
      FUN_00410f20(*(undefined8 *)(param_1 + 0x28));
    }
    *(longlong *)(param_1 + 0x28) = param_2;
    cVar1 = FUN_0045aee0(param_2);
    *(bool *)(param_1 + 0x30) = cVar1 == '\0';
  }
  return;
}

