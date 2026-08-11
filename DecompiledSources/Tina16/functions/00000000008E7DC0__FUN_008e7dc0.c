/* Ghidra address: 008e7dc0 */
/* Ghidra symbol: FUN_008e7dc0 */


longlong * FUN_008e7dc0(undefined8 param_1,longlong *param_2)

{
  FUN_00419260(param_2,&DAT_00406578,1,3);
  *(undefined1 *)*param_2 = 0xef;
  *(undefined1 *)(*param_2 + 1) = 0xbb;
  *(undefined1 *)(*param_2 + 2) = 0xbf;
  return param_2;
}

