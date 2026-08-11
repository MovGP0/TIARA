/* Ghidra address: 0140a000 */
/* Ghidra symbol: FUN_0140a000 */


void FUN_0140a000(longlong param_1)

{
  ushort *puVar1;
  char cVar2;
  
  if (*PTR_DAT_020039a8 == '\0') {
    cVar2 = FUN_00b0a890(*(undefined8 *)(param_1 + 0x6d0));
    *(char *)(param_1 + 0x710) = cVar2;
    if (cVar2 == '\0') {
      puVar1 = *(ushort **)(param_1 + 0x708);
      FUN_01408bc0(*(undefined8 *)(param_1 + 0x728),*(undefined8 *)(param_1 + 0x720),
                   *(undefined4 *)(param_1 + 0x738));
      FUN_00409a70(*(undefined8 *)(param_1 + 0x720),*(undefined8 *)(puVar1 + 4),(uint)*puVar1 * 2);
    }
  }
  else {
    FUN_00b0a960(*(undefined8 *)(param_1 + 0x6d0));
    if (*(int *)(*(longlong *)(param_1 + 0x6d0) + 0x638) == 1) {
      *(undefined4 *)(param_1 + 0x508) = 1;
    }
  }
  return;
}

