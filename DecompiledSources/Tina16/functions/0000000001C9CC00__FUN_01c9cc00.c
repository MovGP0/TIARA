/* Ghidra address: 01c9cc00 */
/* Ghidra symbol: FUN_01c9cc00 */


void FUN_01c9cc00(longlong param_1,undefined8 param_2,undefined2 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined2 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  bool bVar8;
  undefined8 in_stack_ffffffffffffff98;
  undefined1 *puVar9;
  undefined1 local_58 [28];
  ulonglong local_3c;
  undefined4 local_34;
  undefined8 local_30;
  undefined4 uVar10;
  
  uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  if ((*(longlong *)(param_1 + 7000) != 0) &&
     (cVar4 = FUN_004113d0(*(longlong *)(param_1 + 7000),&PTR_FUN_0135f8e0), cVar4 != '\0')) {
    local_30 = CONCAT44(param_5,param_4);
    local_30 = FUN_0064d1f0(*(undefined8 *)(param_1 + 0x700),&local_30);
    uVar6 = FUN_0064d3a0(*(undefined8 *)(param_1 + 0xa10),&local_30);
    local_30._0_2_ = (undefined2)uVar6;
    local_30._4_2_ = (undefined2)((ulonglong)uVar6 >> 0x20);
    local_34 = CONCAT22(local_30._4_2_,(undefined2)local_30);
    local_30 = uVar6;
    uVar5 = FUN_01b1fd10(param_3);
    uVar6 = FUN_0065b870(*(undefined8 *)(param_1 + 0xa10));
    thunk_FUN_0413e052(uVar6,0x200,uVar5,(longlong)local_34);
    return;
  }
  uVar7 = FUN_0083fdd0(*(undefined8 *)(param_1 + 0x700),param_4,param_5);
  local_3c._0_4_ = (int)uVar7;
  iVar3 = (int)local_3c;
  iVar1 = *(int *)(param_1 + 0x1b40);
  bVar8 = (int)local_3c != iVar1;
  local_3c = uVar7;
  if ((bVar8) && (iVar1 != -1)) {
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x700) + 0x4b0);
    FUN_00498350(local_58,iVar1 * iVar2,0,(iVar1 + 1) * iVar2,
                 CONCAT44(uVar10,*(undefined4 *)(*(longlong *)(param_1 + 0x700) + 0x4b4)));
    puVar9 = local_58;
    FUN_01c72fc0(param_1,param_2,iVar1,1,puVar9,0);
    uVar10 = (undefined4)((ulonglong)puVar9 >> 0x20);
  }
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x700) + 0x4b0);
  FUN_00498350(local_58,iVar3 * iVar1,0,(iVar3 + 1) * iVar1,
               CONCAT44(uVar10,*(undefined4 *)(*(longlong *)(param_1 + 0x700) + 0x4b4)));
  FUN_01c72fc0(param_1,param_2,uVar7 & 0xffffffff,1,local_58,0x10);
  return;
}

