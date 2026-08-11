/* Ghidra address: 01576310 */
/* Ghidra symbol: FUN_01576310 */


bool FUN_01576310(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  local_40 = *param_3;
  uStack_38 = param_3[1];
  uStack_30 = param_3[2];
  FUN_004179d0(&local_40,&DAT_00e021a8);
  lVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 8),param_2);
  FUN_00417c40(lVar3 + 0x28,lVar3 + 0x10,&DAT_00e021a8);
  FUN_00417c40(lVar3 + 0x10,&local_40,&DAT_00e021a8);
  iVar2 = *(int *)(lVar3 + 0x30);
  iVar1 = *(int *)(lVar3 + 0x18);
  FUN_00417740(&local_40,&DAT_00e021a8);
  return iVar2 != iVar1;
}

