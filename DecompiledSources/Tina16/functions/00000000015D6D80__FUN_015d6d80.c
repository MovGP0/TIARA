/* Ghidra address: 015d6d80 */
/* Ghidra symbol: FUN_015d6d80 */


void FUN_015d6d80(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  FUN_015c29e0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x5f0) + 0x238) + 0x28),
               param_2 + 0xc0,*(undefined4 *)(param_2 + 0x5f8));
  *(undefined2 *)(param_2 + 0x5ce) = *(undefined2 *)(param_2 + 0xce);
  FUN_015c29e0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x5f0) + 0x238) + 0x28),
               param_2 + 0x30,*(undefined4 *)(param_2 + 0x5f8));
  *(undefined2 *)(param_2 + 0x5cc) = *(undefined2 *)(param_2 + 0x3c);
  FUN_00440ee0(*(undefined8 *)(*(longlong *)(param_2 + 0x510) + 8),*(undefined4 *)(param_2 + 0x5cc))
  ;
  if (*(char *)(*(longlong *)(*(longlong *)(param_2 + 0x5f0) + 0xc0) + 0x14) != '\0') {
    cVar1 = FUN_015c08c0(*(undefined8 *)(param_2 + 0x520));
    if (cVar1 != '\0') {
      thunk_FUN_041ad0c1(*(undefined8 *)(*(longlong *)(param_2 + 0x510) + 8));
    }
  }
  FUN_00410f20(*(undefined8 *)(param_2 + 0x510));
  if (((*(char *)(*(longlong *)(param_2 + 0x5f0) + 0x102) == '\0') &&
      (*(char *)(*(longlong *)(param_2 + 0x5f0) + 0x100) == '\0')) &&
     (*(char *)(param_2 + 0x51f) == '\0')) {
    if (*(char *)(*(longlong *)(*(longlong *)(param_2 + 0x5f0) + 0xc0) + 0xe) != '\0') {
      FUN_015bf690(*(undefined8 *)(param_2 + 0x520),*(undefined4 *)(param_2 + 0x50c));
    }
  }
  else {
    uVar2 = FUN_00416740(*(undefined8 *)(param_2 + 0x520));
    FUN_015bf470(uVar2);
  }
  return;
}

