/* Ghidra address: 004147f0 */
/* Ghidra symbol: FUN_004147f0 */


void FUN_004147f0(undefined8 *param_1,longlong param_2,int param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_004143b0(param_3,param_4);
  if (param_2 != 0) {
    FUN_00409a70(param_2,uVar1,(longlong)param_3);
  }
  FUN_004144d0(param_1);
  *param_1 = uVar1;
  return;
}

