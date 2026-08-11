/* Ghidra address: 016c9550 */
/* Ghidra symbol: FUN_016c9550 */


void FUN_016c9550(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined **ppuVar2;
  bool bVar3;
  
  ppuVar2 = &PTR_FUN_016a1760;
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_016a1760);
  if (cVar1 != '\0') {
    if (*(char *)(param_2 + 0x11) == '\x01') {
      *(double *)(param_1 + 0x70) = *(double *)(param_1 + 0x90) - *(double *)(param_1 + 0x88);
    }
    if (*(byte *)(param_2 + 0x11) < 8) {
      bVar3 = ((int)CONCAT71((int7)((ulonglong)ppuVar2 >> 8),1) <<
               (*(byte *)(param_2 + 0x11) & 0x1f) & 0x12U) != 0;
    }
    else {
      bVar3 = false;
    }
    if ((bVar3) && (*(char *)(param_2 + 0x10) == '\0')) {
      *(double *)(param_2 + 0x18) =
           (*(double *)(param_1 + 0x70) + *(double *)(param_2 + 0x18)) - *(double *)(param_1 + 0x90)
      ;
      *(undefined1 *)(param_2 + 0x10) = 1;
    }
    if (*(char *)(param_2 + 0x10) != '\0') {
      *(double *)(param_2 + 0x18) = *(double *)(param_1 + 0x90) + *(double *)(param_2 + 0x18);
    }
    if (*(char *)(param_2 + 0x11) == '\0') {
      *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x18);
    }
    *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x18);
  }
  return;
}

