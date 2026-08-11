/* Ghidra address: 00d3aec0 */
/* Ghidra symbol: FUN_00d3aec0 */


void FUN_00d3aec0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 local_58 [20];
  undefined4 local_44;
  uint local_30;
  uint local_2c;
  
  if ((*(char *)((longlong)param_1 + 0x2a) != '\0') &&
     (cVar2 = FUN_00788df0(param_1), cVar2 != '\0')) {
    local_30 = (uint)*(ushort *)(param_2 + 8);
    local_2c = *(uint *)(param_2 + 8) >> 0x10;
    thunk_FUN_03cc0d62(&local_30);
    if (*(char *)((longlong)param_1 + 0xae) == '\x01') {
      if (-1 < (int)local_2c) {
        iVar3 = FUN_00d3cbc0(param_1,&local_30);
        uVar4 = FUN_00d3ce10(param_1,iVar3);
        *(undefined4 *)(param_1 + 0x13) = uVar4;
        lVar1 = param_1[0x11];
        (**(code **)(*param_1 + 0xa8))(param_1,0);
        (**(code **)(*param_1 + 0x98))(param_1,1,1,iVar3,iVar3 - (int)lVar1);
        FUN_00d3cb70(param_1,local_58);
        *(undefined4 *)(param_1 + 0x11) = local_44;
      }
    }
    else if ((*(char *)((longlong)param_1 + 0xae) == '\0') && (-1 < (int)local_30)) {
      iVar3 = FUN_00d3c490(param_1,&local_30);
      uVar4 = FUN_00d3c7d0(param_1,iVar3);
      *(undefined4 *)(param_1 + 0x13) = uVar4;
      lVar1 = param_1[0x11];
      (**(code **)(*param_1 + 0xa0))(param_1,0);
      (**(code **)(*param_1 + 0x98))(param_1,0,1,iVar3,iVar3 - (int)lVar1);
      FUN_00d3c440(param_1,local_58);
      *(undefined4 *)(param_1 + 0x11) = local_44;
    }
    *(undefined1 *)(param_1 + 8) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}

