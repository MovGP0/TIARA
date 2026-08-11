/* Ghidra address: 00cac660 */
/* Ghidra symbol: FUN_00cac660 */


void FUN_00cac660(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x140) == 0) {
    uVar1 = FUN_00c8bac0(&DAT_00c89a18,1);
    *(undefined8 *)(param_1 + 0x140) = uVar1;
  }
  else {
    FUN_00c8ac30(*(longlong *)(param_1 + 0x140));
  }
  *(undefined4 *)(param_1 + 0x148) = param_2;
  return;
}

