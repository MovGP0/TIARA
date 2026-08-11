/* Ghidra address: 00b12b60 */
/* Ghidra symbol: FUN_00b12b60 */


void FUN_00b12b60(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  local_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  FUN_004b58d0(param_1,param_2);
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_00b0fa30);
  if (cVar1 != '\0') {
    iVar2 = (**(code **)(*param_1 + 0x28))();
    iVar4 = 0;
    if (-1 < iVar2 + -1) {
      do {
        FUN_00468530(&local_40,iVar4,0xfffffffffffffffc);
        lVar3 = FUN_00b13190(param_2,&local_40,0);
        if (lVar3 != 0) {
          FUN_00468530(&local_58,iVar4,0xfffffffffffffffc);
          FUN_00b13580(param_1,&local_58,lVar3);
        }
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  FUN_00417840(&local_58,&DAT_004013d8,2);
  return;
}

