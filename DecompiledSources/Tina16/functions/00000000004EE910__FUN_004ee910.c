/* Ghidra address: 004ee910 */
/* Ghidra symbol: FUN_004ee910 */


undefined8 FUN_004ee910(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_004ee8e0(param_1,param_2);
  iVar2 = FUN_004ee830(param_1,param_2,uVar1);
  if (iVar2 < 0) {
    uVar3 = FUN_0044d710(&PTR_FUN_004347c0,1,PTR_PTR_02002378);
    iVar2 = FUN_004134c0(uVar3);
  }
  return *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10 + (longlong)iVar2 * 0x18);
}

