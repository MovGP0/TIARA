/* Ghidra address: 0080cd50 */
/* Ghidra symbol: FUN_0080cd50 */


void FUN_0080cd50(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong local_38;
  longlong local_30;
  
  local_38 = *param_2;
  local_30 = param_2[1];
  if (*(char *)(param_1 + 0x158) == '\0') {
    if (*(longlong *)(param_1 + 0x2d0) != 0) {
      thunk_FUN_041b2403(*(longlong *)(param_1 + 0x2d0),0xb020,1,&local_38);
    }
  }
  else {
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x160) + 0x10);
    iVar2 = 0;
    if (-1 < iVar3 + -1) {
      do {
        plVar1 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x160),iVar2);
        if ((*plVar1 == local_38) && (plVar1[1] == local_30)) {
          FUN_004095f0(plVar1);
          FUN_004ae870(*(undefined8 *)(param_1 + 0x160),iVar2);
          return;
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return;
}

