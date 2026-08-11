/* Ghidra address: 004b5550 */
/* Ghidra symbol: FUN_004b5550 */


longlong * FUN_004b5550(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  iVar1 = (**(code **)(*param_1 + 0x28))(param_1);
  FUN_00419260(param_2,&DAT_004210c0,1,(longlong)iVar1);
  iVar1 = (**(code **)(*param_1 + 0x28))();
  iVar2 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*param_1 + 0x18))(param_1,local_30,iVar2);
      FUN_00414ad0(*param_2 + (longlong)iVar2 * 8,local_30[0]);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414480(local_30);
  return param_2;
}

