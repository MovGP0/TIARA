/* Ghidra address: 00b67610 */
/* Ghidra symbol: FUN_00b67610 */


void FUN_00b67610(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00b172d0(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x28));
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  FUN_00b172f0(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x28),*(undefined4 *)(param_1 + 0x28)
              );
  FUN_00b17360(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x28),*(undefined2 *)(param_1 + 0x24)
              );
  FUN_00b172f0(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x28),*(undefined4 *)(param_1 + 0x2c)
              );
  return;
}

