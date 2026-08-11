/* Ghidra address: 00744480 */
/* Ghidra symbol: FUN_00744480 */


void FUN_00744480(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_00744440(param_1);
  if (((-1 < iVar1) && (iVar1 != param_3)) &&
     (param_3 < *(int *)(*(longlong *)(param_1 + 0x4b0) + 0x10))) {
    FUN_004aed30(*(undefined8 *)(param_1 + 0x4b0),iVar1,param_3);
    FUN_00654450(param_1);
  }
  return;
}

