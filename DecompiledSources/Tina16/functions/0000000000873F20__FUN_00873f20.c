/* Ghidra address: 00873f20 */
/* Ghidra symbol: FUN_00873f20 */


longlong * FUN_00873f20(undefined8 param_1,longlong *param_2)

{
  FUN_00419260(param_2,&DAT_0086e978,1,2);
  *(undefined1 *)*param_2 = 0xfe;
  *(undefined1 *)(*param_2 + 1) = 0xff;
  return param_2;
}

