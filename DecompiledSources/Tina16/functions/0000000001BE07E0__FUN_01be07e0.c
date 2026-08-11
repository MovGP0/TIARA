/* Ghidra address: 01be07e0 */
/* Ghidra symbol: FUN_01be07e0 */


undefined1 FUN_01be07e0(longlong param_1)

{
  char cVar1;
  int iVar2;
  int local_1c [3];
  
  local_1c[0] = -1;
  cVar1 = FUN_0044f0c0(5,1);
  if (cVar1 != '\0') {
    iVar2 = thunk_FUN_03e0f7b4(0x1024,0,local_1c,0);
    if (iVar2 != 0) {
      *(bool *)(param_1 + 0x680) = local_1c[0] != 0;
    }
  }
  return *(undefined1 *)(param_1 + 0x680);
}

