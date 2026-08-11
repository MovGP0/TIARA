/* Ghidra address: 0058d5d0 */
/* Ghidra symbol: FUN_0058d5d0 */


void FUN_0058d5d0(undefined8 param_1,undefined8 *param_2,double param_3)

{
  byte bVar1;
  
  bVar1 = *(byte *)(*(longlong *)*param_2 + 2 + (ulonglong)*(byte *)(*(longlong *)*param_2 + 1));
  if (bVar1 < 3) {
    if (bVar1 == 2) {
      FUN_00591820(&LAB_0058eb70,param_1,param_2,param_3);
    }
    else if (bVar1 == 0) {
      FUN_00591560(&LAB_0058e730,param_1,param_2,(float)param_3);
    }
    else if (bVar1 == 1) {
      FUN_005916c0(&LAB_0058e950,param_1,param_2,param_3);
    }
  }
  else if (bVar1 == 3) {
    FUN_00591970(&LAB_0058ed98,param_1,param_2,(longlong)ROUND(param_3));
  }
  else if (bVar1 == 4) {
    FUN_00591ac0(&LAB_0058efb0,param_1,param_2,(longlong)ROUND(param_3 * 10000.0));
  }
  return;
}

