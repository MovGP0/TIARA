/* Ghidra address: 014ffe80 */
/* Ghidra symbol: FUN_014ffe80 */


void FUN_014ffe80(longlong param_1)

{
  code *local_28;
  longlong local_20;
  
  if ((*(char *)(param_1 + 0x743) != '\0') || (*(char *)(param_1 + 0x749) != '\0')) {
    *(undefined1 *)(param_1 + 0x74b) = 1;
    if (*(char *)(param_1 + 0x749) == '\0') {
      FUN_014ffa60(param_1,*(undefined8 *)(param_1 + 0x6f0));
    }
    *(undefined1 *)(param_1 + 0x747) = 1;
    *(undefined1 *)(param_1 + 0x748) = 1;
    if (*(char *)(param_1 + 0x740) == '\0') {
      *(undefined1 *)(param_1 + 0x749) = 1;
      (**(code **)(**(longlong **)(param_1 + 0x6d8) + 0x128))(*(longlong **)(param_1 + 0x6d8),0);
      (**(code **)(**(longlong **)(param_1 + 0x6b8) + 0x128))(*(longlong **)(param_1 + 0x6b8),0);
      local_28 = FUN_014ffe80;
      local_20 = param_1;
      FUN_00f836b0(&local_28);
    }
    else {
      FUN_014fd660(param_1);
      if (*(char *)(param_1 + 0x741) == '\0') {
        FUN_01cc6030(*(undefined8 *)PTR_DAT_02001440);
      }
      FUN_014fe830(param_1);
      *(undefined1 *)(param_1 + 0x749) = 0;
      (**(code **)(**(longlong **)(param_1 + 0x6d8) + 0x128))(*(longlong **)(param_1 + 0x6d8),1);
      (**(code **)(**(longlong **)(param_1 + 0x6b8) + 0x128))(*(longlong **)(param_1 + 0x6b8),1);
      (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x128))(*(longlong **)(param_1 + 0x6b0),1);
      *(undefined1 *)(param_1 + 0x74c) = 0;
      *(undefined1 *)(param_1 + 0x74b) = 0;
    }
  }
  return;
}

