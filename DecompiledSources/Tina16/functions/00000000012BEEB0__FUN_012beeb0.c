/* Ghidra address: 012beeb0 */
/* Ghidra symbol: FUN_012beeb0 */


void FUN_012beeb0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 local_2c;
  
  iVar5 = *(int *)(param_1 + 0x10);
  local_2c = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar1 = FUN_004aeac0(param_1,local_2c);
      iVar6 = *(int *)(*(longlong *)(lVar1 + 0x20) + 0x10);
      iVar4 = 0;
      if (-1 < iVar6 + -1) {
        do {
          lVar2 = FUN_004aeac0(*(undefined8 *)(lVar1 + 0x20),iVar4);
          uVar3 = FUN_00b94e60(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(lVar2 + 0x10));
          *(undefined8 *)(lVar2 + 0x10) = uVar3;
          iVar4 = iVar4 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      local_2c = local_2c + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}

