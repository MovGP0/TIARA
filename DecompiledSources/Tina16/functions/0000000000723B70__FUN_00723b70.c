/* Ghidra address: 00723b70 */
/* Ghidra symbol: FUN_00723b70 */


void FUN_00723b70(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  code *pcVar5;
  byte local_29;
  
  param_2[6] = 0;
  param_2[7] = 0;
  if ((*param_2 != 0x110) || ((*(uint *)(param_1 + 0x1b) & 0x10000) != 0)) {
    if (*param_2 == 0x4e) {
      lVar2 = *(longlong *)(param_2 + 4);
      iVar1 = *(int *)(lVar2 + 0x10);
      if (iVar1 < -0x25a) {
        if (iVar1 == -0x25b) {
          pcVar5 = (code *)FUN_00411550(param_1,0xffffffeb);
          (*pcVar5)(param_1);
        }
        else if (iVar1 == -0x260) {
          if (*(longlong *)(param_2 + 4) != 0) {
            local_29 = 1;
            pcVar5 = (code *)FUN_00411550(param_1,0xffe9);
            (*pcVar5)(param_1,lVar2,&local_29);
            *(ulonglong *)(param_2 + 6) = (ulonglong)local_29;
          }
        }
        else if (iVar1 == -0x25f) {
          iVar1 = *(int *)(*(longlong *)(lVar2 + 0x18) + 0x2c);
          if (iVar1 != *(int *)((longlong)param_1 + 0xec)) {
            *(int *)((longlong)param_1 + 0xec) = iVar1;
            pcVar5 = (code *)FUN_00411550(param_1,0xffea);
            (*pcVar5)(param_1);
          }
        }
        else if ((iVar1 == -0x25e) &&
                (cVar3 = FUN_00723b20(param_1,*(undefined8 *)(lVar2 + 0x18)), cVar3 == '\0')) {
          param_2[6] = 1;
          param_2[7] = 0;
          uVar4 = (**(code **)(*param_1 + 0x90))(param_1);
          thunk_FUN_03c9d277(uVar4,0,*(undefined8 *)(param_2 + 6));
          return;
        }
      }
      else if (iVar1 == -0x25a) {
        pcVar5 = (code *)FUN_00411550(param_1,0xffec);
        (*pcVar5)(param_1);
      }
      else if (iVar1 == -0x259) {
        pcVar5 = (code *)FUN_00411550(param_1,0xffee);
        (*pcVar5)(param_1);
      }
    }
    FUN_00722630(param_1,param_2);
  }
  return;
}

