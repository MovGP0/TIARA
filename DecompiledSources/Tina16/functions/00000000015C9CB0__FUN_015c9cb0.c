/* Ghidra address: 015c9cb0 */
/* Ghidra symbol: FUN_015c9cb0 */


void FUN_015c9cb0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 local_1c;
  
  iVar1 = FUN_015c2df0();
  local_1c = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar2 = FUN_015c2a60(*(undefined8 *)(param_1 + 0x28),local_1c);
      *(undefined1 *)(lVar2 + 0x82) = 0;
      local_1c = local_1c + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_015c2df0(*(undefined8 *)(param_1 + 0x28));
  FUN_015c2f10(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_2 + 0x28));
  iVar1 = FUN_015c2df0();
  local_1c = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar2 = FUN_015c2a60(*(undefined8 *)(param_1 + 0x28),local_1c);
      if (*(char *)(lVar2 + 0x82) != '\0') {
        lVar2 = FUN_015c2a60(*(undefined8 *)(param_1 + 0x28),local_1c);
        *(undefined1 *)(lVar2 + 0x82) = 0;
        lVar2 = FUN_015c2a60(*(undefined8 *)(param_1 + 0x28),local_1c);
        lVar2 = (ulonglong)*(uint *)(lVar2 + 0x2a) + *(longlong *)(param_1 + 0xb0);
        if (lVar2 < 0xffffffff) {
          lVar2 = FUN_015c2a60(*(undefined8 *)(param_1 + 0x28),local_1c);
          *(int *)(lVar2 + 0x2a) = *(int *)(lVar2 + 0x2a) + *(int *)(param_1 + 0xb0);
        }
        else {
          lVar3 = FUN_015c2a60(*(undefined8 *)(param_1 + 0x28),local_1c);
          *(undefined1 *)(lVar3 + 0x4f) = 1;
          lVar3 = FUN_015c2a60(*(undefined8 *)(param_1 + 0x28),local_1c);
          *(undefined4 *)(lVar3 + 0x2a) = 0xffffffff;
          lVar3 = FUN_015c2a60(*(undefined8 *)(param_1 + 0x28),local_1c);
          if (*(int *)(lVar3 + 0x2a) == -1) {
            lVar2 = FUN_015c2a60(*(undefined8 *)(param_1 + 0x28),local_1c);
            lVar3 = FUN_015c2a60(*(undefined8 *)(param_1 + 0x28),local_1c);
            *(longlong *)(lVar2 + 0x60) =
                 *(longlong *)(lVar3 + 0x60) + *(longlong *)(param_1 + 0xb0);
          }
          else {
            lVar3 = FUN_015c2a60(*(undefined8 *)(param_1 + 0x28),local_1c);
            *(longlong *)(lVar3 + 0x60) = lVar2;
          }
        }
      }
      local_1c = local_1c + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

