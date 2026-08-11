/* Ghidra address: 00d251b0 */
/* Ghidra symbol: FUN_00d251b0 */


void FUN_00d251b0(longlong param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x78);
  uVar1 = iVar4 * -0x61c88647;
  uVar2 = *param_2;
  uVar3 = param_2[1];
  for (; iVar4 != 0; iVar4 = iVar4 + -1) {
    uVar3 = uVar3 - ((uVar2 << 4 ^ uVar2 >> 5) + (uVar2 ^ uVar1) +
                    *(int *)(*(longlong *)(param_1 + 0x68) + (ulonglong)(uVar1 >> 0xb & 3) * 4));
    uVar1 = uVar1 + 0x61c88647;
    uVar2 = uVar2 - ((uVar3 * 0x10 ^ uVar3 >> 5) + (uVar3 ^ uVar1) +
                    *(int *)(*(longlong *)(param_1 + 0x68) + (ulonglong)(uVar1 & 3) * 4));
  }
  *param_2 = uVar2;
  param_2[1] = uVar3;
  return;
}

