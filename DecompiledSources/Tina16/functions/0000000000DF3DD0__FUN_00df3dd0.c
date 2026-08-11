/* Ghidra address: 00df3dd0 */
/* Ghidra symbol: FUN_00df3dd0 */


void FUN_00df3dd0(longlong param_1,longlong param_2,byte param_3,ulonglong param_4,double param_5)

{
  longlong lVar1;
  double *pdVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  bool bVar9;
  double unaff_XMM6_Qa;
  double unaff_XMM7_Qa;
  double unaff_XMM8_Qa;
  undefined8 in_stack_ffffffffffffff18;
  undefined4 uVar10;
  undefined8 in_stack_ffffffffffffff20;
  undefined4 uVar11;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60 [7];
  
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff20 >> 0x20);
  uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + -8 + (param_4 & 0xff) * 8);
  uVar3 = FUN_01b05600(param_1,**(undefined1 **)(lVar1 + 8));
  uVar4 = FUN_01b05600(param_1,*(undefined1 *)(*(longlong *)(lVar1 + 8) + 1));
  uVar5 = FUN_01b05600(param_1,*(undefined1 *)(*(longlong *)(lVar1 + 8) + 2));
  uVar6 = FUN_01b05600(param_1,*(undefined1 *)(*(longlong *)(lVar1 + 8) + 3));
  uVar7 = FUN_01b05690(param_1,param_4 & 0xffffffff,1);
  uVar8 = FUN_01b05690(param_1,param_4 & 0xffffffff,2);
  if (param_3 < 8) {
    bVar9 = ((int)CONCAT71((int7)(uVar8 >> 8),1) << (param_3 & 0x1f) & 0x22U) != 0;
  }
  else {
    bVar9 = false;
  }
  if (!bVar9) {
    pdVar2 = *(double **)(lVar1 + 0x18);
    unaff_XMM6_Qa = *pdVar2;
    unaff_XMM7_Qa = pdVar2[1];
    unaff_XMM8_Qa = pdVar2[2];
  }
  FUN_017dc8c0(*(undefined8 *)(param_2 + 0xd8),0,0x3ff0000000000000,uVar3,CONCAT44(uVar10,uVar4),
               CONCAT44(uVar11,uVar7));
  FUN_017dc8c0(*(undefined8 *)(param_2 + 0xd8),0,0x3ff0000000000000,uVar5,uVar6,uVar8 & 0xffffffff);
  if ((param_3 == 1) || (param_3 == 5)) {
    FUN_017dc850(*(undefined8 *)(param_2 + 0xd8),0,0,uVar7,uVar7);
    FUN_017dc850(*(undefined8 *)(param_2 + 0xd8),0,0,uVar8 & 0xffffffff,uVar8 & 0xffffffff);
    FUN_017dc850(*(undefined8 *)(param_2 + 0xd8),0,0,uVar7,uVar8 & 0xffffffff);
    FUN_017dc850(*(undefined8 *)(param_2 + 0xd8),0,0,uVar8 & 0xffffffff,uVar7);
    FUN_017dc850(*(undefined8 *)(param_2 + 0xd8),0,0,uVar7,*(undefined4 *)(param_2 + 0x308));
    FUN_017dc850(*(undefined8 *)(param_2 + 0xd8),0,0,uVar8 & 0xffffffff,
                 *(undefined4 *)(param_2 + 0x308));
  }
  else if (param_3 == 6) {
    FUN_017c5600(param_2,uVar7,uVar8 & 0xffffffff,unaff_XMM6_Qa,unaff_XMM7_Qa,unaff_XMM8_Qa,local_60
                 ,&local_68,&local_70,&local_78,&local_80);
    FUN_017dc850(*(undefined8 *)(param_2 + 0xd8),0,local_60[0],uVar7,uVar7);
    FUN_017dc850(*(undefined8 *)(param_2 + 0xd8),0,local_68,uVar8 & 0xffffffff,uVar8 & 0xffffffff);
    FUN_017dc850(*(undefined8 *)(param_2 + 0xd8),0,local_70,uVar7,uVar8 & 0xffffffff);
    FUN_017dc850(*(undefined8 *)(param_2 + 0xd8),0,local_70,uVar8 & 0xffffffff,uVar7);
    FUN_017dc850(*(undefined8 *)(param_2 + 0xd8),0,local_78,uVar7,*(undefined4 *)(param_2 + 0x308));
    FUN_017dc850(*(undefined8 *)(param_2 + 0xd8),0,local_80,uVar8 & 0xffffffff,
                 *(undefined4 *)(param_2 + 0x308));
  }
  else if (param_3 == 8) {
    FUN_017dc850(*(undefined8 *)(param_2 + 0xd8),1,param_5 * unaff_XMM6_Qa,uVar7,uVar7);
    FUN_017dc850(*(undefined8 *)(param_2 + 0xd8),1,param_5 * unaff_XMM7_Qa,uVar8 & 0xffffffff,
                 uVar8 & 0xffffffff);
    FUN_017dc850(*(undefined8 *)(param_2 + 0xd8),1,param_5 * unaff_XMM8_Qa,uVar7,uVar8 & 0xffffffff)
    ;
    FUN_017dc850(*(undefined8 *)(param_2 + 0xd8),1,param_5 * unaff_XMM8_Qa,uVar8 & 0xffffffff,uVar7)
    ;
  }
  return;
}

