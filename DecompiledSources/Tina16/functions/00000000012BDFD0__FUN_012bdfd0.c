/* Ghidra address: 012bdfd0 */
/* Ghidra symbol: FUN_012bdfd0 */


void FUN_012bdfd0(longlong param_1,undefined8 param_2,ushort param_3)

{
  int iVar1;
  
  iVar1 = FUN_01d31a40(param_2);
  if (iVar1 == 0) {
    FUN_01d30f00(param_2,param_1 + 8,2);
    if (param_3 < 0x17) {
      FUN_01d32040(param_2,*(undefined8 *)(param_1 + 0x10));
    }
    else {
      FUN_01d32430(param_2,*(undefined8 *)(param_1 + 0x10));
    }
  }
  return;
}

