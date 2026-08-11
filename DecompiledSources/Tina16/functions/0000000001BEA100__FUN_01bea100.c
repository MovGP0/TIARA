/* Ghidra address: 01bea100 */
/* Ghidra symbol: FUN_01bea100 */


void FUN_01bea100(longlong param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if ((char)param_2 == '\0') {
    *(undefined1 *)(param_1 + 0x370) = 0;
  }
  uVar2 = FUN_01bfaa40(*(undefined8 *)(param_1 + 800));
  cVar1 = FUN_004113d0(uVar2,&PTR_FUN_01bf1690);
  if (cVar1 != '\0') {
    lVar3 = FUN_01bfaa40(*(undefined8 *)(param_1 + 800));
    cVar1 = FUN_004113d0(*(undefined8 *)(lVar3 + 0x80),&PTR_FUN_01bdf860);
    if (cVar1 != '\0') {
      lVar3 = FUN_01bfaa40(*(undefined8 *)(param_1 + 800));
      (**(code **)(**(longlong **)(lVar3 + 0x80) + 600))(*(longlong **)(lVar3 + 0x80),1);
    }
  }
  FUN_01c065c0(param_1,param_2);
  if (*(longlong *)(param_1 + 0x368) != 0) {
    FUN_01be2180(*(longlong *)(param_1 + 0x368),param_1);
  }
  return;
}

