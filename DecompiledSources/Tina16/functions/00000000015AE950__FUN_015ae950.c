/* Ghidra address: 015ae950 */
/* Ghidra symbol: FUN_015ae950 */


void FUN_015ae950(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 != *(longlong *)(param_1 + 0x38)) {
    FUN_015a9480(*(undefined8 *)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(longlong *)(param_1 + 0x38) = param_2;
    if (*(longlong *)(param_1 + 0x38) == 0) {
      uVar1 = FUN_015b3b70();
      *(undefined8 *)(param_1 + 0x38) = uVar1;
    }
  }
  return;
}

