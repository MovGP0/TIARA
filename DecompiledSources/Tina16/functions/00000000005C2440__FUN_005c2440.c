/* Ghidra address: 005c2440 */
/* Ghidra symbol: FUN_005c2440 */


undefined8 FUN_005c2440(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_005c2410(param_1,param_3);
  iVar2 = FUN_005c2340(param_1,param_3,uVar1);
  if (iVar2 < 0) {
    uVar3 = FUN_0044d710(&PTR_FUN_004347c0,1,PTR_PTR_02002378);
    iVar2 = FUN_004134c0(uVar3);
  }
  FUN_00417c40(param_2,*(longlong *)(param_1 + 8) + 8 + (longlong)iVar2 * 0x38,&DAT_005bc4e0);
  return param_2;
}

