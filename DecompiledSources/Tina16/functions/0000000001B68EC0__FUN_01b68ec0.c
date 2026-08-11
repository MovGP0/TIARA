/* Ghidra address: 01b68ec0 */
/* Ghidra symbol: FUN_01b68ec0 */


void FUN_01b68ec0(longlong param_1)

{
  if (*(char *)(param_1 + 0xdb4) == '\0') {
    if (*(byte *)(param_1 + 0xd98) < 0x1d) {
      *(char *)(param_1 + 0xd98) = *(char *)(param_1 + 0xd98) + '\x01';
      FUN_010c0d70(param_1 + 0xd98,param_1 + 0xd88,1,0x1e,0x3fb999999999999a);
      FUN_00b90440(*(undefined8 *)(param_1 + 0xc98),*(undefined8 *)(param_1 + 0xd88));
    }
  }
  else if ((int)(uint)*(byte *)(param_1 + 0xd98) <
           (int)(*(byte *)(*(longlong *)(param_1 + 0xda8) + 0x30) - 1)) {
    *(char *)(param_1 + 0xd98) = *(char *)(param_1 + 0xd98) + '\x01';
    (**(code **)(**(longlong **)(param_1 + 0xda0) + 0xa0))
              (*(longlong **)(param_1 + 0xda0),*(undefined1 *)(param_1 + 0xd98));
    (**(code **)(**(longlong **)(param_1 + 0xda0) + 0x90))
              (*(longlong **)(param_1 + 0xda0),param_1 + 0xd98,param_1 + 0xd88,1);
    FUN_00b90440(*(undefined8 *)(param_1 + 0xc98),*(undefined8 *)(param_1 + 0xd88));
  }
  return;
}

