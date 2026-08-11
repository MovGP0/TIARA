/* Ghidra address: 00d21ab0 */
/* Ghidra symbol: FUN_00d21ab0 */


void FUN_00d21ab0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 != *(longlong *)(param_1 + 0x38)) {
    FUN_00cd57f0(*(undefined8 *)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(longlong *)(param_1 + 0x38) = param_2;
    if (param_2 == 0) {
      uVar1 = FUN_00d0cca0();
      *(undefined8 *)(param_1 + 0x38) = uVar1;
    }
  }
  return;
}

