/* Ghidra address: 00ce9700 */
/* Ghidra symbol: FUN_00ce9700 */


int FUN_00ce9700(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  local_38 = 0;
  local_3c = -1;
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10) + -1;
  iVar1 = local_3c;
  if (param_4 <= iVar4) {
    iVar4 = (iVar4 - param_4) + 1;
    do {
      lVar3 = FUN_00ce8fd0(param_1,param_4);
      cVar2 = FUN_00879070(*(undefined8 *)(lVar3 + 0x30),param_2);
      if (cVar2 != '\0') {
        FUN_00ce6c20(local_30,*(undefined8 *)(lVar3 + 0x18));
        FUN_00ce6c20(&local_38,param_3);
        cVar2 = FUN_00879070(local_30[0],local_38);
        iVar1 = param_4;
        if (cVar2 != '\0') break;
      }
      param_4 = param_4 + 1;
      iVar4 = iVar4 + -1;
      iVar1 = local_3c;
    } while (iVar4 != 0);
  }
  local_3c = iVar1;
  FUN_00414560(&local_38,2);
  return local_3c;
}

