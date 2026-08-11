/* Ghidra address: 0104fc30 */
/* Ghidra symbol: FUN_0104fc30 */


void FUN_0104fc30(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_0104fb30(param_1);
  if (cVar1 != '\0') {
    FUN_01053e80(param_1,0);
    FUN_00f629b0(*(undefined8 *)(param_1 + 0x980),0);
    FUN_00805200(param_1);
  }
  return;
}

