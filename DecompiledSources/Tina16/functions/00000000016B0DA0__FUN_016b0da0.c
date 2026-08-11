/* Ghidra address: 016b0da0 */
/* Ghidra symbol: FUN_016b0da0 */


void FUN_016b0da0(longlong param_1,undefined8 param_2,char param_3)

{
  undefined8 uVar1;
  
  if (param_3 != '\0') {
    uVar1 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    *(undefined8 *)(param_1 + 0x30) = uVar1;
  }
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0x30),param_2);
  return;
}

