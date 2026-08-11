/* Ghidra address: 00568800 */
/* Ghidra symbol: FUN_00568800 */


longlong * FUN_00568800(undefined8 param_1,longlong *param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  
  FUN_00419260(param_2,&DAT_0052f648,1,(longlong)*(int *)(param_3 + 0x10));
  iVar2 = *(int *)(param_3 + 0x10);
  uVar1 = 0;
  if (-1 < iVar2 + -1) {
    do {
      if (*(uint *)(param_3 + 0x10) <= uVar1) {
        FUN_00594f90();
      }
      *(undefined8 *)(*param_2 + (longlong)(int)uVar1 * 8) =
           *(undefined8 *)(*(longlong *)(param_3 + 8) + (longlong)(int)uVar1 * 8);
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return param_2;
}

