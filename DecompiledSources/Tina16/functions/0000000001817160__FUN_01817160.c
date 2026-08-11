/* Ghidra address: 01817160 */
/* Ghidra symbol: FUN_01817160 */


void FUN_01817160(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  local_40 = *param_2;
  uStack_38 = param_2[1];
  uStack_30 = param_2[2];
  FUN_0046bd60(&local_40);
  iVar2 = FUN_01817010(param_1,&local_40);
  if (iVar2 == -1) {
    lVar1 = FUN_004b1ca0(param_1);
    FUN_00467e90(lVar1 + 0x20,&local_40);
    FUN_00461840(lVar1 + 0x28,param_3);
  }
  else {
    lVar1 = FUN_01817000(param_1,iVar2);
    FUN_00461840(lVar1 + 0x28,param_3);
  }
  FUN_00460ba0(&local_40);
  return;
}

