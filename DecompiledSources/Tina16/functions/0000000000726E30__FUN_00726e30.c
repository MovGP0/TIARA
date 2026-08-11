/* Ghidra address: 00726e30 */
/* Ghidra symbol: FUN_00726e30 */


longlong * FUN_00726e30(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_00419260(param_2,&DAT_0069b140,1,(longlong)*(int *)(*(longlong *)(param_1 + 0x10) + 0x10));
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar1 = FUN_00726ee0(param_1,iVar2);
      uVar1 = FUN_00726d80(uVar1);
      *(undefined8 *)(*param_2 + (longlong)iVar2 * 0x10) = uVar1;
      uVar1 = FUN_00726ee0(param_1,iVar2);
      uVar1 = FUN_00726df0(uVar1);
      *(undefined8 *)(*param_2 + 8 + (longlong)iVar2 * 0x10) = uVar1;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return param_2;
}

