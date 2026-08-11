/* Ghidra address: 0078a130 */
/* Ghidra symbol: FUN_0078a130 */


void FUN_0078a130(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_00742eb0(*(longlong *)(param_1 + 0x68),0);
    uVar1 = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = 0;
    FUN_00410f20(uVar1);
  }
  return;
}

