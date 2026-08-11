/* Ghidra address: 008e8c80 */
/* Ghidra symbol: FUN_008e8c80 */


longlong * FUN_008e8c80(undefined8 param_1,longlong *param_2)

{
  FUN_00419260(param_2,&DAT_00406578,1,2);
  *(undefined1 *)*param_2 = 0xff;
  *(undefined1 *)(*param_2 + 1) = 0xfe;
  return param_2;
}

