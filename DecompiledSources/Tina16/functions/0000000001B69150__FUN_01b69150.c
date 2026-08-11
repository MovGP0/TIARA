/* Ghidra address: 01b69150 */
/* Ghidra symbol: FUN_01b69150 */


void FUN_01b69150(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  bool bVar7;
  
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0xcf0) + 0x260))(*(longlong **)(param_1 + 0xcf0));
  if (-1 < iVar3) {
    bVar7 = false;
    lVar5 = FUN_010e1b10(param_1);
    if (lVar5 != 0) {
      lVar5 = FUN_010e1b10(param_1);
      bVar7 = *(char *)(lVar5 + 0xa9) != '\0';
      uVar6 = FUN_010e1b10(param_1);
      FUN_00805200(uVar6);
    }
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0xcf0) + 0x260))(*(longlong **)(param_1 + 0xcf0))
    ;
    (**(code **)(**(longlong **)(param_1 + 0xda0) + 0xf0))(*(longlong **)(param_1 + 0xda0),uVar4);
    FUN_01b68200(param_1);
    FUN_01b68830(param_1,param_1);
    FUN_01b65820(param_1,param_1);
    FUN_01b655a0(param_1,1);
    FUN_010f6af0(param_1,2,0,0);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x9b0) + 0x128);
    (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(*(longlong *)(param_1 + 0xda0) + 8));
    (**(code **)(**(longlong **)(param_1 + 0x9b0) + 0x18))
              (*(longlong **)(param_1 + 0x9b0),*(undefined1 *)(param_1 + 0x990));
    FUN_010e7b90(*(undefined8 *)(param_1 + 0x9b0));
    if ((bVar7) && (cVar2 = FUN_010e1a60(param_1), cVar2 != '\0')) {
      uVar6 = FUN_010e1b10(param_1);
      FUN_008059a0(uVar6);
      uVar6 = FUN_010e1b10(param_1);
      iVar3 = FUN_007fd800(param_1);
      FUN_00806b40(uVar6,iVar3 + *(int *)(param_1 + 0x9c));
    }
    FUN_01b69a50(param_1);
  }
  return;
}

