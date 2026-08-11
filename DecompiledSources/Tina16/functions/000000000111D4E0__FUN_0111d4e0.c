/* Ghidra address: 0111d4e0 */
/* Ghidra symbol: FUN_0111d4e0 */


undefined8 FUN_0111d4e0(longlong param_1)

{
  int *piVar1;
  char cVar2;
  
  *(undefined1 *)(*(longlong *)(param_1 + 0x40) + 0x163) = 0xe;
  while( true ) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x40) + 400))
                      (*(longlong **)(param_1 + 0x40),
                       *(undefined2 *)
                        (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x120) +
                        (longlong)*(int *)(*(longlong *)(param_1 + 0x40) + 0x150) * 2));
    if ((cVar2 == '\0') &&
       (*(short *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x120) +
                  (longlong)*(int *)(*(longlong *)(param_1 + 0x40) + 0x150) * 2) != 0x2e)) break;
    piVar1 = (int *)(*(longlong *)(param_1 + 0x40) + 0x150);
    *piVar1 = *piVar1 + 1;
  }
  return 0;
}

