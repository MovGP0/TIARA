/* Ghidra address: 00c082f0 */
/* Ghidra symbol: FUN_00c082f0 */


undefined8 FUN_00c082f0(longlong *param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 local_48;
  longlong *local_40;
  longlong local_38;
  int local_30;
  int iStack_2c;
  
  local_38 = 0;
  iVar4 = *param_2;
  iVar1 = param_2[1];
  if (0 < iVar1) {
    iVar3 = (**(code **)(*(longlong *)param_1[0x9d] + 0x28))((longlong *)param_1[0x9d]);
    if (iVar1 <= iVar3) {
      (**(code **)(*(longlong *)param_1[0x9d] + 0x18))
                ((longlong *)param_1[0x9d],&local_38,iVar1 + -1);
      iVar3 = 0;
      if (local_38 != 0) {
        iVar3 = *(int *)(local_38 + -4);
      }
      if (iVar3 + 1 <= iVar4) {
        iVar4 = iVar3 + 1;
      }
      if (1 < iVar4) {
        cVar2 = (**(code **)(*param_1 + 0x370))
                          (param_1,*(undefined2 *)(local_38 + -2 + (longlong)(iVar4 + -1) * 2));
        if (cVar2 == '\0') {
          local_48 = *(undefined8 *)(*param_1 + 0x370);
          local_40 = param_1;
          iVar4 = FUN_00bcc350(local_38,iVar4 + -1,&local_48);
          iVar4 = iVar4 + 1;
        }
      }
    }
  }
  local_30 = iVar4;
  iStack_2c = iVar1;
  FUN_00414480(&local_38);
  return CONCAT44(iStack_2c,local_30);
}

