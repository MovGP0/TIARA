/* Ghidra address: 019925c0 */
/* Ghidra symbol: FUN_019925c0 */


undefined8 FUN_019925c0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40;
  undefined4 local_2c;
  
  local_2c = 0;
  iVar4 = *(int *)(param_1 + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      uVar2 = FUN_00b94e60(param_1,iVar3);
      FUN_01992530(auStack_68,uVar2);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  uVar1 = *PTR_DAT_02003020;
  *PTR_DAT_02003020 = 1;
  local_48 = 0;
  local_40 = 0;
  FUN_019916f0(param_1,param_2,param_3,0);
  *PTR_DAT_02003020 = uVar1;
  FUN_019921e0(param_1,param_2,param_3);
  FUN_00b95360(param_1);
  return 1;
}

