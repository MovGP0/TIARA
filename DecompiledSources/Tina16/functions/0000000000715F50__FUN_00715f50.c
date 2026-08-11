/* Ghidra address: 00715f50 */
/* Ghidra symbol: FUN_00715f50 */


void FUN_00715f50(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  longlong *local_38;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  local_38 = (longlong *)0x0;
  if (param_3 != 0) {
    FUN_00414ad0(param_1 + 0x40,param_3);
  }
  if (*(int *)(*(longlong *)(param_1 + 0x28) + 0x10) == 0) {
    uVar3 = FUN_0044d710(&PTR_FUN_00712030,1,PTR_PTR_020022e8);
    FUN_004134c0(uVar3);
  }
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x28) + 0x10);
  uVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar1 = *(longlong *)(param_1 + 0x28);
      if (*(uint *)(lVar1 + 0x10) <= uVar4) {
        FUN_00594f90();
      }
      FUN_0041b840(local_30,*(undefined8 *)
                             (*(longlong *)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar4 * 8) + 8
                             ));
      FUN_0041b890(&local_38,local_30[0],&LAB_00716098);
      cVar2 = (**(code **)(*local_38 + 0x60))(local_38,param_2);
      if (cVar2 != '\0') {
        (**(code **)(*local_38 + 0x68))(local_38,param_2);
        break;
      }
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_0041b800(&local_38);
  FUN_0041b800(local_30);
  return;
}

