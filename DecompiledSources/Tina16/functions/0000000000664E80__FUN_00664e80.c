/* Ghidra address: 00664e80 */
/* Ghidra symbol: FUN_00664e80 */


void FUN_00664e80(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x38) != param_2) {
    if (*(longlong *)(param_1 + 0x38) != 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x38);
      *(undefined8 *)(param_1 + 0x38) = 0;
      FUN_00410f20(uVar1);
    }
    *(longlong *)(param_1 + 0x38) = param_2;
  }
  return;
}

