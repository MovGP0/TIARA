/* Ghidra address: 01c1af30 */
/* Ghidra symbol: FUN_01c1af30 */


void FUN_01c1af30(longlong *param_1,undefined4 *param_2,undefined4 *param_3,undefined8 param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 local_res20;
  undefined8 in_stack_ffffffffffffff78;
  undefined4 uVar8;
  ulonglong uVar7;
  longlong local_58;
  longlong lStack_50;
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 uStack_30;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  local_res20 = param_4;
  FUN_00414610(param_4);
  if (*(char *)((longlong)param_1 + 0x344) != '\0') {
    uVar3 = FUN_00781840();
    uVar4 = FUN_005ffa40(param_1[0x62]);
    plVar5 = (longlong *)FUN_00781840();
    (**(code **)(*plVar5 + 0x158))(plVar5,local_48,0x1d);
    uVar8 = 0;
    FUN_00778dc0(uVar3,uVar4,local_48,param_1 + 0x78,0,0);
  }
  cVar1 = FUN_004113d0(param_1[0xf],&PTR_FUN_01bf3cc0);
  if (cVar1 != '\0') {
    lVar6 = FUN_01c07120(param_1);
    if (*(char *)(lVar6 + 0x4f8) == '\0') {
      FUN_00414b50(&local_res20,param_1[0x71]);
    }
  }
  FUN_005ff880(param_1[0x62],*(undefined8 *)(*(longlong *)PTR_DAT_02005950 + 0x110));
  local_38 = param_1[0x78];
  uStack_30 = param_1[0x79];
  uVar3 = FUN_005ffa40(param_1[0x62]);
  uVar7 = CONCAT44(uVar8,*param_3) | 0x500;
  FUN_01c1a830(param_1,uVar3,local_res20,&local_38,uVar7);
  uVar8 = (undefined4)(uVar7 >> 0x20);
  FUN_00423b50(&local_38,*param_2,
               (longlong)
               ((*(int *)((longlong)param_1 + 0x3cc) - *(int *)((longlong)param_1 + 0x3c4)) -
               (uStack_30._4_4_ - local_38._4_4_)) / 2 & 0xffffffff);
  uVar3 = FUN_005ffa40(param_1[0x62]);
  uVar4 = CONCAT44(uVar8,*param_3);
  FUN_01c1a830(param_1,uVar3,local_res20,&local_38,uVar4);
  uVar8 = (undefined4)((ulonglong)uVar4 >> 0x20);
  cVar1 = (**(code **)(*param_1 + 0x1c8))(param_1);
  if ((cVar1 != '\0') && (param_1[100] != 0)) {
    cVar1 = FUN_01bfaa20(param_1[100]);
    if (cVar1 == '\0') {
      uVar2 = FUN_006520b0(param_1,2);
      *param_3 = uVar2;
      uVar3 = CONCAT44(uVar8,uStack_30._4_4_);
      FUN_004238d0(&local_58,*(undefined4 *)((longlong)param_1 + 0x374),local_38._4_4_,
                   *(undefined4 *)((longlong)param_1 + 0x37c),uVar3);
      uVar8 = (undefined4)((ulonglong)uVar3 >> 0x20);
      local_38 = local_58;
      uStack_30 = lStack_50;
      FUN_00423b50(&local_38,(int)param_1[0x13],0);
      uVar3 = FUN_005ffa40(param_1[0x62]);
      FUN_01c1a830(param_1,uVar3,*(undefined8 *)(param_1[100] + 0x98),&local_38,
                   CONCAT44(uVar8,*param_3));
    }
  }
  FUN_00414480(&local_res20);
  return;
}

