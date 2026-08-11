/* Ghidra address: 004b5620 */
/* Ghidra symbol: FUN_004b5620 */


longlong * FUN_004b5620(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar1 = (**(code **)(*param_1 + 0x28))(param_1);
  FUN_00419260(param_2,&DAT_0048cb50,1,(longlong)iVar1);
  iVar1 = (**(code **)(*param_1 + 0x28))();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      uVar2 = (**(code **)(*param_1 + 0x30))(param_1,iVar3);
      *(undefined8 *)(*param_2 + (longlong)iVar3 * 8) = uVar2;
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return param_2;
}

