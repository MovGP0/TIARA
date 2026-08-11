/* Ghidra address: 01d76240 */
/* Ghidra symbol: FUN_01d76240 */


/* WARNING: Removing unreachable block (ram,0x01d763e3) */

void FUN_01d76240(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  int *piVar9;
  int iVar10;
  ulonglong in_stack_fffffffffffffea0;
  int local_114;
  int local_110;
  undefined8 local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  int local_bc [33];
  undefined1 *local_38;
  char local_2a;
  char local_29;
  
  local_100 = 0;
  local_108 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  puVar7 = (undefined1 *)FUN_00dd1b70(0,&PTR_FUN_01d75cd8);
  *puVar7 = 1;
  local_38 = puVar7;
  uVar8 = FUN_016ebdc0(param_1);
  uVar4 = FUN_01d03160(uVar8);
  if (uVar4 < 0x57b) {
    if (uVar4 == 0x57a) {
      local_114 = 0xc;
    }
    else if (uVar4 == 0x578) {
      local_114 = 8;
    }
    else if (uVar4 == 0x579) {
      local_114 = 10;
    }
  }
  else if (uVar4 == 0x57b) {
    local_114 = 0xe;
  }
  else if (uVar4 == 0x57c) {
    local_114 = 0x10;
  }
  *(int *)(puVar7 + 0x12908) = local_114;
  iVar5 = 0;
  local_110 = 0;
  if (-1 < local_114 + -1) {
    piVar9 = local_bc;
    iVar10 = local_114;
    do {
      *piVar9 = local_110 + 3;
      iVar5 = local_110 + 1;
      piVar9 = piVar9 + 1;
      iVar10 = iVar10 + -1;
      local_110 = iVar5;
    } while (iVar10 != 0);
  }
  local_29 = '\x01';
  local_2a = (char)local_114 + '\x03';
  FUN_016eacf0(param_1,CONCAT71((uint7)(uint3)((uint)iVar5 >> 8),4),1);
  puVar7[0x11] = local_29;
  local_29 = local_29 + '\x01';
  puVar7[0x13] = 1;
  bVar2 = FUN_016eacf0(param_1,3,1);
  if (bVar2 < 2) {
    puVar7[0x10] = local_29;
    local_29 = local_29 + puVar7[0x12908];
    puVar7[0x12] = local_2a;
  }
  else {
    FUN_00de8980(&local_e0,0x524,*(undefined8 *)(param_2 + 0x1310));
    FUN_00de8980(&local_e8,0x516,*(undefined8 *)(param_2 + 0x1310));
    FUN_00416ad0(&local_e0,local_e8);
    FUN_016fd8d0(local_e0);
  }
  uVar6 = FUN_016eacf0(param_1,5,2);
  iVar5 = *(int *)(puVar7 + 0x12908);
  local_110 = 0;
  if (-1 < iVar5 + -1) {
    piVar9 = local_bc;
    do {
      in_stack_fffffffffffffea0 =
           CONCAT44((int)(in_stack_fffffffffffffea0 >> 0x20),uVar6) & 0xffffffff000000ff;
      FUN_00dd58f0(puVar7 + (longlong)local_110 * 0x2f8 + 0x28,(char)*piVar9,2,&local_29,&local_2a,
                   in_stack_fffffffffffffea0,0,1,0,0,0,0);
      local_110 = local_110 + 1;
      piVar9 = piVar9 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_016e9e20(param_1,local_29 + -1);
  FUN_016e9cd0(param_1,(local_2a - ((char)local_114 + '\x02')) + -1);
  cVar3 = FUN_016eacf0(param_1,4,1);
  if (cVar3 == '\0') {
    FUN_01d761c0(param_1,param_2,puVar7);
  }
  else {
    FUN_00de8980(&local_f0,0x524,*(undefined8 *)(param_2 + 0x1310));
    FUN_00de8980(&local_f8,0x516,*(undefined8 *)(param_2 + 0x1310));
    FUN_00416ad0(&local_f0,local_f8);
    FUN_016fd8d0(local_f0);
  }
  local_110 = 0;
  if (-1 < local_114 + -1) {
    do {
      lVar1 = *(longlong *)(puVar7 + (longlong)local_110 * 0x2f8 + 0x28);
      *(undefined1 *)(lVar1 + 6) = *puVar7;
      (**(code **)(*(longlong *)(lVar1 + 8) + 8))(lVar1,param_1);
      local_110 = local_110 + 1;
      local_114 = local_114 + -1;
    } while (local_114 != 0);
  }
  bVar2 = FUN_016eacf0(param_1,3,1);
  if (bVar2 < 2) {
    FUN_01d76110(param_1,puVar7[0x13],2,puVar7[0x10],puVar7[0x12],puVar7);
  }
  else {
    FUN_00de8980(&local_100,0x524,*(undefined8 *)(param_2 + 0x1310));
    FUN_00de8980(&local_108,0x516,*(undefined8 *)(param_2 + 0x1310));
    FUN_00416ad0(&local_100,local_108);
    FUN_016fd8d0(local_100);
  }
  FUN_016e9f40(param_1,FUN_01d76070);
  FUN_016ea050(param_1,&local_38,8);
  FUN_016e9f50(param_1,FUN_01d76220);
  FUN_00414560(&local_108,8);
  return;
}

