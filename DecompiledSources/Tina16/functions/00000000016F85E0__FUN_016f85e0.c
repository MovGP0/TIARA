/* Ghidra address: 016f85e0 */
/* Ghidra symbol: FUN_016f85e0 */


void FUN_016f85e0(undefined8 param_1,char param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  
  if (((*(longlong *)PTR_DAT_020038e8 != 0) && (*(longlong *)PTR_DAT_02003c48 != 0)) &&
     (*(longlong *)(*(longlong *)PTR_DAT_02003c48 + 0x138) != 0)) {
    if (param_2 == '\b') {
      FUN_01cc47e0(*(undefined8 *)PTR_DAT_020038e8,param_3);
    }
    else {
      FUN_01cc4620(*(undefined8 *)PTR_DAT_020038e8,param_3);
    }
    cVar1 = (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02003c48 + 0x138) + 0x28))();
    cVar3 = '\0';
    do {
      lVar2 = (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02003c48 + 0x138) + 0x30))
                        (*(longlong **)(*(longlong *)PTR_DAT_02003c48 + 0x138),cVar3);
      if ((*(char *)(lVar2 + 0x18) != '\0') && (param_2 != '\b')) {
        uVar4 = FUN_016f84e0(param_1,cVar3);
        FUN_01cc46b0(*(undefined8 *)PTR_DAT_020038e8,cVar3,uVar4);
        if (*(longlong *)(*(longlong *)PTR_DAT_02003c48 + 0x30) != 0) {
          FUN_0132dbe0(*(longlong *)(*(longlong *)PTR_DAT_02003c48 + 0x30),cVar3,uVar4);
        }
      }
      cVar3 = cVar3 + '\x01';
      cVar1 = cVar1 + -1;
    } while (cVar1 != '\0');
  }
  return;
}

