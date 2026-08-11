/* Ghidra address: 00bcf7e0 */
/* Ghidra symbol: FUN_00bcf7e0 */


undefined8 FUN_00bcf7e0(longlong param_1,undefined8 param_2,uint param_3)

{
  if (param_3 < *(uint *)(param_1 + 0x40)) {
    FUN_00414ad0(param_2,*(undefined8 *)
                          (*(longlong *)(param_1 + 0x38) + (longlong)(int)param_3 * 0x28));
  }
  else {
    FUN_00414480(param_2);
  }
  return param_2;
}

