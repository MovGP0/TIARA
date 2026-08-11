/* Ghidra address: 005ffb10 */
/* Ghidra symbol: FUN_005ffb10 */


void FUN_005ffb10(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_1[0xc] != param_2) {
    if (param_1[0xc] != 0) {
      FUN_005ffa80(param_1);
      lVar1 = (**(code **)(*param_1 + 0x28))(param_1);
      param_1[0x11] = lVar1;
      param_1[0xc] = 0;
      *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) & 0xfe;
    }
    if (param_2 != 0) {
      *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) | 1;
      param_1[0xc] = param_2;
      (**(code **)(*param_1 + 0x38))(param_1,param_1 + 0x11);
    }
  }
  return;
}

