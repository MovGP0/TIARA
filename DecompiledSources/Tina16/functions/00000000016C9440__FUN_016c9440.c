/* Ghidra address: 016c9440 */
/* Ghidra symbol: FUN_016c9440 */


void FUN_016c9440(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_016a1500);
  if (cVar1 != '\0') {
    if (*(double *)(param_1 + 0x98) != 1.0) {
      *(double *)(*(longlong *)(param_2 + 0x18) + 0x28) =
           *(double *)(*(longlong *)(param_2 + 0x18) + 0x28) * *(double *)(param_1 + 0x98);
    }
    if (*(char *)(param_2 + 0x11) == '\x01') {
      *(double *)(*(longlong *)(param_2 + 0x18) + 0x28) =
           *(double *)(param_1 + 0x90) + *(double *)(*(longlong *)(param_2 + 0x18) + 0x28);
      *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x18) + 0x28);
    }
    else if (*(char *)(param_2 + 0x10) == '\0') {
      if (*(char *)(param_2 + 0x11) == '\x04') {
        *(double *)(*(longlong *)(param_2 + 0x18) + 0x28) =
             *(double *)(param_1 + 0x88) + *(double *)(*(longlong *)(param_2 + 0x18) + 0x28);
      }
    }
    else {
      *(double *)(*(longlong *)(param_2 + 0x18) + 0x28) =
           *(double *)(param_1 + 0x90) + *(double *)(*(longlong *)(param_2 + 0x18) + 0x28);
    }
    *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(*(longlong *)(param_2 + 0x18) + 0x28);
    if (*(double *)(param_1 + 0x80) != 1.0) {
      *(double *)(*(longlong *)(param_2 + 0x20) + 0x28) =
           *(double *)(*(longlong *)(param_2 + 0x20) + 0x28) * *(double *)(param_1 + 0x80);
    }
    *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
  }
  return;
}

