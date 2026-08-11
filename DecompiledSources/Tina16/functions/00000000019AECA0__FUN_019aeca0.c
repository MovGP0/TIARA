/* Ghidra address: 019aeca0 */
/* Ghidra symbol: FUN_019aeca0 */


void FUN_019aeca0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x420) + 0xb0))
                    (*(longlong **)(param_1 + 0x420),param_2);
  if (iVar1 == -1) {
    (**(code **)(**(longlong **)(param_1 + 0x420) + 0x78))(*(longlong **)(param_1 + 0x420),param_2);
  }
  return;
}

