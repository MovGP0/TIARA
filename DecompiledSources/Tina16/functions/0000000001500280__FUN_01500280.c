/* Ghidra address: 01500280 */
/* Ghidra symbol: FUN_01500280 */


void FUN_01500280(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x260))(*(longlong **)(param_1 + 0x6b0));
  if (cVar1 != *PTR_DAT_020024f8) {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x260))(*(longlong **)(param_1 + 0x6b0))
    ;
    *PTR_DAT_020024f8 = uVar2;
    (**(code **)(**(longlong **)(param_1 + 0x6d8) + 0x128))(*(longlong **)(param_1 + 0x6d8),0);
    (**(code **)(**(longlong **)(param_1 + 0x6b8) + 0x128))(*(longlong **)(param_1 + 0x6b8),0);
    FUN_014fd660(param_1);
    if (*(char *)(param_1 + 0x741) == '\0') {
      FUN_01cc6030(*(undefined8 *)PTR_DAT_02001440);
    }
    FUN_014fe830(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x6d8) + 0x128))(*(longlong **)(param_1 + 0x6d8),1);
    (**(code **)(**(longlong **)(param_1 + 0x6b8) + 0x128))(*(longlong **)(param_1 + 0x6b8),1);
  }
  return;
}

