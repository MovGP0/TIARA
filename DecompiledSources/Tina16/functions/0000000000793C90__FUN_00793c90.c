/* Ghidra address: 00793c90 */
/* Ghidra symbol: FUN_00793c90 */


undefined8 * FUN_00793c90(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar2 = FUN_00793c60(param_1,param_3);
  iVar3 = FUN_00793bb0(param_1,param_3,uVar2);
  if (iVar3 < 0) {
    uVar4 = FUN_0044d710(&PTR_FUN_004347c0,1,PTR_PTR_02002378);
    iVar3 = FUN_004134c0(uVar4);
  }
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 8) + 0x10 + (longlong)iVar3 * 0x28);
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  param_2[2] = puVar1[2];
  return param_2;
}

