/* Ghidra address: 00459810 */
/* Ghidra symbol: FUN_00459810 */


undefined8 * FUN_00459810(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_3 != 0) {
    uVar2 = *(ulonglong *)(param_3 + -8);
  }
  iVar1 = FUN_004593b0(param_1,param_3,0,uVar2 & 0xffffffff);
  FUN_00419260(param_2,&DAT_00406578,1,(longlong)iVar1);
  uVar2 = 0;
  if (param_3 != 0) {
    uVar2 = *(ulonglong *)(param_3 + -8);
  }
  FUN_00459ab0(param_1,param_3,0,uVar2 & 0xffffffff,*param_2,0);
  return param_2;
}

