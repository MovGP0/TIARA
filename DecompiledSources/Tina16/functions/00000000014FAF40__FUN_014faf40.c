/* Ghidra address: 014faf40 */
/* Ghidra symbol: FUN_014faf40 */


void FUN_014faf40(longlong param_1)

{
  undefined8 uVar1;
  double dVar2;
  undefined4 local_20;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19 [9];
  
  FUN_01cfde70(*(undefined8 *)(param_1 + 0x550),1,1,&local_1a,&local_1b,local_19);
  if ((*(char *)(param_1 + 0x568) == '\x01') && (*(char *)(param_1 + 0x569) == '\0')) {
    dVar2 = 12.0;
  }
  else if ((*(char *)(param_1 + 0x569) == '\x01') && (*(char *)(param_1 + 0x568) == '\0')) {
    dVar2 = -12.0;
  }
  else {
    dVar2 = 0.0;
  }
  local_20 = FUN_0040c770((dVar2 / 12.0) * 100.0);
  FUN_01d04b50(*(undefined8 *)(param_1 + 0x550),&local_20);
  if (*PTR_DAT_020035d0 != '\0') {
    uVar1 = FUN_019a45d0();
    uVar1 = FUN_0198d430(uVar1);
    FUN_01d04aa0(*(undefined8 *)(param_1 + 0x550),uVar1);
  }
  return;
}

