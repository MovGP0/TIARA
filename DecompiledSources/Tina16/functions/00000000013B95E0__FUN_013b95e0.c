/* Ghidra address: 013b95e0 */
/* Ghidra symbol: FUN_013b95e0 */


undefined8 FUN_013b95e0(undefined8 param_1,uint param_2)

{
  FUN_00414ad0(param_1,L".txt");
  if ((param_2 & 4) != 0) {
    FUN_00414ad0(param_1,L".xsf");
  }
  if ((param_2 & 8) != 0) {
    FUN_00414ad0(param_1,L".mic");
  }
  return param_1;
}

