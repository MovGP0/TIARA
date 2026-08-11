/* Ghidra address: 00813930 */
/* Ghidra symbol: FUN_00813930 */


void FUN_00813930(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_00785c20(param_1);
  if ((*(longlong *)(param_1 + 0x68) != 0) || (*(longlong *)(param_1 + 0x48) != 0)) {
    uVar1 = FUN_00786090(param_1);
    thunk_FUN_041cc6e2(uVar1,0,0,0,0,0,0x37);
  }
  FUN_00810830(param_1);
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}

