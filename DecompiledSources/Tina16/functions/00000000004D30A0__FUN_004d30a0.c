/* Ghidra address: 004d30a0 */
/* Ghidra symbol: FUN_004d30a0 */


void FUN_004d30a0(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  longlong local_38;
  undefined1 local_30;
  
  if (param_2 == 0) {
    bVar4 = false;
  }
  else {
    if (param_3 == param_4) {
      bVar4 = true;
    }
    else if ((param_3 == 0) || (param_4 == 0)) {
      bVar4 = false;
    }
    else {
      iVar1 = FUN_0043e420(param_3,param_4);
      bVar4 = iVar1 == 0;
    }
    bVar4 = !bVar4;
  }
  if ((bVar4) && (*(longlong *)(param_2 + 8) == param_1)) {
    lVar2 = FUN_004d3a80(param_1,param_4);
    if (lVar2 != 0) {
      local_30 = 0x11;
      local_38 = param_4;
      uVar3 = FUN_0044d8d0(&PTR_FUN_004724d0,1,PTR_PTR_02003ce0,&local_38,0);
      FUN_004134c0(uVar3);
    }
  }
  if (((*(ushort *)(param_1 + 0x34) & 0x10) != 0) && (*(longlong *)(param_1 + 8) != 0)) {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x60))
              (*(longlong **)(param_1 + 8),param_2,param_3,param_4);
  }
  return;
}

