/* Ghidra address: 00c084f0 */
/* Ghidra symbol: FUN_00c084f0 */


undefined8 FUN_00c084f0(longlong *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 local_48;
  longlong *local_40;
  longlong local_38;
  int local_30;
  int iStack_2c;
  
  local_38 = 0;
  iVar3 = *param_2;
  iVar4 = param_2[1];
  if (0 < iVar4) {
    iVar2 = (**(code **)(*(longlong *)param_1[0x9d] + 0x28))((longlong *)param_1[0x9d]);
    if (iVar4 <= iVar2) {
      (**(code **)(*(longlong *)param_1[0x9d] + 0x18))
                ((longlong *)param_1[0x9d],&local_38,iVar4 + -1);
      iVar2 = 0;
      if (local_38 != 0) {
        iVar2 = *(int *)(local_38 + -4);
      }
      if (iVar2 + 1 <= iVar3) {
        iVar3 = iVar2 + 1;
      }
      if (iVar3 < 2) {
        if (1 < iVar4) {
          (**(code **)(*(longlong *)param_1[0x9d] + 0x18))
                    ((longlong *)param_1[0x9d],&local_38,iVar4 + -2);
          iVar3 = 0;
          if (local_38 != 0) {
            iVar3 = *(int *)(local_38 + -4);
          }
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + -1;
        }
      }
      else {
        cVar1 = (**(code **)(*param_1 + 0x370))
                          (param_1,*(undefined2 *)(local_38 + -2 + (longlong)(iVar3 + -1) * 2));
        if (cVar1 != '\0') {
          local_48 = *(undefined8 *)(*param_1 + 0x360);
          local_40 = param_1;
          iVar3 = FUN_00bcc350(local_38,iVar3 + -1,&local_48);
        }
        if (0 < iVar3) {
          local_48 = *(undefined8 *)(*param_1 + 0x370);
          local_40 = param_1;
          iVar3 = FUN_00bcc350(local_38,iVar3 + -1,&local_48);
          iVar3 = iVar3 + 1;
        }
        if (iVar3 == 0) {
          if (iVar4 < 2) {
            iVar3 = 1;
          }
          else {
            (**(code **)(*(longlong *)param_1[0x9d] + 0x18))
                      ((longlong *)param_1[0x9d],&local_38,iVar4 + -2);
            iVar3 = 0;
            if (local_38 != 0) {
              iVar3 = *(int *)(local_38 + -4);
            }
            iVar3 = iVar3 + 1;
            iVar4 = iVar4 + -1;
          }
        }
      }
    }
  }
  local_30 = iVar3;
  iStack_2c = iVar4;
  FUN_00414480(&local_38);
  return CONCAT44(iStack_2c,local_30);
}

