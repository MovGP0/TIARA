/* Ghidra address: 00872ee0 */
/* Ghidra symbol: FUN_00872ee0 */


undefined8 * FUN_00872ee0(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  FUN_00419430(param_2,&DAT_0086e978);
  iVar1 = FUN_00872b90(param_1,param_3);
  if (0 < iVar1) {
    FUN_00419260(param_2,&DAT_0086e978,1,(longlong)iVar1);
    uVar3 = 0;
    if (param_3 != 0) {
      uVar3 = *(undefined4 *)(param_3 + -4);
    }
    uVar2 = FUN_00416740(param_3);
    (**(code **)(*param_1 + 8))(param_1,uVar2,uVar3,*param_2,iVar1);
  }
  return param_2;
}

