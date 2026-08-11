/* Ghidra address: 004b9400 */
/* Ghidra symbol: FUN_004b9400 */


void FUN_004b9400(longlong *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  char *local_28;
  uint local_1c [3];
  
  local_28 = (char *)0x0;
  FUN_00419260(&local_28,&DAT_00406578,1,0x100);
  uVar4 = 0;
  if (local_28 != (char *)0x0) {
    uVar4 = *(undefined8 *)(local_28 + -8);
  }
  FUN_0040d200(local_28,uVar4,0);
  iVar3 = 0;
  if (local_28 != (char *)0x0) {
    iVar3 = (int)*(undefined8 *)(local_28 + -8);
  }
  uVar2 = (**(code **)(*param_1 + 0x28))(param_1,local_28,0,iVar3 + -1);
  if (0x20 < (int)uVar2) {
    cVar1 = FUN_0043e2c0(&DAT_01dc76a8,local_28,0x20);
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x50))(param_1,0x20,0);
      iVar3 = 0;
      if (local_28 != (char *)0x0) {
        iVar3 = (int)*(undefined8 *)(local_28 + -8);
      }
      uVar2 = (**(code **)(*param_1 + 0x28))(param_1,local_28,0,iVar3 + -1);
      local_1c[0] = 0;
      iVar3 = FUN_004b92d0(local_1c,local_28,8);
      if (iVar3 == 0xaffff) {
        FUN_004b92d0(local_1c,local_28,4);
        (**(code **)(*param_1 + 0x50))(param_1,(ulonglong)local_1c[0] - (ulonglong)uVar2,1);
      }
      else {
        uVar4 = FUN_0044d710(&PTR_FUN_00472008,1,PTR_PTR_02003148);
        FUN_004134c0(uVar4);
      }
      goto code_r0x004b95cc;
    }
  }
  if (((*local_28 == -1) && (local_28[1] == '\n')) && (local_28[2] == '\0')) {
    for (local_1c[0] = 3; local_28[local_1c[0]] != '\0'; local_1c[0] = local_1c[0] + 1) {
    }
    (**(code **)(*param_1 + 0x50))(param_1,((ulonglong)local_1c[0] + 7) - (ulonglong)uVar2,1);
  }
  else {
    uVar4 = FUN_0044d710(&PTR_FUN_00472008,1,PTR_PTR_02003148);
    FUN_004134c0(uVar4);
  }
code_r0x004b95cc:
  FUN_00419430(&local_28,&DAT_00406578);
  return;
}

