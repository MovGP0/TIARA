/* Ghidra address: 008e97f0 */
/* Ghidra symbol: FUN_008e97f0 */


longlong * FUN_008e97f0(undefined8 param_1,longlong *param_2)

{
  FUN_00419260(param_2,&DAT_00406578,1,4);
  *(undefined1 *)*param_2 = 0;
  *(undefined1 *)(*param_2 + 1) = 0;
  *(undefined1 *)(*param_2 + 2) = 0xfe;
  *(undefined1 *)(*param_2 + 3) = 0xff;
  return param_2;
}

