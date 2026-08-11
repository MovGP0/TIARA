/* Ghidra address: 014fb880 */
/* Ghidra symbol: FUN_014fb880 */


void FUN_014fb880(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19 [9];
  
  FUN_01cfde70(*(undefined8 *)(param_1 + 0x550),1,1,&local_1a,&local_1b,local_19);
  if ((*(char *)(param_1 + 0x568) == '\x01') && (*(char *)(param_1 + 0x569) == '\0')) {
    local_1c = 1;
  }
  else if ((*(char *)(param_1 + 0x569) == '\x01') && (*(char *)(param_1 + 0x568) == '\0')) {
    local_1c = 0;
  }
  else {
    local_1c = 0;
  }
  FUN_01d04b50(*(undefined8 *)(param_1 + 0x550),&local_1c);
  if (*PTR_DAT_020035d0 != '\0') {
    uVar1 = FUN_019a45d0();
    uVar1 = FUN_0198d430(uVar1);
    FUN_01d04aa0(*(undefined8 *)(param_1 + 0x550),uVar1);
  }
  return;
}

