/* Ghidra address: 01821560 */
/* Ghidra symbol: FUN_01821560 */


undefined8 FUN_01821560(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if (*(char *)(param_1 + 0x99) != '\0') {
    FUN_018210c0(param_1);
  }
  local_48 = *(undefined8 *)(param_1 + 0x58);
  uStack_40 = *(undefined8 *)(param_1 + 0x60);
  uStack_38 = *(undefined8 *)(param_1 + 0x68);
  uStack_30 = *(undefined8 *)(param_1 + 0x70);
  FUN_0040f800(&local_48,&DAT_01821674,0x20);
  cVar1 = FUN_0043e100(*(undefined2 *)
                        (*(longlong *)(param_1 + 0xa8) + -2 + (longlong)*(int *)(param_1 + 0x84) * 2
                        ),&local_48);
  if ((cVar1 == '\0') &&
     (*(ushort *)(*(longlong *)(param_1 + 0xa8) + -2 + (longlong)*(int *)(param_1 + 0x84) * 2) <
      0x7f)) {
    FUN_00414480(param_2);
  }
  else {
    while ((cVar1 = FUN_0043e100(*(undefined2 *)
                                  (*(longlong *)(param_1 + 0xa8) + -2 +
                                  (longlong)*(int *)(param_1 + 0x84) * 2),param_1 + 0x58),
           cVar1 != '\0' ||
           (0x7e < *(ushort *)
                    (*(longlong *)(param_1 + 0xa8) + -2 + (longlong)*(int *)(param_1 + 0x84) * 2))))
    {
      *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
    }
    FUN_00416dc0(param_2,*(undefined8 *)(param_1 + 0xa8),*(int *)(param_1 + 0x80),
                 *(int *)(param_1 + 0x84) - *(int *)(param_1 + 0x80));
  }
  return param_2;
}

