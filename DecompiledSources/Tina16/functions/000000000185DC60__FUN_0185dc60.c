/* Ghidra address: 0185dc60 */
/* Ghidra symbol: FUN_0185dc60 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0185dc60(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_2c;
  
  _DAT_02110304 = 0;
  FUN_00414480(&DAT_02110308);
  uVar1 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
  *(undefined8 *)(param_1 + 8) = uVar1;
  FUN_00410f20(*(undefined8 *)(param_1 + 0x10));
  uVar1 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_0185e630();
  FUN_0185e510(param_1);
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x10);
  local_2c = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x30),local_2c);
      iVar5 = 0;
      if (*(longlong *)(lVar2 + 0x28) != 0) {
        iVar5 = *(int *)(*(longlong *)(lVar2 + 0x28) + 0x10);
      }
      iVar3 = 0;
      if (-1 < iVar5 + -1) {
        do {
          uVar1 = FUN_004aeac0(*(undefined8 *)(lVar2 + 0x28),iVar3);
          (**(code **)(**(longlong **)(param_1 + 8) + 0x20))
                    (*(longlong **)(param_1 + 8),&DAT_01fae665,1);
          FUN_0185e020(param_1,uVar1);
          iVar3 = iVar3 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      (**(code **)(**(longlong **)(param_1 + 8) + 0x20))
                (*(longlong **)(param_1 + 8),&DAT_01fae664,1);
      FUN_0185e2e0(param_1,lVar2);
      local_2c = local_2c + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  (**(code **)(**(longlong **)(param_1 + 8) + 0x20))(*(longlong **)(param_1 + 8),&DAT_01fae666,1);
  FUN_004b8ba0(param_2,*(undefined8 *)(param_1 + 8),0);
  FUN_00410f20(*(undefined8 *)(param_1 + 8));
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}

