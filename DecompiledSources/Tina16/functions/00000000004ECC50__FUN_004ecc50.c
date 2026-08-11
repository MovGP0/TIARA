/* Ghidra address: 004ecc50 */
/* Ghidra symbol: FUN_004ecc50 */


undefined4 FUN_004ecc50(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_004ecc20(param_1,param_2);
  iVar2 = FUN_004ecb70(param_1,param_2,uVar1);
  if (iVar2 < 0) {
    uVar3 = FUN_0044d710(&PTR_FUN_004347c0,1,PTR_PTR_02002378);
    iVar2 = FUN_004134c0(uVar3);
  }
  return *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x10 + (longlong)iVar2 * 0x18);
}

