/* Ghidra address: 0198b6a0 */
/* Ghidra symbol: FUN_0198b6a0 */


void FUN_0198b6a0(longlong *param_1,longlong param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
    if (iVar1 != -1) {
      *(undefined8 *)(param_1[1] + (longlong)iVar1 * 8) = 0;
    }
  }
  return;
}

