/* Ghidra address: 006e8bc0 */
/* Ghidra symbol: FUN_006e8bc0 */


void FUN_006e8bc0(longlong param_1,char param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(*(longlong *)(param_1 + 0x38) + 0x391) != '\0') {
    uVar1 = FUN_0065b870(*(longlong *)(param_1 + 0x38));
    thunk_FUN_041b2403(uVar1,0xb,param_2 == '\0',0);
  }
  if (param_2 == '\0') {
    FUN_0064e770(*(undefined8 *)(param_1 + 0x38));
    FUN_0064fca0(*(undefined8 *)(param_1 + 0x38),0xb012,0,0);
  }
  return;
}

