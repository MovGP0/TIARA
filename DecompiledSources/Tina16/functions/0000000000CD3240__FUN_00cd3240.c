/* Ghidra address: 00cd3240 */
/* Ghidra symbol: FUN_00cd3240 */


undefined8 FUN_00cd3240(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x28) == 0) {
    if (*(longlong *)(param_1 + 0x20) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (**(code **)PTR_DAT_02004cf8)(*(longlong *)(param_1 + 0x20));
    }
    uVar1 = FUN_00cd1da0(&DAT_00cc90f0,1,uVar1);
    *(undefined8 *)(param_1 + 0x28) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x28);
}

