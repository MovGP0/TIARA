/* Ghidra address: 0157df10 */
/* Ghidra symbol: FUN_0157df10 */


longlong * FUN_0157df10(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  if ((char)param_1[1] == '\0') {
    uVar1 = FUN_0044d710(&PTR_FUN_01576898,1,PTR_PTR_02001f60);
    FUN_004134c0(uVar1);
  }
  FUN_00419260(param_2,&DAT_004210c0,1,(longlong)*(int *)(param_1[6] + 0x10));
  iVar3 = 0;
  if (*param_2 != 0) {
    iVar3 = (int)*(undefined8 *)(*param_2 + -8);
  }
  iVar2 = 0;
  if (iVar3 - 1U < 0x80000000) {
    do {
      (**(code **)(*param_1 + 8))(param_1,local_30,iVar2);
      FUN_00414ad0(*param_2 + (longlong)iVar2 * 8,local_30[0]);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00414480(local_30);
  return param_2;
}

