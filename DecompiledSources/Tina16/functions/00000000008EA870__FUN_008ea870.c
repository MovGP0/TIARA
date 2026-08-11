/* Ghidra address: 008ea870 */
/* Ghidra symbol: FUN_008ea870 */


longlong * FUN_008ea870(undefined8 param_1,longlong *param_2)

{
  FUN_00419260(param_2,&DAT_00406578,1,4);
  *(undefined1 *)*param_2 = 0;
  *(undefined1 *)(*param_2 + 1) = 0;
  *(undefined1 *)(*param_2 + 2) = 0xff;
  *(undefined1 *)(*param_2 + 3) = 0xfe;
  return param_2;
}

