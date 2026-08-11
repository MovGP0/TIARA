/* Ghidra address: 01615be0 */
/* Ghidra symbol: FUN_01615be0 */


void FUN_01615be0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 9) = 1;
  if (*(longlong *)(param_1 + 0x18) == 0) {
    uVar1 = FUN_016123d0(&DAT_01611258,1);
    *(undefined8 *)(param_1 + 0x18) = uVar1;
  }
  FUN_01615b20(*(undefined8 *)(param_1 + 0x18),param_2);
  return;
}

