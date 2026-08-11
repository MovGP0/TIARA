/* Ghidra address: 004afc10 */
/* Ghidra symbol: FUN_004afc10 */


void FUN_004afc10(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_38 [40];
  undefined1 *local_10;
  
  local_10 = auStack_38;
  FUN_004afa30(param_1);
  if (*(char *)(param_1 + 0x18) != '\x01') {
    iVar1 = FUN_004aeba0(*(undefined8 *)(param_1 + 8),param_2);
    if (iVar1 != -1) {
      if (*(char *)(param_1 + 0x18) == '\x02') {
        FUN_004ae960(**(undefined8 **)(param_1 + 8),PTR_PTR_02002e38,param_2);
      }
      goto code_r0x004afc87;
    }
  }
  FUN_004ae7e0(*(undefined8 *)(param_1 + 8),param_2);
code_r0x004afc87:
  FUN_00412130(*(undefined8 *)(param_1 + 0x10));
  return;
}

