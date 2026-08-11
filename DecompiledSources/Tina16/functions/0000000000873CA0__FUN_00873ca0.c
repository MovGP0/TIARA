/* Ghidra address: 00873ca0 */
/* Ghidra symbol: FUN_00873ca0 */


longlong * FUN_00873ca0(undefined8 param_1,longlong *param_2)

{
  FUN_00419260(param_2,&DAT_0086e978,1,3);
  *(undefined1 *)*param_2 = 0xef;
  *(undefined1 *)(*param_2 + 1) = 0xbb;
  *(undefined1 *)(*param_2 + 2) = 0xbf;
  return param_2;
}

