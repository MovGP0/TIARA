/* Ghidra address: 006dd8f0 */
/* Ghidra symbol: FUN_006dd8f0 */


void FUN_006dd8f0(longlong param_1,char param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x38) == '\0') {
    uVar1 = FUN_006dc7a0();
    thunk_FUN_041b2403(uVar1,0x1116,(longlong)(int)-(uint)(param_2 != '\0'),0);
  }
  return;
}

