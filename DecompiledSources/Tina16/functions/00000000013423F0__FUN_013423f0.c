/* Ghidra address: 013423f0 */
/* Ghidra symbol: FUN_013423f0 */


void FUN_013423f0(longlong param_1)

{
  char cVar1;
  
  if (((*PTR_DAT_02002b78 != '\0') && (*PTR_DAT_020030c0 != '\0')) &&
     ((*(uint *)PTR_DAT_02003570 & 3) != 0)) {
    if (*(longlong *)PTR_DAT_02004c68 != 0) {
      (**(code **)(**(longlong **)PTR_DAT_02004c68 + 0x308))(*(longlong **)PTR_DAT_02004c68);
    }
    while (*(longlong *)PTR_DAT_02004c68 != 0) {
      cVar1 = (**(code **)(**(longlong **)PTR_DAT_02004c68 + 0x310))(*(longlong **)PTR_DAT_02004c68)
      ;
      if (cVar1 == '\0') {
        return;
      }
      if (*(char *)(param_1 + 0x49c) != '\0') {
        return;
      }
      (**(code **)(**(longlong **)PTR_DAT_02004c68 + 0x318))(*(longlong **)PTR_DAT_02004c68);
      FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
    }
  }
  return;
}

