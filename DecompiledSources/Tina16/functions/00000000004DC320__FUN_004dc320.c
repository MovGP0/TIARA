/* Ghidra address: 004dc320 */
/* Ghidra symbol: FUN_004dc320 */


void FUN_004dc320(longlong param_1,uint param_2)

{
  char cVar1;
  
  FUN_00411a80(param_1,param_2);
  cVar1 = FUN_004dc5b0(param_1);
  if (cVar1 == '\0') {
    cVar1 = FUN_004dc580(param_1);
    if ((cVar1 == '\0') && ((*(uint *)(param_1 + 0x20) & 4) != 0)) {
      FUN_004dc3d0(param_1);
      FUN_004dc690(param_1);
    }
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x28));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x30));
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

