/* Ghidra address: 00b125e0 */
/* Ghidra symbol: FUN_00b125e0 */


undefined1 FUN_00b125e0(longlong param_1)

{
  undefined1 uVar1;
  int iVar2;
  longlong local_20 [2];
  
  local_20[0] = 0;
  (**(code **)(**(longlong **)(param_1 + 0x40) + 0x2d8))
            (*(longlong **)(param_1 + 0x40),local_20,0,
             *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x4ac));
  iVar2 = 0;
  if (local_20[0] != 0) {
    iVar2 = *(int *)(local_20[0] + -4);
  }
  if ((iVar2 < 1) || ((*(byte *)(*(longlong *)(param_1 + 0x40) + 0x608) & 2) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  FUN_00414480(local_20);
  return uVar1;
}

