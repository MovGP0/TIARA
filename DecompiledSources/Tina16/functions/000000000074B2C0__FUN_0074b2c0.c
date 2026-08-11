/* Ghidra address: 0074b2c0 */
/* Ghidra symbol: FUN_0074b2c0 */


void FUN_0074b2c0(longlong param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0x4b1) == '\0') {
    uVar2 = FUN_004aeba0(*(undefined8 *)(param_1 + 0x498));
    *(undefined4 *)(param_1 + 0x4a8) = uVar2;
    FUN_0064d480(param_1);
    pcVar1 = (code *)FUN_00411550(param_1,0xffea);
    (*pcVar1)(param_1);
  }
  return;
}

