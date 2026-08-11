/* Ghidra address: 00b894a0 */
/* Ghidra symbol: FUN_00b894a0 */


void FUN_00b894a0(undefined8 param_1,longlong param_2,char param_3)

{
  bool bVar1;
  
  if ((param_3 == '\0') &&
     (((*(byte *)(param_2 + 0xb3) & 1) == 0 || ((*(byte *)(param_2 + 0xb3) & 4) == 0)))) {
    if ((*(byte *)(param_2 + 0xb3) & 4) == 0) {
      FUN_0064c1a0(param_2,*(byte *)(param_2 + 0xb3) | 4);
      FUN_0064c1a0(param_2,*(byte *)(param_2 + 0xb3) & 0xfe);
    }
    else {
      FUN_0064c1a0(param_2,*(byte *)(param_2 + 0xb3) & 0xfb);
      FUN_0064c1a0(param_2,*(byte *)(param_2 + 0xb3) | 1);
    }
  }
  if ((param_3 == '\x01') &&
     ((bVar1 = (*(byte *)(param_2 + 0xb3) & 1) == 0, bVar1 || ((*(byte *)(param_2 + 0xb3) & 4) == 0)
      ))) {
    if (bVar1) {
      FUN_0064c1a0(param_2,*(byte *)(param_2 + 0xb3) | 1);
      FUN_0064c1a0(param_2,*(byte *)(param_2 + 0xb3) & 0xfb);
    }
    else {
      FUN_0064c1a0(param_2,*(byte *)(param_2 + 0xb3) & 0xfe);
      FUN_0064c1a0(param_2,*(byte *)(param_2 + 0xb3) | 4);
    }
  }
  return;
}

