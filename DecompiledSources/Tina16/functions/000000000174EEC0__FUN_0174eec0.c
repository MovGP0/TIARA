/* Ghidra address: 0174eec0 */
/* Ghidra symbol: FUN_0174eec0 */


void FUN_0174eec0(longlong param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  if ((param_3 < -100) || (100 < param_3)) {
    param_3 = 0;
    *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_1 + 0xc);
  }
  else {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if (*(int *)(param_1 + 0x40) != param_3) {
    uVar1 = FUN_00c7d9e0(*(undefined8 *)PTR_DAT_02001ec0,*(int *)(param_1 + 0x40));
    FUN_00c7d820(*(undefined8 *)PTR_DAT_02001ec0,uVar1);
    *(int *)(param_1 + 0x40) = param_3;
    uVar1 = FUN_00c7d9e0(*(undefined8 *)PTR_DAT_02001ec0,param_3);
    FUN_00c7d740(*(undefined8 *)PTR_DAT_02001ec0,uVar1);
    uVar3 = (int)*(uint *)(param_1 + 0x40) >> 0x1f;
    iVar2 = ((*(uint *)(param_1 + 0x40) ^ uVar3) - uVar3) + -0xf;
    *(int *)(param_1 + 0x48) = iVar2;
    if (iVar2 < 0) {
      *(undefined4 *)(param_1 + 0x48) = 0;
    }
    iVar2 = 0x55 - *(int *)(param_1 + 0x48);
    *(int *)(param_1 + 0x48) = iVar2;
    if (iVar2 < 0x2a) {
      *(undefined4 *)(param_1 + 0x44) = 2;
    }
    else {
      *(undefined4 *)(param_1 + 0x44) = 1;
    }
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) / 2;
    iVar2 = *(int *)(param_1 + 0x48) / 5 + 1;
    *(int *)(param_1 + 0x48) = iVar2;
    *(int *)(param_1 + 0x4c) = iVar2;
  }
  return;
}

