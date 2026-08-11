/* Ghidra address: 01d74740 */
/* Ghidra symbol: FUN_01d74740 */


/* WARNING: Removing unreachable block (ram,0x01d74815) */

void FUN_01d74740(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulonglong in_stack_ffffffffffffff40;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 *local_38;
  char local_2a;
  char local_29;
  
  local_70 = 0;
  local_78 = 0;
  local_60 = 0;
  local_68 = 0;
  local_50 = 0;
  local_58 = 0;
  local_40 = 0;
  local_48 = 0;
  puVar5 = (undefined1 *)FUN_00dd1b70(0,&PTR_FUN_01d74268);
  *puVar5 = 1;
  local_29 = '\x01';
  local_2a = '\v';
  local_38 = puVar5;
  FUN_016eacf0(param_1,4,1);
  puVar5[0x11] = local_29;
  local_29 = local_29 + '\x01';
  puVar5[0x13] = 1;
  bVar2 = FUN_016eacf0(param_1,3,1);
  if (bVar2 < 2) {
    puVar5[0x10] = local_29;
    local_29 = local_29 + '\b';
    puVar5[0x12] = local_2a;
  }
  else {
    FUN_00de8980(&local_50,0x524,*(undefined8 *)(param_2 + 0x1310));
    FUN_00de8980(&local_58,0x516,*(undefined8 *)(param_2 + 0x1310));
    FUN_00416ad0(&local_50,local_58);
    FUN_016fd8d0(local_50);
  }
  uVar4 = FUN_016eacf0(param_1,5,2);
  bVar2 = 0;
  puVar6 = &DAT_01fffd30;
  do {
    in_stack_ffffffffffffff40 =
         CONCAT44((int)(in_stack_ffffffffffffff40 >> 0x20),uVar4) & 0xffffffff000000ff;
    FUN_00dd58f0(puVar5 + (ulonglong)bVar2 * 0x2f8 + 0x28,*puVar6,10,&local_29,&local_2a,
                 in_stack_ffffffffffffff40,0,1,0,0,0,0);
    bVar2 = bVar2 + 1;
    puVar6 = puVar6 + 1;
  } while (bVar2 != 8);
  FUN_016e9e20(param_1,local_29 + -1);
  FUN_016e9cd0(param_1,local_2a + -0xb);
  cVar3 = FUN_016eacf0(param_1,4,1);
  if (cVar3 == '\0') {
    FUN_01d746c0(param_1,param_2,puVar5);
  }
  else {
    FUN_00de8980(&local_60,0x524,*(undefined8 *)(param_2 + 0x1310));
    FUN_00de8980(&local_68,0x516,*(undefined8 *)(param_2 + 0x1310));
    FUN_00416ad0(&local_60,local_68);
    FUN_016fd8d0(local_60);
  }
  bVar2 = 0;
  do {
    lVar1 = *(longlong *)(puVar5 + (ulonglong)bVar2 * 0x2f8 + 0x28);
    *(undefined1 *)(lVar1 + 6) = *puVar5;
    (**(code **)(*(longlong *)(lVar1 + 8) + 8))(lVar1,param_1);
    bVar2 = bVar2 + 1;
  } while (bVar2 != 8);
  bVar2 = FUN_016eacf0(param_1,3,1);
  if (bVar2 < 2) {
    FUN_01d74630(param_1,puVar5[0x13],10,puVar5[0x10],puVar5[0x12],puVar5);
  }
  else {
    FUN_00de8980(&local_70,0x524,*(undefined8 *)(param_2 + 0x1310));
    FUN_00de8980(&local_78,0x516,*(undefined8 *)(param_2 + 0x1310));
    FUN_00416ad0(&local_70,local_78);
    FUN_016fd8d0(local_70);
  }
  FUN_016e9f40(param_1,FUN_01d74580);
  FUN_016ea050(param_1,&local_38,8);
  FUN_016e9f50(param_1,FUN_01d74720);
  FUN_00414560(&local_78,8);
  return;
}

