/* Ghidra address: 0065b5b0 */
/* Ghidra symbol: FUN_0065b5b0 */


void FUN_0065b5b0(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  
  cVar1 = FUN_0065be20(param_1);
  if (cVar1 != '\0') {
    if (*(longlong *)(param_1 + 0x78) != 0) {
      FUN_0064fca0(*(longlong *)(param_1 + 0x78),0xb034,1,0);
    }
    if (*(longlong *)(param_2 + 8) == 0) {
      thunk_FUN_03a2fc9d(*(undefined8 *)(param_1 + 0x468),0,
                         -(uint)((*(uint *)(param_1 + 0xa0) & 0x40) == 0));
      plVar3 = (longlong *)FUN_00781840();
      cVar1 = (**(code **)(*plVar3 + 0x98))(plVar3);
      if (cVar1 != '\0') {
        iVar2 = FUN_00654c00();
        iVar5 = 0;
        if (-1 < iVar2 + -1) {
          do {
            lVar4 = FUN_00654bc0(param_1,iVar5);
            if ((*(uint *)(lVar4 + 0xa0) & 0x40000) != 0) {
              plVar3 = (longlong *)FUN_00654bc0(param_1,iVar5);
              (**(code **)(*plVar3 + 0x180))(plVar3);
            }
            iVar5 = iVar5 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
      }
    }
  }
  return;
}

