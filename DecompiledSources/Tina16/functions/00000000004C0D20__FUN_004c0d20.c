/* Ghidra address: 004c0d20 */
/* Ghidra symbol: FUN_004c0d20 */


void FUN_004c0d20(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  char cVar1;
  code *pcVar2;
  int local_2c [3];
  
  pcVar2 = (code *)FUN_004a3140(*(undefined8 *)*param_3);
  if ((pcVar2 != (code *)0x0) && (cVar1 = (*pcVar2)(param_4,local_2c), cVar1 != '\0')) {
    FUN_0058af20(param_2,param_3,(longlong)local_2c[0]);
    return;
  }
  FUN_004bdee0();
  return;
}

