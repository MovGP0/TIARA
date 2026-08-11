/* Ghidra address: 006e05e0 */
/* Ghidra symbol: FUN_006e05e0 */


void FUN_006e05e0(longlong param_1,char param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_006decf0(*(undefined8 *)(param_1 + 0x38));
  thunk_FUN_041b2403(uVar1,0xb,param_2 == '\0',0);
  if (param_2 == '\0') {
    FUN_0064e770(*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 8));
  }
  return;
}

