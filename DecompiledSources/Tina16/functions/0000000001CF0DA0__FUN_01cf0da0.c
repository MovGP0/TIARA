/* Ghidra address: 01cf0da0 */
/* Ghidra symbol: FUN_01cf0da0 */


undefined8 FUN_01cf0da0(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (*(char *)((longlong)param_1 + 10) != '\0') {
    iVar1 = (**(code **)(*param_1 + 0x138))(param_1);
    if (-1 < iVar1) {
      uVar2 = 0xfffd;
    }
  }
  return uVar2;
}

