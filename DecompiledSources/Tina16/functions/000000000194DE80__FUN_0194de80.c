/* Ghidra address: 0194de80 */
/* Ghidra symbol: FUN_0194de80 */


void FUN_0194de80(undefined8 param_1,int *param_2)

{
  if (*param_2 == 0x401) {
    FUN_0065b830(*(undefined8 *)(param_2 + 2));
  }
  else if (*param_2 == 0x402) {
    (**(code **)(**(longlong **)(param_2 + 2) + 0x1e8))(*(longlong **)(param_2 + 2));
  }
  else {
    FUN_007fe200();
  }
  return;
}

