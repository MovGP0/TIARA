/* Ghidra address: 00845ac0 */
/* Ghidra symbol: FUN_00845ac0 */


void FUN_00845ac0(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint *puVar2;
  bool bVar3;
  
  FUN_00654e40(param_1,param_2);
  puVar2 = (uint *)(param_2 + 8);
  *puVar2 = *puVar2 | 0x10000;
  if (*(byte *)(param_1 + 0x4e4) < 8) {
    uVar1 = (int)CONCAT71((int7)((ulonglong)puVar2 >> 8),1) << (*(byte *)(param_1 + 0x4e4) & 0x1f);
    puVar2 = (uint *)(ulonglong)CONCAT31((int3)(uVar1 >> 8),(uVar1 & 0xc) != 0);
  }
  else {
    puVar2 = (uint *)0x0;
  }
  if ((char)puVar2 != '\0') {
    puVar2 = (uint *)(param_2 + 8);
    *puVar2 = *puVar2 | 0x200000;
  }
  if (*(byte *)(param_1 + 0x4e4) < 8) {
    bVar3 = ((int)CONCAT71((int7)((ulonglong)puVar2 >> 8),1) << (*(byte *)(param_1 + 0x4e4) & 0x1f)
            & 10U) != 0;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x100000;
  }
  *(undefined4 *)(param_2 + 0x30) = 8;
  if (*(char *)(param_1 + 0x4a0) == '\x01') {
    if ((*PTR_DAT_02003210 == '\0') || (*(char *)(param_1 + 0x390) == '\0')) {
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x800000;
    }
    else {
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xff7fffff;
      *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 0x200;
    }
  }
  return;
}

