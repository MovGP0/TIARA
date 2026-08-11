/* Ghidra address: 00cee2e0 */
/* Ghidra symbol: FUN_00cee2e0 */


longlong * FUN_00cee2e0(undefined8 param_1,longlong *param_2,byte param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  
  FUN_00419260(param_2,&DAT_0086e978,1,(longlong)(int)(((param_4 & 0xff) - (uint)param_3) + 1));
  iVar2 = 0;
  if (*param_2 != 0) {
    iVar2 = (int)*(undefined8 *)(*param_2 + -8);
  }
  iVar1 = 0;
  if (-1 < iVar2 + -1) {
    do {
      *(byte *)(*param_2 + (longlong)iVar1) = param_3 + (char)iVar1;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return param_2;
}

