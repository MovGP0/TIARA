/* Ghidra address: 01be5c90 */
/* Ghidra symbol: FUN_01be5c90 */


longlong FUN_01be5c90(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FUN_01be1d70(param_1);
  cVar1 = FUN_004113d0(lVar2,&PTR_FUN_01bdf860);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x420))(param_1,lVar2);
  }
  if (*(char *)((longlong)param_1 + 0x591) == '\0') {
    cVar1 = FUN_01bfea90(*(undefined8 *)(lVar2 + 800));
    if (cVar1 != '\0') {
      *(undefined1 *)(param_1 + 0xb2) = 1;
      FUN_0064dbe0(lVar2,0);
    }
  }
  (**(code **)(*param_1 + 0x448))(param_1);
  return lVar2;
}

