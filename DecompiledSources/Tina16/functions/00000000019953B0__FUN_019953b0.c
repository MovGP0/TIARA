/* Ghidra address: 019953b0 */
/* Ghidra symbol: FUN_019953b0 */


void FUN_019953b0(longlong param_1)

{
  longlong lVar1;
  
  *(undefined1 *)(param_1 + 0x380) = 0;
  if (*(longlong *)PTR_DAT_02004e40 != 0) {
    lVar1 = FUN_01c8a330(*(undefined8 *)PTR_DAT_02004e40,param_1);
    if (((lVar1 != 0) && (*(longlong *)(lVar1 + 0x10) != 0)) &&
       (*(longlong *)(lVar1 + 0x10) != param_1)) {
      FUN_019953b0(*(undefined8 *)(lVar1 + 0x10));
    }
  }
  return;
}

