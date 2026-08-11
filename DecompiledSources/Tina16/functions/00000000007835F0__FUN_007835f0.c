/* Ghidra address: 007835f0 */
/* Ghidra symbol: FUN_007835f0 */


void FUN_007835f0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  int local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined1 *local_40;
  char local_31;
  uint local_2c;
  undefined1 local_28 [24];
  longlong local_10;
  
  local_40 = auStack_98;
  local_58 = 0;
  FUN_00417580(local_28,&DAT_0075cb10);
  local_5c = *(int *)(DAT_02012580 + 0x10) + -1;
  local_2c = 0;
  iVar1 = *(int *)(DAT_02012580 + 0x10);
  if (-1 < local_5c) {
    do {
      local_5c = iVar1;
      FUN_00417740(local_28,&DAT_0075cb10);
      if (*(uint *)(DAT_02012580 + 0x10) <= local_2c) {
        FUN_00594f90();
      }
      FUN_00417c40(local_28,*(longlong *)(DAT_02012580 + 8) + (longlong)(int)local_2c * 0x20,
                   &DAT_0075cb10);
      local_31 = param_2 == local_10;
      FUN_00417740(local_28,&DAT_0075cb10);
      if (local_31 != '\0') {
        FUN_00599740(DAT_02012580 + 8,local_2c,5);
        cVar2 = FUN_004113d0(DAT_02012550,param_2);
        if (cVar2 != '\0') {
          FUN_00782920(param_1,DAT_02012598);
        }
        goto LAB_0078376c;
      }
      local_2c = local_2c + 1;
      local_5c = local_5c + -1;
      iVar1 = local_5c;
    } while (local_5c != 0);
  }
  FUN_00410ae0(param_2,&local_58);
  local_50 = local_58;
  local_48 = 0x11;
  local_78 = 0;
  uVar3 = FUN_0044d8d0(&PTR_FUN_00777750,1,PTR_PTR_020058c0,&local_50);
  FUN_004134c0(uVar3);
LAB_0078376c:
  FUN_00414480(&local_58);
  FUN_00417740(local_28,&DAT_0075cb10);
  return;
}

