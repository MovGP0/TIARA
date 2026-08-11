/* Ghidra address: 0186d030 */
/* Ghidra symbol: FUN_0186d030 */


void FUN_0186d030(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  
  cVar2 = FUN_004113d0(param_2,&PTR_FUN_01929d50);
  if (cVar2 != '\0') {
    lVar1 = *(longlong *)(param_3 + 0x27);
    if ((lVar1 == 0) || (*(int *)(lVar1 + 0x10) < 2)) {
      puVar3 = (undefined8 *)FUN_006a6030();
      uVar4 = FUN_01966ad0(param_2);
      (**(code **)*puVar3)(puVar3,uVar4);
    }
    else {
      iVar6 = *(int *)(lVar1 + 0x10);
      iVar5 = 0;
      if (-1 < iVar6 + -1) {
        do {
          puVar3 = (undefined8 *)FUN_004aeac0(*(undefined8 *)(param_3 + 0x27),iVar5);
          cVar2 = FUN_00411580(*puVar3,&PTR_FUN_01929d50);
          if (cVar2 != '\0') {
            puVar3 = (undefined8 *)FUN_006a6030();
            uVar4 = FUN_004aeac0(*(undefined8 *)(param_3 + 0x27),iVar5);
            uVar4 = FUN_01966ad0(uVar4);
            (**(code **)*puVar3)(puVar3,uVar4);
          }
          iVar5 = iVar5 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
  }
  *(undefined1 *)(param_3 + 8) = 1;
  *(undefined1 *)(param_3 + 9) = 1;
  return;
}

