/* Ghidra address: 00ef7d90 */
/* Ghidra symbol: FUN_00ef7d90 */


void FUN_00ef7d90(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_004095c0(0x3f8);
  *param_1 = lVar1;
  if (*param_1 == 0) {
    FUN_00ef4260(1,param_2);
  }
  else {
    *(undefined2 *)*param_1 = 0;
    *(undefined8 *)(*param_1 + 0x3f0) = 0;
  }
  return;
}

