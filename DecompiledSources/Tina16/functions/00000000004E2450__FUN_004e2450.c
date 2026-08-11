/* Ghidra address: 004e2450 */
/* Ghidra symbol: FUN_004e2450 */


undefined8 FUN_004e2450(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_004e2420(param_1,param_3);
  iVar2 = FUN_004e2370(param_1,param_3,uVar1);
  if (iVar2 < 0) {
    uVar3 = FUN_0044d710(&PTR_FUN_004347c0,1,PTR_PTR_02002378);
    iVar2 = FUN_004134c0(uVar3);
  }
  FUN_0041b840(param_2,*(undefined8 *)(*(longlong *)(param_1 + 8) + 8 + (longlong)iVar2 * 0x10));
  return param_2;
}

