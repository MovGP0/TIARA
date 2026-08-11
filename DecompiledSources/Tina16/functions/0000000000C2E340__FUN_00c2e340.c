/* Ghidra address: 00c2e340 */
/* Ghidra symbol: FUN_00c2e340 */


void FUN_00c2e340(longlong param_1,char param_2)

{
  undefined4 uVar1;
  
  if (param_2 == '\0') {
    *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) & 0xfe;
  }
  else {
    *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) | 1;
    uVar1 = FUN_00c2e3e0(param_1);
    FUN_00c2e3f0(param_1,uVar1);
  }
  return;
}

