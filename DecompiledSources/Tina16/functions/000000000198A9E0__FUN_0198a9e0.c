/* Ghidra address: 0198a9e0 */
/* Ghidra symbol: FUN_0198a9e0 */


void FUN_0198a9e0(longlong *param_1,longlong param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + 4) = 1;
    iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
    *(undefined1 *)(param_1 + 4) = 0;
    if (iVar1 != -1) {
      *(undefined8 *)(param_1[1] + (longlong)iVar1 * 8) = 0;
    }
  }
  return;
}

