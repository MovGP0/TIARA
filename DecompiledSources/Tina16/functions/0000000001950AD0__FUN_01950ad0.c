/* Ghidra address: 01950ad0 */
/* Ghidra symbol: FUN_01950ad0 */


void FUN_01950ad0(longlong param_1,double param_2,double param_3)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  int local_24;
  longlong *local_20;
  
  local_30 = auStack_58;
  if (*(char *)(param_1 + 0xe1) == '\0') {
    *(undefined1 *)(param_1 + 0xe1) = 1;
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))();
    local_24 = 0;
    if (-1 < iVar1 + -1) {
      do {
        local_20 = (longlong *)
                   (**(code **)(**(longlong **)(param_1 + 0x80) + 0x20))
                             (*(longlong **)(param_1 + 0x80),local_24);
        if (*(char *)((longlong)local_20 + 0xe1) == '\0') {
          if ((*(byte *)(local_20 + 0x1c) & 4) == 0) {
            if ((*(byte *)(local_20 + 0x1c) & 1) == 0) {
              lVar2 = FUN_0040c770(param_2 / 1.18);
              (**(code **)(*local_20 + 200))(local_20,(double)local_20[0x13] + (double)lVar2);
            }
          }
          else if ((*(byte *)(local_20 + 0x1c) & 1) == 0) {
            (**(code **)(*local_20 + 200))(local_20,(double)local_20[0x13] + param_2);
          }
          else {
            (**(code **)(*local_20 + 0xd8))(local_20,(double)local_20[0x15] + param_2);
          }
          if ((*(byte *)(local_20 + 0x1c) & 8) == 0) {
            if ((*(byte *)(local_20 + 0x1c) & 2) == 0) {
              lVar2 = FUN_0040c770(param_3 / 1.18);
              (**(code **)(*local_20 + 0xd0))(local_20,(double)local_20[0x14] + (double)lVar2);
            }
          }
          else if ((*(byte *)(local_20 + 0x1c) & 2) == 0) {
            (**(code **)(*local_20 + 0xd0))(local_20,(double)local_20[0x14] + param_3);
          }
          else {
            (**(code **)(*local_20 + 0xe0))(local_20,(double)local_20[0x16] + param_3);
          }
        }
        local_24 = local_24 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    *(undefined1 *)(param_1 + 0xe1) = 0;
  }
  return;
}

