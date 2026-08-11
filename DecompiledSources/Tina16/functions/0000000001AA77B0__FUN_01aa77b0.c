/* Ghidra address: 01aa77b0 */
/* Ghidra symbol: FUN_01aa77b0 */


void FUN_01aa77b0(longlong param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined4 local_24;
  undefined1 local_20;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19 [9];
  
  puVar1 = (undefined1 *)
           FUN_01cfde70(*(undefined8 *)(param_1 + 0x550),1,1,&local_1a,&local_1b,local_19);
  if (*(char *)(param_1 + 0x568) == '\x01') {
    *puVar1 = 1;
  }
  else {
    *puVar1 = 0;
  }
  local_24 = 1;
  local_20 = *puVar1;
  FUN_01d04b50(*(undefined8 *)(param_1 + 0x550),&local_24);
  if (DAT_02110a54 != '\0') {
    uVar2 = FUN_019a45d0();
    uVar2 = FUN_0198d430(uVar2);
    FUN_01d04aa0(*(undefined8 *)(param_1 + 0x550),uVar2);
  }
  return;
}

