/* Ghidra address: 006f8fd0 */
/* Ghidra symbol: FUN_006f8fd0 */


void FUN_006f8fd0(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_50;
  undefined1 local_48 [20];
  undefined4 local_34;
  undefined8 local_30;
  
  if ((*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0) {
    (**(code **)(*param_1 + 600))(param_1);
  }
  cVar1 = FUN_004983c0(*(undefined4 *)(param_2 + 0x10));
  if (cVar1 != '\0') {
    lVar2 = FUN_006f6fe0(param_1);
    if (lVar2 != 0) {
      uVar3 = FUN_006f6fe0(param_1);
      FUN_006ef7e0(uVar3,local_48,3);
      local_50 = FUN_00423ba0(local_48);
      uVar3 = FUN_0064d1f0(param_1,&local_50);
      local_30._0_2_ = (undefined2)uVar3;
      local_30._4_2_ = (undefined2)((ulonglong)uVar3 >> 0x20);
      local_34 = CONCAT22(local_30._4_2_,(undefined2)local_30);
      *(undefined4 *)(param_2 + 0x10) = local_34;
      local_30 = uVar3;
    }
  }
  FUN_0065dd90(param_1,param_2);
  return;
}

