/* Ghidra address: 00ad7540 */
/* Ghidra symbol: FUN_00ad7540 */


void FUN_00ad7540(longlong param_1)

{
  int iVar1;
  
  if (*(char *)(*(longlong *)(param_1 + 0x510) + 0x81) != '\0') {
    FUN_00ad5060(*(undefined8 *)(param_1 + 0x510));
  }
  if (*(longlong *)(param_1 + 0x4e0) != 0) {
    FUN_00ad7440(param_1);
    if (*(char *)(param_1 + 0x4cf) == '\x11') {
      FUN_00410f20(*(undefined8 *)(param_1 + 0x4e0));
    }
    else {
      *(undefined1 *)(*(longlong *)(param_1 + 0x4e0) + 0x5b) = *(undefined1 *)(param_1 + 0x4ce);
      if (*(char *)(param_1 + 0x4ce) == '\x02') {
        FUN_004ae7e0(*(undefined8 *)(param_1 + 0x4c0),*(undefined8 *)(param_1 + 0x4e0));
      }
      else {
        FUN_004ae7e0(*(undefined8 *)(*(longlong *)(param_1 + 0x4d0) + 0x168),
                     *(undefined8 *)(param_1 + 0x4e0));
      }
    }
    *(undefined8 *)(param_1 + 0x4e0) = 0;
    while( true ) {
      iVar1 = FUN_00ad04e0(*(undefined8 *)(param_1 + 0x510));
      if (iVar1 <= *(int *)(param_1 + 0x4bc)) break;
      FUN_00ad47c0(*(undefined8 *)(param_1 + 0x510));
    }
  }
  return;
}

