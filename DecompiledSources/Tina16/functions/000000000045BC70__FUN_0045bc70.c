/* Ghidra address: 0045bc70 */
/* Ghidra symbol: FUN_0045bc70 */


undefined8 * FUN_0045bc70(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2 != 0) {
    iVar2 = *(int *)(param_2 + -4);
  }
  FUN_00419260(param_1,&DAT_00406578,1,(longlong)iVar2);
  uVar1 = FUN_00415ab0(param_2);
  FUN_00409a70(uVar1,*param_1,(longlong)iVar2);
  return param_1;
}

