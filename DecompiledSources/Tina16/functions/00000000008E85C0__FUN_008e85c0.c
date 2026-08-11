/* Ghidra address: 008e85c0 */
/* Ghidra symbol: FUN_008e85c0 */


longlong * FUN_008e85c0(undefined8 param_1,longlong *param_2)

{
  FUN_00419260(param_2,&DAT_00406578,1,2);
  *(undefined1 *)*param_2 = 0xfe;
  *(undefined1 *)(*param_2 + 1) = 0xff;
  return param_2;
}

