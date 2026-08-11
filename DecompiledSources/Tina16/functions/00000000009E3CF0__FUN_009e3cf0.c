/* Ghidra address: 009e3cf0 */
/* Ghidra symbol: FUN_009e3cf0 */


undefined8 * FUN_009e3cf0(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 local_2a [10];
  
  iVar1 = 0;
  if (param_3 != 0) {
    iVar1 = *(int *)(param_3 + -4);
  }
  uVar2 = FUN_009e3560(param_1,(longlong)(iVar1 * 2));
  FUN_00419260(param_2,&DAT_00406578,1,uVar2);
  FUN_009e46f0(param_1,local_2a);
  iVar1 = 0;
  if (param_3 != 0) {
    iVar1 = *(int *)(param_3 + -4);
  }
  iVar1 = FUN_009e3910(param_1,param_3,*param_2,iVar1 * 2,2,local_2a);
  FUN_00419260(param_2,&DAT_00406578,1,(longlong)iVar1);
  return param_2;
}

