/* Ghidra address: 019952b0 */
/* Ghidra symbol: FUN_019952b0 */


void FUN_019952b0(longlong param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x428) + 0xb0))
                    (*(longlong **)(param_1 + 0x428),
                     *(undefined8 *)(*(longlong *)(param_2 + 0x1a8) + 0x38));
  if (iVar1 < 0) {
    (**(code **)(**(longlong **)(param_1 + 0x428) + 0x80))
              (*(longlong **)(param_1 + 0x428),
               *(undefined8 *)(*(longlong *)(param_2 + 0x1a8) + 0x38),param_2);
  }
  return;
}

