/* Ghidra address: 01745db0 */
/* Ghidra symbol: FUN_01745db0 */


void FUN_01745db0(longlong param_1,longlong *param_2,longlong param_3,ulonglong param_4)

{
  byte bVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint *puVar7;
  int iVar8;
  double dVar9;
  longlong local_res18;
  ulonglong local_res20;
  uint in_stack_ffffffffffffff10;
  double dVar10;
  double in_stack_ffffffffffffff20;
  ulonglong uVar11;
  undefined8 in_stack_ffffffffffffff28;
  longlong lVar12;
  ulonglong in_stack_ffffffffffffff30;
  undefined4 uVar13;
  uint in_stack_ffffffffffffff38;
  uint in_stack_ffffffffffffff40;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  uint local_4c;
  int local_48;
  uint local_44;
  byte *local_40 [3];
  
  local_70 = 0;
  local_68 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_0041b910(param_3);
  FUN_0041b910(local_res20);
  if (param_2 == (longlong *)0x0) {
LAB_01745e36:
    if (local_res18 == 0) goto LAB_017461e7;
  }
  else {
    cVar3 = FUN_0175ad40(param_1,param_2);
    if (cVar3 == '\0') goto LAB_01745e36;
  }
  plVar2 = *(longlong **)(param_1 + 0x28);
  if (*(char *)((longlong)plVar2 + 0xb) == '\0') {
    (**(code **)(*plVar2 + 0x2d0))(plVar2,0,local_40);
    bVar1 = *local_40[0];
    iVar8 = 0x11;
    puVar7 = &DAT_01f9afdc;
    do {
      FUN_01744db0(param_1,&local_60,(char)*puVar7);
      uVar6 = CONCAT31((int3)(in_stack_ffffffffffffff10 >> 8),local_res18 == 0);
      FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),local_60,local_5c,&local_44,&local_48,uVar6,1);
      in_stack_ffffffffffffff10 = CONCAT31((int3)((uint)uVar6 >> 8),local_res18 == 0);
      FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),local_58,local_54,&local_4c,&local_50,
                   in_stack_ffffffffffffff10,1);
      if (param_2 != (longlong *)0x0) {
        if (*puVar7 == (uint)bVar1) {
          in_stack_ffffffffffffff10 = 0;
          (**(code **)(*param_2 + 0x60))(param_2,local_44,local_48,local_4c,local_50,0xff);
        }
        else {
          in_stack_ffffffffffffff10 = (**(code **)(*param_2 + 0xd0))(param_2,0);
          (**(code **)(*param_2 + 0x60))
                    (param_2,local_44,local_48,local_4c,local_50,in_stack_ffffffffffffff10);
        }
      }
      FUN_017452a0(param_1,&local_68,*puVar7);
      iVar4 = FUN_00416db0(local_68,L"Enter");
      if (iVar4 == 0) {
LAB_0174600f:
        dVar9 = 0.85;
      }
      else {
        iVar4 = FUN_00416db0(local_68,&DAT_017462b8);
        if (iVar4 == 0) goto LAB_0174600f;
        dVar9 = 1.0;
      }
      uVar13 = (undefined4)(in_stack_ffffffffffffff30 >> 0x20);
      uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffff28 >> 0x20);
      local_44 = (int)(local_44 + local_4c) / 2;
      local_48 = (local_48 + local_50) / 2;
      if (param_2 != (longlong *)0x0) {
        uVar5 = (**(code **)(*param_2 + 0xd8))(param_2,0);
        in_stack_ffffffffffffff10 = in_stack_ffffffffffffff10 & 0xffffff00;
        in_stack_ffffffffffffff28 = CONCAT44(uVar6,uVar5);
        in_stack_ffffffffffffff30 = CONCAT44(uVar13,*(undefined4 *)((longlong)param_2 + 0xfc));
        in_stack_ffffffffffffff38 = 300;
        in_stack_ffffffffffffff40 = in_stack_ffffffffffffff40 & 0xffffff00;
        in_stack_ffffffffffffff20 = dVar9;
        FUN_01a98770(param_2,local_44,local_48,1,1,in_stack_ffffffffffffff10,dVar9,dVar9,
                     in_stack_ffffffffffffff28,in_stack_ffffffffffffff30,300,
                     in_stack_ffffffffffffff40,0,param_2[0x21],local_68,0,0);
      }
      if (local_res18 != 0) {
        uVar11 = (ulonglong)in_stack_ffffffffffffff20 & 0xffffffff00000000;
        dVar10 = dVar9;
        lVar12 = local_res18;
        in_stack_ffffffffffffff30 = local_res20;
        FUN_01244970(&local_68,&local_44,&local_48,0,1,1,dVar9,uVar11,local_res18,local_res20);
        uVar5 = (undefined4)((ulonglong)lVar12 >> 0x20);
        uVar13 = (undefined4)((ulonglong)dVar10 >> 0x20);
        uVar6 = FUN_0040c770(dVar9 * 11.0);
        in_stack_ffffffffffffff20 = (double)(uVar11 & 0xffffffff00000000);
        in_stack_ffffffffffffff28 = CONCAT44(uVar5,uVar6);
        in_stack_ffffffffffffff30 = in_stack_ffffffffffffff30 & 0xffffffffffffff00;
        in_stack_ffffffffffffff38 = in_stack_ffffffffffffff38 & 0xffffff00;
        in_stack_ffffffffffffff40 = 0;
        in_stack_ffffffffffffff10 = local_44;
        FUN_012444f0(&local_70,local_res18,local_res20,local_68,L"Arial",local_44,
                     CONCAT44(uVar13,local_48),in_stack_ffffffffffffff20,in_stack_ffffffffffffff28,
                     in_stack_ffffffffffffff30,in_stack_ffffffffffffff38,0);
      }
      puVar7 = puVar7 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
LAB_017461e7:
  FUN_0041b800(&local_70);
  FUN_00414480(&local_68);
  FUN_0041b800(&local_res18);
  FUN_0041b800(&local_res20);
  return;
}

