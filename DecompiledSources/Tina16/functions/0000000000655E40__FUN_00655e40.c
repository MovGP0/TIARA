/* Ghidra address: 00655e40 */
/* Ghidra symbol: FUN_00655e40 */


void FUN_00655e40(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  longlong local_10;
  
  local_20 = auStack_48;
  local_10 = param_1;
  while (lVar1 = *(longlong *)(local_10 + 0x78), lVar1 != 0) {
    local_10 = lVar1;
    if (*(char *)(lVar1 + 0x391) == '\0') {
      if ((*(char *)(param_1 + 0x391) != '\0') && (*(char *)(param_1 + 0x396) == '\0')) {
        *(undefined1 *)(param_1 + 0x396) = 1;
        *(undefined1 *)(param_1 + 0x391) = 0;
        FUN_0064fca0(param_1,0xb019,0,0);
        *(undefined1 *)(param_1 + 0x396) = 0;
      }
      return;
    }
  }
  local_20 = auStack_48;
  cVar2 = FUN_004113d0(local_10,&PTR_FUN_007ee548);
  if (cVar2 == '\0') {
    if ((*(ushort *)(param_1 + 0x34) & 8) != 0) {
      return;
    }
    if (*(longlong *)(local_10 + 0x358) == 0) {
      return;
    }
  }
  FUN_00655c70(param_1);
  return;
}

