/* Ghidra address: 00796040 */
/* Ghidra symbol: FUN_00796040 */


void FUN_00796040(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 local_38;
  undefined8 uStack_30;
  
  uVar2 = FUN_00795f90(param_1,param_2);
  iVar3 = FUN_00795ed0(param_1,param_2,uVar2);
  if (iVar3 < 0) {
    uVar4 = FUN_0044d710(&PTR_FUN_004347c0,1,PTR_PTR_02002378);
    iVar3 = FUN_004134c0(uVar4);
  }
  puVar1 = (undefined8 *)(param_1[1] + 0x10 + (longlong)iVar3 * 0x20);
  local_38 = *puVar1;
  uStack_30 = puVar1[1];
  puVar1 = (undefined8 *)(param_1[1] + 0x10 + (longlong)iVar3 * 0x20);
  *puVar1 = *param_3;
  puVar1[1] = param_3[1];
  (**(code **)(*param_1 + 0x18))(param_1,&local_38,5);
  (**(code **)(*param_1 + 0x18))(param_1,param_3,1);
  return;
}

