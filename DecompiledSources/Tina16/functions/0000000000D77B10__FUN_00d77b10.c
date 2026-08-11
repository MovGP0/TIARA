/* Ghidra address: 00d77b10 */
/* Ghidra symbol: FUN_00d77b10 */


void FUN_00d77b10(undefined8 param_1,longlong *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  uint local_2c;
  
  uVar1 = FUN_00d77c90(param_1);
  local_2c = uVar1 | 0xf0000;
  (**(code **)(*param_2 + 0x20))(param_2,&local_2c,4);
  iVar3 = 0;
  if (-1 < (int)(uVar1 - 1)) {
    do {
      uVar2 = FUN_00d77ca0(param_1,iVar3);
      FUN_00d756c0(param_2,uVar2);
      iVar3 = iVar3 + 1;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}

