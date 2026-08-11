/* Ghidra address: 01d34be0 */
/* Ghidra symbol: FUN_01d34be0 */


void FUN_01d34be0(longlong param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_2 != param_3) {
    if ((param_3 < 0) || (*(int *)(param_1 + 0x10) <= param_3)) {
      FUN_01d34ef0(param_1);
    }
    uVar1 = FUN_01d347d0(param_1,param_2);
    FUN_01d34800(param_1,param_2);
    FUN_01d348b0(param_1,param_3,uVar1);
  }
  return;
}

