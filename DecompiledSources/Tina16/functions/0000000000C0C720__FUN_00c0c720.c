/* Ghidra address: 00c0c720 */
/* Ghidra symbol: FUN_00c0c720 */


void FUN_00c0c720(longlong param_1)

{
  undefined8 uVar1;
  
  if (((*(uint *)(param_1 + 0x63a) & 0x20) != 0) && ((*(ushort *)(param_1 + 0x34) & 0x10) == 0)) {
    uVar1 = FUN_0065b870(param_1);
    thunk_FUN_03ea7391(uVar1,0);
  }
  if (*(longlong *)(param_1 + 0x2c0) == 0) {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0xa8))(*(longlong **)(param_1 + 0x4e8));
    *(undefined8 *)(param_1 + 0x2c0) = uVar1;
  }
  FUN_00655750(param_1);
  return;
}

