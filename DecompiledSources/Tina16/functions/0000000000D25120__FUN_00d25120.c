/* Ghidra address: 00d25120 */
/* Ghidra symbol: FUN_00d25120 */


void FUN_00d25120(longlong param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = 0;
  uVar3 = *param_2;
  uVar4 = param_2[1];
  for (iVar1 = *(int *)(param_1 + 0x78); iVar1 != 0; iVar1 = iVar1 + -1) {
    uVar3 = uVar3 + (uVar4 << 4 ^ uVar4 >> 5) + (uVar4 ^ uVar2) +
                    *(int *)(*(longlong *)(param_1 + 0x68) + (ulonglong)(uVar2 & 3) * 4);
    uVar2 = uVar2 + 0x9e3779b9;
    uVar4 = uVar4 + (uVar3 * 0x10 ^ uVar3 >> 5) + (uVar3 ^ uVar2) +
                    *(int *)(*(longlong *)(param_1 + 0x68) + (ulonglong)(uVar2 >> 0xb & 3) * 4);
  }
  *param_2 = uVar3;
  param_2[1] = uVar4;
  return;
}

