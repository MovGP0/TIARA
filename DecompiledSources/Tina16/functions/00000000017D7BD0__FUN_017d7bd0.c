/* Ghidra address: 017d7bd0 */
/* Ghidra symbol: FUN_017d7bd0 */


void FUN_017d7bd0(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  FUN_00411a80(param_1,param_2);
  if (*(char *)(param_1 + 0x18) == '\0') {
    FUN_004095f0(*(undefined8 *)(param_1 + 0x1b8));
    if (*(char *)(param_1 + 0x94) == '\x01') {
      FUN_004095f0(*(undefined8 *)(param_1 + 0x1c0));
    }
  }
  else {
    FUN_004095f0(*(undefined8 *)(param_1 + 0x1c8));
  }
  if (*(char *)(param_1 + 0x18) == '\0') {
    iVar4 = *(int *)(param_1 + 8) + -1;
    iVar3 = 1;
    if (0 < iVar4) {
      do {
        puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar3 * 0x18);
        FUN_004095f0(*puVar1);
        FUN_004095f0(puVar1[1]);
        puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar3 * 0x18);
        FUN_004095f0(*puVar1);
        FUN_004095f0(puVar1[1]);
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    FUN_004095f0(*(undefined8 *)(param_1 + 0x20));
    FUN_004095f0(*(undefined8 *)(param_1 + 0x28));
    FUN_004095f0(*(undefined8 *)(param_1 + 0x58));
    FUN_004095f0(*(undefined8 *)(param_1 + 0x60));
    FUN_004095f0(*(undefined8 *)(param_1 + 0x88));
    FUN_004095f0(*(undefined8 *)(param_1 + 0x68));
    FUN_004095f0(*(undefined8 *)(param_1 + 0x70));
    FUN_004095f0(*(undefined8 *)(param_1 + 0x78));
    FUN_004095f0(*(undefined8 *)(param_1 + 0x80));
  }
  if (*(char *)(param_1 + 0x18) == '\x01') {
    thunk_FUN_04179d4f(*(undefined8 *)(param_1 + 0x1d0));
  }
  if (*(char *)(param_1 + 0x18) == '\x02') {
    iVar3 = *(int *)(*(longlong *)(param_1 + 0xa0) + 0x10);
    iVar4 = 0;
    if (-1 < iVar3 + -1) {
      do {
        uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xa0),iVar4);
        FUN_00410f20(uVar2);
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    FUN_00410f20(*(undefined8 *)(param_1 + 0xa0));
    FUN_004095f0(*(undefined8 *)(param_1 + 0xc0));
    FUN_004095f0(*(undefined8 *)(param_1 + 200));
    FUN_004095f0(*(undefined8 *)(param_1 + 0xd0));
    thunk_FUN_041540ac(param_1 + 0xd8,param_1 + 0xe8);
    thunk_FUN_03dc4200(param_1 + 0xe0,param_1 + 0xe8);
    FUN_00410f20(*(undefined8 *)(param_1 + 0x1b0));
  }
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

