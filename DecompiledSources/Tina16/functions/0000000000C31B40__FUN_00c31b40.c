/* Ghidra address: 00c31b40 */
/* Ghidra symbol: FUN_00c31b40 */


void FUN_00c31b40(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 != *(int *)(param_1 + 0x40)) {
    if (param_2 == -1) {
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
    else {
      uVar1 = FUN_00c2fce0(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x50),param_2);
      *(undefined8 *)(param_1 + 0x38) = uVar1;
    }
    *(int *)(param_1 + 0x40) = param_2;
  }
  return;
}

