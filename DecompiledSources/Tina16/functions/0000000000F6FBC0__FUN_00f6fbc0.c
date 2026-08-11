/* Ghidra address: 00f6fbc0 */
/* Ghidra symbol: FUN_00f6fbc0 */


void FUN_00f6fbc0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int local_3c [3];
  
  FUN_004b84c0(param_2,local_3c,4);
  if (-1 < local_3c[0] + -1) {
    do {
      plVar1 = (longlong *)FUN_00f6dfb0(&PTR_FUN_00f68790,1);
      FUN_00f6e120(plVar1,*(undefined4 *)(param_1 + 8));
      (**(code **)(*plVar1 + 8))(plVar1,param_2);
      FUN_004ae7e0(*(undefined8 *)(param_1 + 0x18),plVar1);
      local_3c[0] = local_3c[0] + -1;
    } while (local_3c[0] != 0);
  }
  FUN_00f608a0(param_1 + 0x20,param_2);
  FUN_00f608a0(param_1 + 0x28,param_2);
  FUN_004b84c0(param_2,param_1 + 0x30,1);
  FUN_004b84c0(param_2,param_1 + 0x34,4);
  FUN_004b84c0(param_2,param_1 + 0x38,4);
  FUN_004b84c0(param_2,param_1 + 0x3c,4);
  FUN_004b84c0(param_2,param_1 + 0x40,1);
  FUN_004b84c0(param_2,param_1 + 0x41,1);
  FUN_004b84c0(param_2,param_1 + 0xec,1);
  if (0x6d < DAT_0202eed4) {
    FUN_004b84c0(param_2,param_1 + 0x14,4);
  }
  FUN_004b84c0(param_2,param_1 + 0x94,4);
  iVar3 = *(int *)(param_1 + 0x94);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      FUN_004b84c0(param_2,param_1 + 0x44 + (longlong)iVar2 * 8,8);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_004b84c0(param_2,param_1 + 0xe8,4);
  iVar3 = *(int *)(param_1 + 0xe8);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      FUN_004b84c0(param_2,param_1 + 0x98 + (longlong)iVar2 * 8,8);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_004b84c0(param_2,param_1 + 0x42,1);
  if (0x67 < DAT_0202eed4) {
    FUN_00f60970(param_2,param_1 + 0xf8,*(undefined4 *)(param_1 + 8));
    FUN_00f60970(param_2,param_1 + 0x100,*(undefined4 *)(param_1 + 8));
  }
  return;
}

