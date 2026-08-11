/* Ghidra address: 00cb9d10 */
/* Ghidra symbol: FUN_00cb9d10 */


void FUN_00cb9d10(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x1a0) == 0) {
    uVar1 = FUN_00882aa0(&PTR_FUN_00cb4b00,1,param_1);
    *(undefined8 *)(param_1 + 0x1a0) = uVar1;
    *(undefined1 *)(param_1 + 0x1a8) = 1;
  }
  return;
}

