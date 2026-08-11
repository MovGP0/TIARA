/* Ghidra address: 017e1290 */
/* Ghidra symbol: FUN_017e1290 */


undefined8 FUN_017e1290(undefined8 param_1,uint param_2)

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

