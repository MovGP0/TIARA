/* Ghidra address: 017530e0 */
/* Ghidra symbol: FUN_017530e0 */


void FUN_017530e0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5,double param_6)

{
  undefined4 uVar1;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined8 local_res20;
  undefined4 *puVar2;
  undefined4 in_stack_ffffffffffffff80;
  uint uVar3;
  double dVar4;
  undefined8 in_stack_ffffffffffffff90;
  ulonglong uVar5;
  undefined8 in_stack_ffffffffffffff98;
  undefined4 uVar7;
  undefined8 uVar6;
  undefined8 in_stack_ffffffffffffffa0;
  undefined4 uVar9;
  ulonglong uVar8;
  uint in_stack_ffffffffffffffa8;
  uint in_stack_ffffffffffffffb0;
  undefined8 local_10;
  
  uVar1 = (undefined4)((ulonglong)in_stack_ffffffffffffff90 >> 0x20);
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffa0 >> 0x20);
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  local_10 = 0;
  local_res10[0] = param_2;
  local_res18[0] = param_3;
  local_res20 = param_4;
  FUN_00414610(param_4);
  FUN_00414610(param_5);
  puVar2 = local_res18;
  uVar3 = CONCAT31((int3)((uint)in_stack_ffffffffffffff80 >> 8),*(longlong *)(param_1 + 400) == 0);
  FUN_01d048c0(*(undefined8 *)(*(longlong *)(param_1 + 0x180) + 0x28),local_res10[0],local_res18[0],
               local_res10,puVar2,uVar3,1);
  if (*(longlong *)(param_1 + 0x188) != 0) {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x188) + 0xd8))
                      (*(longlong **)(param_1 + 0x188),0x8000);
    puVar2 = (undefined4 *)((ulonglong)puVar2 & 0xffffffffffffff00);
    uVar3 = uVar3 & 0xffffff00;
    in_stack_ffffffffffffffa8 = 300;
    dVar4 = param_6;
    FUN_01a98770(*(undefined8 *)(param_1 + 0x188),local_res10[0],local_res18[0],0,puVar2,uVar3,
                 param_6,param_6,CONCAT44(uVar7,uVar1),
                 CONCAT44(uVar9,*(undefined4 *)(*(longlong *)(param_1 + 0x188) + 0xfc)),300,
                 in_stack_ffffffffffffffb0 & 0xffffff00,0,param_5,local_res20,0,0);
    uVar1 = (undefined4)((ulonglong)dVar4 >> 0x20);
  }
  if (*(longlong *)(param_1 + 400) != 0) {
    uVar5 = CONCAT44(uVar1,0x8000);
    uVar6 = *(undefined8 *)(param_1 + 400);
    uVar8 = *(ulonglong *)(param_1 + 0x198);
    dVar4 = param_6;
    FUN_01244970(&local_res20,local_res10,local_res18,0,(ulonglong)puVar2 & 0xffffffffffffff00,
                 uVar3 & 0xffffff00,param_6,uVar5,uVar6,uVar8);
    uVar9 = (undefined4)((ulonglong)uVar6 >> 0x20);
    uVar7 = (undefined4)((ulonglong)dVar4 >> 0x20);
    uVar1 = FUN_0040c770(param_6 * 11.0);
    FUN_012444f0(&local_10,*(undefined8 *)(param_1 + 400),*(undefined8 *)(param_1 + 0x198),
                 local_res20,param_5,local_res10[0],CONCAT44(uVar7,local_res18[0]),
                 uVar5 & 0xffffffff00000000,CONCAT44(uVar9,uVar1),uVar8 & 0xffffffffffffff00,
                 in_stack_ffffffffffffffa8 & 0xffffff00,0x8000);
  }
  FUN_0041b800(&local_10);
  FUN_00414560(&local_res20,2);
  return;
}

