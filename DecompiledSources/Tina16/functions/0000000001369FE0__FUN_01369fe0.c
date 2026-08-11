/* Ghidra address: 01369fe0 */
/* Ghidra symbol: FUN_01369fe0 */


void FUN_01369fe0(longlong param_1)

{
  longlong *plVar1;
  
  if ((*(longlong *)(param_1 + 0x10) != 0) && (*(char *)(param_1 + 0x18) == '\x02')) {
    plVar1 = (longlong *)FUN_0198d430(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x27a8));
    (**(code **)(*plVar1 + 0xa0))
              (plVar1,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),
               *(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28));
  }
  return;
}

