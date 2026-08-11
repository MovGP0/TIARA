/* Ghidra address: 008eb090 */
/* Ghidra symbol: FUN_008eb090 */


longlong * FUN_008eb090(undefined8 param_1,longlong *param_2)

{
  FUN_00419260(param_2,&DAT_00406578,1,4);
  *(undefined1 *)*param_2 = 0xfe;
  *(undefined1 *)(*param_2 + 1) = 0xff;
  *(undefined1 *)(*param_2 + 2) = 0;
  *(undefined1 *)(*param_2 + 3) = 0;
  return param_2;
}

