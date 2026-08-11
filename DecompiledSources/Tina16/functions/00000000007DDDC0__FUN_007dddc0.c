/* Ghidra address: 007dddc0 */
/* Ghidra symbol: FUN_007dddc0 */


void FUN_007dddc0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (((param_2 == 0) || ((*(ushort *)(param_2 + 0x34) & 8) == 0)) &&
     (lVar1 = *(longlong *)(param_1 + 0xd0), lVar1 != param_2)) {
    if (lVar1 != 0) {
      *(undefined8 *)(lVar1 + 0xd8) = 0;
    }
    *(longlong *)(param_1 + 0xd0) = param_2;
    if (param_2 != 0) {
      *(longlong *)(param_2 + 0xd8) = param_1;
      FUN_004d26c0(param_2,param_1);
    }
    FUN_007dde90(param_1);
  }
  return;
}

