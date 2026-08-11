/* Ghidra address: 006f60d0 */
/* Ghidra symbol: FUN_006f60d0 */


void FUN_006f60d0(longlong *param_1,int *param_2)

{
  char cVar1;
  
  if (((*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0) &&
     ((((*param_2 == 0x201 || (*param_2 == 0x203)) && (cVar1 = FUN_0064eb50(param_1), cVar1 == '\0')
       ) && (cVar1 = FUN_0064c470(param_1), cVar1 == '\x01')))) {
    cVar1 = FUN_00656320(param_1,param_2);
    if (cVar1 != '\0') {
      return;
    }
    *(uint *)((longlong)param_1 + 0xa4) = *(uint *)((longlong)param_1 + 0xa4) | 1;
    (**(code **)(*param_1 + -0x40))(param_1,param_2);
    return;
  }
  if ((*param_2 == 0xb051) && ((*(ushort *)((longlong)param_1 + 0x34) & 1) == 0)) {
    FUN_00655b90(param_1);
    if (*(char *)((longlong)param_1 + 0x4a1) == '\x03') {
      FUN_006f74d0(param_1);
    }
  }
  else if ((*param_2 == 0xb024) && ((*(ushort *)((longlong)param_1 + 0x34) & 1) == 0)) {
    FUN_00655b90(param_1);
  }
  else if (((*param_2 != 0xf) && (*param_2 != 0x14)) || (*(char *)(param_1[0x9c] + 0x14) == '\0')) {
    FUN_00656570(param_1,param_2);
  }
  return;
}

