/* Ghidra address: 00b1f8d0 */
/* Ghidra symbol: FUN_00b1f8d0 */


int FUN_00b1f8d0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  ushort *puVar3;
  ushort uVar4;
  
  iVar1 = FUN_00b1f9f0(param_1,param_3);
  if (iVar1 < 0) {
    puVar3 = (ushort *)FUN_00418560(10,&DAT_00b1be28);
    uVar4 = (ushort)param_3;
    *puVar3 = uVar4;
    FUN_00414b90(puVar3 + 1,param_2);
    FUN_004ae7e0(*(undefined8 *)(param_1 + 0x10),puVar3);
    if (*(ushort *)(param_1 + 8) < uVar4) {
      *(ushort *)(param_1 + 8) = uVar4;
    }
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10) + -1;
  }
  else {
    lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x10),iVar1);
    FUN_00414b90(lVar2 + 2,param_2);
  }
  return iVar1;
}

