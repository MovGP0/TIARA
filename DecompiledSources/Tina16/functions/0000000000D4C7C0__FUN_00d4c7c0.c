/* Ghidra address: 00d4c7c0 */
/* Ghidra symbol: FUN_00d4c7c0 */


void FUN_00d4c7c0(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  short sVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  longlong local_res18 [2];
  ulonglong in_stack_ffffffffffffff78;
  undefined8 local_70;
  ulonglong local_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_40 = 0;
  local_48 = 0;
  local_38 = *param_4;
  uStack_30 = param_4[1];
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  if (local_res18[0] != 0) {
    FUN_00414480(&local_40);
    FUN_00414480(&local_48);
    uVar9 = (undefined4)(in_stack_ffffffffffffff78 >> 0x20);
    bVar2 = false;
    iVar10 = 0;
    if (local_res18[0] != 0) {
      iVar10 = *(int *)(local_res18[0] + -4);
    }
    iVar7 = 1;
    bVar3 = false;
    if (0 < iVar10) {
      do {
        bVar2 = bVar3;
        FUN_00416780(&local_60,*(undefined2 *)(local_res18[0] + -2 + (longlong)iVar7 * 2));
        FUN_00416ad0(&local_40,local_60);
        in_stack_ffffffffffffff78 = in_stack_ffffffffffffff78 & 0xffffffff00000000;
        FUN_004238d0(local_58,0,0,0,in_stack_ffffffffffffff78);
        uVar8 = (undefined4)(in_stack_ffffffffffffff78 >> 0x20);
        uVar9 = 0;
        if (local_40 != 0) {
          uVar9 = *(undefined4 *)(local_40 + -4);
        }
        uVar6 = FUN_00416740(local_40);
        in_stack_ffffffffffffff78 = CONCAT44(uVar8,0xc00);
        thunk_FUN_041a24be(param_2,uVar6,uVar9,local_58,in_stack_ffffffffffffff78);
        iVar4 = FUN_004230a0(local_58);
        iVar5 = FUN_004230a0(&local_38);
        if ((iVar5 < iVar4) && (*(short *)(local_res18[0] + -2 + (longlong)iVar7 * 2) != 0x20)) {
          bVar2 = true;
          FUN_00416780(&local_68,*(undefined2 *)(local_res18[0] + -2 + (longlong)iVar7 * 2));
          in_stack_ffffffffffffff78 = local_68;
          FUN_00416cd0(&local_48,3,local_48,&LAB_00d4ca98,local_68);
          FUN_00416780(&local_40,*(undefined2 *)(local_res18[0] + -2 + (longlong)iVar7 * 2));
        }
        else {
          sVar1 = *(short *)(local_res18[0] + -2 + (longlong)iVar7 * 2);
          FUN_00416780(&local_70,sVar1);
          FUN_00416ad0(&local_48,local_70);
          if (sVar1 == 0x20) {
            FUN_00414480(&local_40);
          }
        }
        uVar9 = (undefined4)(in_stack_ffffffffffffff78 >> 0x20);
        iVar7 = iVar7 + 1;
        iVar10 = iVar10 + -1;
        bVar3 = bVar2;
      } while (iVar10 != 0);
    }
    if (bVar2) {
      uVar8 = 0;
      if (local_48 != 0) {
        uVar8 = *(undefined4 *)(local_48 + -4);
      }
      uVar6 = FUN_00416740(local_48);
      thunk_FUN_041a24be(param_2,uVar6,uVar8,&local_38,CONCAT44(uVar9,0x811));
    }
    else {
      uVar8 = 0;
      if (local_res18[0] != 0) {
        uVar8 = *(undefined4 *)(local_res18[0] + -4);
      }
      uVar6 = FUN_00416740(local_res18[0]);
      thunk_FUN_041a24be(param_2,uVar6,uVar8,&local_38,CONCAT44(uVar9,0x800));
    }
  }
  FUN_00414560(&local_70,3);
  FUN_00414560(&local_48,2);
  FUN_00414480(local_res18);
  return;
}

