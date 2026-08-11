/* Ghidra address: 01a92160 */
/* Ghidra symbol: FUN_01a92160 */


void FUN_01a92160(longlong param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_01a91580(param_1,param_2);
  iVar2 = FUN_01a914d0(param_1,param_2,uVar1);
  if (iVar2 < 0) {
    *param_3 = 0;
  }
  else {
    *param_3 = *(undefined4 *)(*(longlong *)(param_1 + 8) + 8 + (longlong)iVar2 * 0xc);
  }
  return;
}

