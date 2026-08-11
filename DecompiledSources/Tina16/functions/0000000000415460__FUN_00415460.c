/* Ghidra address: 00415460 */
/* Ghidra symbol: FUN_00415460 */


void FUN_00415460(undefined8 param_1,short *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  short *psVar2;
  
  uVar1 = 0;
  psVar2 = param_2;
  if (param_2 != (short *)0x0) {
    for (; *psVar2 != 0; psVar2 = psVar2 + 1) {
    }
    uVar1 = (undefined4)(((longlong)psVar2 - (longlong)param_2) / 2);
  }
  FUN_00414a20(param_1,param_2,uVar1,param_3);
  return;
}

