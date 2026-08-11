/* Ghidra address: 00b44cf0 */
/* Ghidra symbol: FUN_00b44cf0 */


void FUN_00b44cf0(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong local_30 [2];
  
  local_30[0] = 0;
  iVar7 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x10);
  iVar6 = 0;
  if (-1 < iVar7 + -1) {
    do {
      uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x20),iVar6);
      cVar1 = FUN_004113d0(uVar3,&DAT_00b403a0);
      if (cVar1 != '\0') {
        lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x20),iVar6);
        FUN_00b15100(local_30,*(undefined8 *)(lVar4 + 0x48));
        FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),0x1c);
        uVar2 = 0;
        if (local_30[0] != 0) {
          uVar2 = *(undefined4 *)(local_30[0] + -4);
        }
        FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),
                     CONCAT22((short)((uint)uVar2 >> 0x10),(short)uVar2 + 0xd));
        FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),*(undefined2 *)(lVar4 + 0x38));
        FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),*(undefined2 *)(lVar4 + 0x3c));
        FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),0);
        FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),*(undefined2 *)(lVar4 + 0x2c));
        uVar5 = 0;
        if (*(longlong *)(lVar4 + 0x48) != 0) {
          uVar5 = *(uint *)(*(longlong *)(lVar4 + 0x48) + -4) >> 1;
        }
        FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),uVar5);
        FUN_00b25810(*(undefined8 *)(param_1 + 0xe8),1);
        uVar3 = FUN_00414df0(local_30);
        uVar2 = 0;
        if (local_30[0] != 0) {
          uVar2 = *(undefined4 *)(local_30[0] + -4);
        }
        FUN_00b258a0(*(undefined8 *)(param_1 + 0xe8),uVar3,uVar2);
        FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),0);
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  FUN_004144d0(local_30);
  return;
}

