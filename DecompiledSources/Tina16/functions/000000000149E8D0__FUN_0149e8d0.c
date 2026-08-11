/* Ghidra address: 0149e8d0 */
/* Ghidra symbol: FUN_0149e8d0 */


undefined8 FUN_0149e8d0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  uVar3 = 0;
  plVar2 = (longlong *)FUN_01aebb40(&PTR_FUN_01466f90,1,*(undefined8 *)PTR_DAT_02004030);
  (**(code **)(*param_1 + 0x50))(param_1,param_2,&local_38);
  FUN_0146a9a0(plVar2,param_1[5]);
  iVar1 = (**(code **)(*plVar2 + 0x2d0))(plVar2);
  if (iVar1 == 1) {
    uVar3 = 1;
    FUN_01a5eb60(param_1[5],plVar2[0x11c]);
    (**(code **)(*param_1 + 0x50))(param_1,param_2,&local_48);
    if (param_2 != (longlong *)0x0) {
      (**(code **)(*param_2 + 0x30))(param_2,local_38 + -5,local_34 + -5,local_30 + 5,local_2c + 5);
      (**(code **)(*param_2 + 0x30))(param_2,local_48 + -5,local_44 + -5,local_40 + 5,local_3c + 5);
    }
  }
  FUN_00410f20(plVar2);
  return uVar3;
}

