/* Ghidra address: 008968f0 */
/* Ghidra symbol: FUN_008968f0 */


bool FUN_008968f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 int param_5)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int local_10;
  int local_c;
  
  if (param_5 == -2) {
    piVar3 = (int *)0x0;
  }
  else {
    local_10 = param_5 / 1000;
    local_c = (param_5 % 1000) * 1000;
    piVar3 = &local_10;
  }
  uVar1 = (**(code **)PTR_PTR_02005ad0)(0,param_2,param_3,param_4,piVar3);
  iVar2 = FUN_0089c9c0(*(undefined8 *)PTR_DAT_020050b0,uVar1);
  return 0 < iVar2;
}

