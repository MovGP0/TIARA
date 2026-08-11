/* Ghidra address: 00fc17c0 */
/* Ghidra symbol: FUN_00fc17c0 */


void FUN_00fc17c0(longlong param_1)

{
  int iVar1;
  
  (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x268))
            (*(longlong **)(param_1 + 0x6b0),*(undefined4 *)(param_1 + 0xaf0));
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x260))(*(longlong **)(param_1 + 0x6b0));
  if (iVar1 == -1) {
    (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x268))(*(longlong **)(param_1 + 0x6b0),0);
  }
  return;
}

