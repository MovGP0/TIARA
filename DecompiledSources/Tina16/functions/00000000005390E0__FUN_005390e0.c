/* Ghidra address: 005390e0 */
/* Ghidra symbol: FUN_005390e0 */


longlong * FUN_005390e0(longlong *param_1,longlong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  local_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  FUN_00419260(param_1,&DAT_00492e48,1,(longlong)(param_3 + 1));
  iVar2 = 0;
  if (*param_1 != 0) {
    iVar2 = (int)*(undefined8 *)(*param_1 + -8);
  }
  iVar1 = 0;
  if (iVar2 - 1U < 0x80000000) {
    do {
      FUN_00541750(&local_48,param_2);
      FUN_00417c40(*param_1 + (longlong)iVar1 * 0x20,&local_48,&DAT_00527bf8);
      iVar1 = iVar1 + 1;
      param_2 = param_2 + 0x10;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00417740(&local_48,&DAT_00527bf8);
  return param_1;
}

