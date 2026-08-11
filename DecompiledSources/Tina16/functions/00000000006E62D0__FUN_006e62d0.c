/* Ghidra address: 006e62d0 */
/* Ghidra symbol: FUN_006e62d0 */


void FUN_006e62d0(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  if (*(char *)(param_1 + 0x490) == '\0') {
    thunk_FUN_041d2dc3();
  }
  FUN_00654e40(param_1,param_2);
  FUN_00654d20(param_1,param_2,L"msctls_progress32");
  if (*(char *)(param_1 + 0x4a8) == '\x01') {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 4;
  }
  if (*(char *)(param_1 + 0x4a9) != '\0') {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 1;
  }
  if (*(char *)(param_1 + 0x4b0) == '\x01') {
    plVar2 = (longlong *)FUN_00777cd0();
    cVar1 = (**(code **)(*plVar2 + 0x90))(plVar2);
    if (cVar1 != '\0') {
      cVar1 = FUN_0044f0c0(5,1);
      if ((cVar1 != '\0') && ((*(ushort *)(param_1 + 0x34) & 0x10) == 0)) {
        *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 8;
      }
    }
  }
  if (*(char *)(param_1 + 0x4aa) != '\0') {
    plVar2 = (longlong *)FUN_00777cd0();
    cVar1 = (**(code **)(*plVar2 + 0x98))(plVar2);
    if (cVar1 != '\0') {
      cVar1 = FUN_0044f0c0(6,0);
      if (cVar1 != '\0') {
        *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x10;
      }
    }
  }
  return;
}

