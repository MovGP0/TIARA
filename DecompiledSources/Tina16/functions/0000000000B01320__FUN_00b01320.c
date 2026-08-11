/* Ghidra address: 00b01320 */
/* Ghidra symbol: FUN_00b01320 */


void FUN_00b01320(longlong param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x700) + 0x260))(*(longlong **)(param_1 + 0x700));
  if (iVar1 != -1) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x700) + 0x260))(*(longlong **)(param_1 + 0x700))
    ;
    FUN_00b01560(param_1,*(undefined8 *)
                          (*(longlong *)
                            (*(longlong *)(*(longlong *)(param_1 + 0x730) + 0x48) + 8 +
                            (longlong)iVar1 * 0x10) + 8 + *(longlong *)(param_2 + 0x18) * 0x10),1);
  }
  return;
}

