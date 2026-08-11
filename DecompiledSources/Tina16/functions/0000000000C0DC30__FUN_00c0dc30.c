/* Ghidra address: 00c0dc30 */
/* Ghidra symbol: FUN_00c0dc30 */


void FUN_00c0dc30(longlong *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_38 [4];
  int local_34;
  int local_2c;
  
  cVar1 = FUN_0065be20(param_1);
  if ((((cVar1 != '\0') && (0 < param_2)) &&
      (iVar2 = (**(code **)(*(longlong *)param_1[0x9d] + 0x28))((longlong *)param_1[0x9d]),
      param_2 <= iVar2)) && (*(char *)((longlong)param_1 + 0xa9) != '\0')) {
    if (((char)param_1[0x93] == '\0') && (cVar1 = FUN_00c10e70(param_1), cVar1 == '\0')) {
      iVar2 = *(int *)((longlong)param_1 + 0x534);
      if (param_2 < iVar2) {
        return;
      }
      if (iVar2 + (int)param_1[0xa1] < param_2) {
        return;
      }
      uVar3 = FUN_0064d0b0(param_1);
      FUN_00498350(local_38,(int)param_1[0x122],
                   *(int *)((longlong)param_1 + 0x52c) * (param_2 - iVar2),uVar3,0);
      local_2c = local_34 + *(int *)((longlong)param_1 + 0x52c);
      if ((*(ushort *)(param_1 + 199) & 4) != 0) {
        FUN_00423a60(param_1 + 0xc5,local_38,param_1 + 0xc5);
        return;
      }
      (**(code **)(*param_1 + 0x268))(param_1,local_38,0);
      return;
    }
    FUN_00bf3990(param_1,param_2,param_2);
  }
  return;
}

