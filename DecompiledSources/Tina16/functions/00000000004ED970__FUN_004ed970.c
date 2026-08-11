/* Ghidra address: 004ed970 */
/* Ghidra symbol: FUN_004ed970 */


void FUN_004ed970(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_004ecc20(param_1,param_2);
  iVar2 = FUN_004ecb70(param_1,param_2,uVar1);
  if (iVar2 < 0) {
    *param_3 = 0;
  }
  else {
    *param_3 = *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x10 + (longlong)iVar2 * 0x18);
  }
  return;
}

