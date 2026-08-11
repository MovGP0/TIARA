/* Ghidra address: 006826a0 */
/* Ghidra symbol: FUN_006826a0 */


void FUN_006826a0(longlong param_1,char param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_0065be20(*(undefined8 *)(param_1 + 0x38));
  if (cVar2 != '\0') {
    uVar1 = FUN_0065b870(*(undefined8 *)(param_1 + 0x38));
    thunk_FUN_041b2403(uVar1,0xb,param_2 == '\0',0);
    if (param_2 == '\0') {
      FUN_0064fca0(*(undefined8 *)(param_1 + 0x38),0xb019,0,0);
      FUN_0064e770(*(undefined8 *)(param_1 + 0x38));
    }
  }
  return;
}

