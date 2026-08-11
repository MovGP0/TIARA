/* Ghidra address: 012be900 */
/* Ghidra symbol: FUN_012be900 */


void FUN_012be900(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_012be9c0(param_1,param_2);
  if (lVar1 == 0) {
    uVar2 = FUN_012be130(&DAT_012bd240,1,param_2);
    FUN_004ae7e0(*(undefined8 *)(param_1 + 0x20),uVar2);
    FUN_012be9c0(param_1,param_2);
  }
  return;
}

