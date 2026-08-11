/* Ghidra address: 008052e0 */
/* Ghidra symbol: FUN_008052e0 */


undefined1 FUN_008052e0(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 local_29 [9];
  
  if (*(char *)(param_1 + 0x4d6) == '\x02') {
    local_29[0] = 0;
    iVar2 = FUN_007ff9d0();
    iVar4 = 0;
    if (-1 < iVar2 + -1) {
      do {
        plVar3 = (longlong *)FUN_007ffa40(param_1,iVar4);
        cVar1 = (**(code **)(*plVar3 + 0x2c0))(plVar3);
        if (cVar1 == '\0') {
          return local_29[0];
        }
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  local_29[0] = 1;
  if (*(longlong *)(param_1 + 0x5a0) != 0) {
    (**(code **)(param_1 + 0x5a0))(*(undefined8 *)(param_1 + 0x5a8),param_1,local_29);
  }
  return local_29[0];
}

