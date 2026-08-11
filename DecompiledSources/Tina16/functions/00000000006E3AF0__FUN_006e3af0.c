/* Ghidra address: 006e3af0 */
/* Ghidra symbol: FUN_006e3af0 */


void FUN_006e3af0(longlong *param_1,int *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((((*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0) &&
      (((*param_2 == 0x201 || (*param_2 == 0x203)) && (cVar1 = FUN_0064eb50(param_1), cVar1 == '\0')
       ))) && ((cVar1 = FUN_0064c470(param_1), cVar1 == '\x01' &&
               (*(char *)((longlong)param_1 + 0xff) == '\0')))) {
    cVar1 = FUN_00656320(param_1,param_2);
    if (cVar1 != '\0') {
      return;
    }
    *(uint *)((longlong)param_1 + 0xa4) = *(uint *)((longlong)param_1 + 0xa4) | 1;
    (**(code **)(*param_1 + -0x40))(param_1,param_2);
    return;
  }
  if (*param_2 == 0xbc7b) {
    uVar2 = FUN_0064fca0(param_1,0x7b,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
    *(undefined8 *)(param_2 + 6) = uVar2;
  }
  else {
    FUN_00656570(param_1,param_2);
  }
  return;
}

