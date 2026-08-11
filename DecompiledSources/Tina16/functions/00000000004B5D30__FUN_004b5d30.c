/* Ghidra address: 004b5d30 */
/* Ghidra symbol: FUN_004b5d30 */


undefined8 FUN_004b5d30(longlong param_1,undefined8 param_2,uint param_3)

{
  if (*(uint *)(param_1 + 0x40) <= param_3) {
    FUN_004b3510(param_1,PTR_PTR_02004940,param_3);
  }
  FUN_00414ad0(param_2,*(undefined8 *)
                        (*(longlong *)(param_1 + 0x38) + (longlong)(int)param_3 * 0x10));
  return param_2;
}

