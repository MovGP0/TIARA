/* Ghidra address: 00c08410 */
/* Ghidra symbol: FUN_00c08410 */


undefined8 FUN_00c08410(longlong *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 local_48;
  longlong *local_40;
  longlong local_38;
  int local_30;
  int iStack_2c;
  
  local_38 = 0;
  iVar3 = *param_2;
  iVar1 = param_2[1];
  if (0 < iVar1) {
    iVar2 = (**(code **)(*(longlong *)param_1[0x9d] + 0x28))((longlong *)param_1[0x9d]);
    if (iVar1 <= iVar2) {
      (**(code **)(*(longlong *)param_1[0x9d] + 0x18))
                ((longlong *)param_1[0x9d],&local_38,iVar1 + -1);
      local_48 = *(undefined8 *)(*param_1 + 0x370);
      local_40 = param_1;
      iVar3 = FUN_00bcc2f0(local_38,iVar3,&local_48);
      if (iVar3 == 0) {
        iVar3 = 0;
        if (local_38 != 0) {
          iVar3 = *(int *)(local_38 + -4);
        }
        iVar3 = iVar3 + 1;
      }
    }
  }
  local_30 = iVar3;
  iStack_2c = iVar1;
  FUN_00414480(&local_38);
  return CONCAT44(iStack_2c,local_30);
}

