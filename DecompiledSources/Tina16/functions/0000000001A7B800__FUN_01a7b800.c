/* Ghidra address: 01a7b800 */
/* Ghidra symbol: FUN_01a7b800 */


void FUN_01a7b800(longlong param_1,int param_2)

{
  int iVar1;
  
  if (-1 < param_2) {
    *(int *)(*(longlong *)(param_1 + 0x798) + 0x110) = param_2;
    if (param_2 == 0) {
      FUN_006d78a0(*(undefined8 *)(param_1 + 0xc10),*(undefined8 *)(param_1 + 0xc18));
    }
    else if (param_2 == 1) {
      FUN_006d78a0(*(undefined8 *)(param_1 + 0xc10),*(undefined8 *)(param_1 + 0xc20));
    }
    else {
      FUN_006d78a0(*(undefined8 *)(param_1 + 0xc10),*(undefined8 *)(param_1 + 0xc28));
    }
    if (*(longlong *)(*(longlong *)(param_1 + 0xc10) + 0x530) == *(longlong *)(param_1 + 0xc18)) {
      FUN_008483e0(*(undefined8 *)(param_1 + 0xe40),2);
      FUN_00848a70(*(undefined8 *)(param_1 + 0xe40),4);
      iVar1 = FUN_006d8150(*(undefined8 *)(param_1 + 0xc30));
      if (iVar1 == 1) {
        if (*(char *)(*(longlong *)(param_1 + 0xbc8) + 0x80) == '\0') {
          FUN_00848a70(*(undefined8 *)(param_1 + 0xe40),4);
        }
        else {
          FUN_00848a70(*(undefined8 *)(param_1 + 0xe40),5);
        }
      }
    }
  }
  return;
}

