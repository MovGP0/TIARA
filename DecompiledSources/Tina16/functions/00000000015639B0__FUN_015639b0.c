/* Ghidra address: 015639b0 */
/* Ghidra symbol: FUN_015639b0 */


undefined8 FUN_015639b0(undefined8 param_1,undefined8 param_2,longlong *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 local_20;
  
  local_20 = 0;
  iVar1 = (**(code **)(*param_3 + 0x1c8))(param_3);
  FUN_00414480(param_2);
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      iVar2 = (**(code **)(*param_3 + 0x210))(param_3,iVar4);
      if (iVar2 == param_4) {
        FUN_01cfdb80(param_3,&local_20,iVar4);
        FUN_00414ad0(param_2,local_20);
        goto LAB_01563a5e;
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,L"TConvertVHDL.FindPin");
  FUN_004134c0(uVar3);
LAB_01563a5e:
  FUN_00414480(&local_20);
  return param_2;
}

