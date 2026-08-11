/* Ghidra address: 01150280 */
/* Ghidra symbol: FUN_01150280 */


void FUN_01150280(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if (*(char *)(param_1 + 0x9f) != '\0') {
    lVar2 = FUN_01d33100(&PTR_FUN_01cb2378,1);
    FUN_01b20020(local_20,*(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0x128),&LAB_01150354);
    FUN_01cbfc40(lVar2,local_20[0]);
    *(undefined2 *)(lVar2 + 0x10) = **(undefined2 **)(param_1 + 0x90);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xd8) + 0x10);
    (**(code **)(*plVar1 + 0x50))(plVar1,lVar2);
    *(undefined1 *)(param_1 + 0x9f) = 0;
  }
  FUN_00414480(local_20);
  return;
}

