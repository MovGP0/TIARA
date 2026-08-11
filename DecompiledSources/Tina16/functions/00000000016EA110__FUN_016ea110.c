/* Ghidra address: 016ea110 */
/* Ghidra symbol: FUN_016ea110 */


void FUN_016ea110(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    param_2 = param_1;
  }
  if (*(longlong *)(param_2 + 0x60) != 0) {
    if (*(longlong *)(param_2 + 0x68) == 0) {
      uVar1 = FUN_00409570(*(undefined2 *)(param_2 + 0x58));
      *(undefined8 *)(param_2 + 0x68) = uVar1;
      FUN_00409a70(*(undefined8 *)(param_2 + 0x60),uVar1,*(undefined2 *)(param_2 + 0x58));
    }
    else {
      FUN_00409a70(*(longlong *)(param_2 + 0x60),*(longlong *)(param_2 + 0x68),
                   *(undefined2 *)(param_2 + 0x58));
    }
  }
  return;
}

