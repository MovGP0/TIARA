/* Ghidra address: 01369450 */
/* Ghidra symbol: FUN_01369450 */


void FUN_01369450(longlong param_1)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0x48) != '\0') {
    plVar1 = (longlong *)FUN_0198d430(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x27a8));
    (**(code **)(*plVar1 + 0xa8))(plVar1,DAT_01f374b0,DAT_01f374b4,&DAT_02108260);
    *(undefined1 *)(param_1 + 0x48) = 0;
  }
  return;
}

