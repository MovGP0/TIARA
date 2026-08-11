/* Ghidra address: 00b12c90 */
/* Ghidra symbol: FUN_00b12c90 */


void FUN_00b12c90(longlong param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  
  FUN_004b5950(param_1);
  if (((*(int *)(param_1 + 0x28) == 0) && (*(longlong *)(param_1 + 0x80) != 0)) &&
     (*(int *)(*(longlong *)(param_1 + 0x80) + 0x61c) == 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x80);
    pcVar2 = (code *)FUN_00411550(uVar1,0xff95);
    (*pcVar2)(uVar1);
  }
  return;
}

