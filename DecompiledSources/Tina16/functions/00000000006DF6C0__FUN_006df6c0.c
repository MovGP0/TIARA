/* Ghidra address: 006df6c0 */
/* Ghidra symbol: FUN_006df6c0 */


void FUN_006df6c0(longlong param_1,char param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_006decf0(param_1);
  thunk_FUN_041b2403(uVar1,0xb,param_2 == '\0',0);
  if (param_2 == '\0') {
    FUN_0064e770(*(undefined8 *)(param_1 + 8));
  }
  return;
}

