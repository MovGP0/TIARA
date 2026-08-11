/* Ghidra address: 008739e0 */
/* Ghidra symbol: FUN_008739e0 */


longlong * FUN_008739e0(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 == 0x4b0) {
    FUN_00419260(param_2,&DAT_0086e978,1,2);
    *(undefined1 *)*param_2 = 0xff;
    *(undefined1 *)(*param_2 + 1) = 0xfe;
  }
  else if (iVar1 == 0x4b1) {
    FUN_00419260(param_2,&DAT_0086e978,1,2);
    *(undefined1 *)*param_2 = 0xfe;
    *(undefined1 *)(*param_2 + 1) = 0xff;
  }
  else if (iVar1 == 0xfde9) {
    FUN_00419260(param_2,&DAT_0086e978,1,3);
    *(undefined1 *)*param_2 = 0xef;
    *(undefined1 *)(*param_2 + 1) = 0xbb;
    *(undefined1 *)(*param_2 + 2) = 0xbf;
  }
  else {
    FUN_00419430(param_2,&DAT_0086e978);
  }
  return param_2;
}

