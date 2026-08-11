/* Ghidra address: 011413d0 */
/* Ghidra symbol: FUN_011413d0 */


void FUN_011413d0(longlong param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x6d8) + 0xf0))(*(longlong **)(param_1 + 0x6d8));
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0x1055dd) = 1;
    FUN_0064b380(*(undefined8 *)(param_1 + 0xd0),2,0);
    FUN_0064c650(*(undefined8 *)(param_1 + 0x748),0);
    FUN_007fdf10(param_1,*(undefined4 *)(*(longlong *)(param_1 + 0x6b0) + 0x9c));
    FUN_01b1d750(param_1,*(undefined4 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x9c));
    (**(code **)(**(longlong **)(param_1 + 0x6d8) + 0x128))(*(longlong **)(param_1 + 0x6d8),0);
    *(undefined1 *)(param_1 + 0x1055dd) = 0;
  }
  return;
}

