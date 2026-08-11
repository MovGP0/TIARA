/* Ghidra address: 00873e40 */
/* Ghidra symbol: FUN_00873e40 */


longlong * FUN_00873e40(undefined8 param_1,longlong *param_2)

{
  FUN_00419260(param_2,&DAT_0086e978,1,2);
  *(undefined1 *)*param_2 = 0xff;
  *(undefined1 *)(*param_2 + 1) = 0xfe;
  return param_2;
}

