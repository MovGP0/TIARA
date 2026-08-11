/* Ghidra address: 01b5a240 */
/* Ghidra symbol: FUN_01b5a240 */


void FUN_01b5a240(longlong param_1)

{
  if (*(char *)(param_1 + 0xd6c) == '\0') {
    if (*(byte *)(param_1 + 0xd50) < 0x1d) {
      *(char *)(param_1 + 0xd50) = *(char *)(param_1 + 0xd50) + '\x01';
      FUN_010c0d70(param_1 + 0xd50,param_1 + 0xd38,1,0x1e,0x3fb999999999999a);
      FUN_00b90440(*(undefined8 *)(param_1 + 0xca0),*(undefined8 *)(param_1 + 0xd38));
    }
  }
  else if ((int)(uint)*(byte *)(param_1 + 0xd50) < (int)(*(byte *)(param_1 + 0xd18) - 1)) {
    *(char *)(param_1 + 0xd50) = *(char *)(param_1 + 0xd50) + '\x01';
    (**(code **)(**(longlong **)(param_1 + 0xd58) + 0xa0))
              (*(longlong **)(param_1 + 0xd58),*(undefined1 *)(param_1 + 0xd50));
    (**(code **)(**(longlong **)(param_1 + 0xd58) + 0x88))
              (*(longlong **)(param_1 + 0xd58),param_1 + 0xd50,param_1 + 0xd38,1);
    FUN_00b90440(*(undefined8 *)(param_1 + 0xca0),*(undefined8 *)(param_1 + 0xd38));
  }
  return;
}

