/* Ghidra address: 009e35d0 */
/* Ghidra symbol: FUN_009e35d0 */


undefined8 * FUN_009e35d0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 local_2a [2];
  
  param_4 = param_4 + 1;
  if (param_4 < 1) {
    FUN_00419430(param_2,&DAT_00406578);
  }
  else {
    uVar2 = FUN_009e3560(param_1,(longlong)param_4);
    FUN_00419260(param_2,&DAT_00406578,1,uVar2);
    FUN_009e46f0(param_1,local_2a);
    iVar1 = FUN_009e3910(param_1,param_3,*param_2,param_4,1,local_2a);
    FUN_00419260(param_2,&DAT_00406578,1,(longlong)iVar1);
  }
  return param_2;
}

