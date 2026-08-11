/* Ghidra address: 006da730 */
/* Ghidra symbol: FUN_006da730 */


void FUN_006da730(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  FUN_006d3e20(1);
  FUN_00654e40(param_1,param_2);
  FUN_00654d20(param_1,param_2,L"SysHeader32");
  *(uint *)(param_2 + 8) =
       *(uint *)(param_2 + 8) | *(uint *)(&DAT_01dfdc30 + (ulonglong)*(byte *)(param_1 + 0x4d0) * 4)
  ;
  if (*(char *)(param_1 + 0x4b8) != '\0') {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x80;
  }
  if (*(char *)(param_1 + 0x4b9) != '\0') {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 4;
  }
  if (*(char *)(param_1 + 0x4ba) != '\0') {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x40;
  }
  *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffc;
  cVar1 = FUN_0044f0c0(5,1);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_00777cd0();
    cVar1 = (**(code **)(*plVar2 + 0x98))(plVar2);
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x570) != '\0') {
        *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x400;
      }
      if (*(char *)(param_1 + 0x572) != '\0') {
        *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x1000;
      }
      if (*(char *)(param_1 + 0x571) != '\0') {
        *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x800;
      }
    }
  }
  return;
}

