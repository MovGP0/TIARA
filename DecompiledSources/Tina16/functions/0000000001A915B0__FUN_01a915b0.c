/* Ghidra address: 01a915b0 */
/* Ghidra symbol: FUN_01a915b0 */


undefined4 FUN_01a915b0(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_01a91580(param_1,param_2);
  iVar2 = FUN_01a914d0(param_1,param_2,uVar1);
  if (iVar2 < 0) {
    uVar3 = FUN_0044d710(&PTR_FUN_004347c0,1,PTR_PTR_02002378);
    iVar2 = FUN_004134c0(uVar3);
  }
  return *(undefined4 *)(*(longlong *)(param_1 + 8) + 8 + (longlong)iVar2 * 0xc);
}

