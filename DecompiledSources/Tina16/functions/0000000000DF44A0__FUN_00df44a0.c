/* Ghidra address: 00df44a0 */
/* Ghidra symbol: FUN_00df44a0 */


void FUN_00df44a0(longlong param_1,longlong param_2,byte param_3,ulonglong param_4,double param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  double *pdVar5;
  bool bVar6;
  double unaff_XMM6_Qa;
  double unaff_XMM7_Qa;
  double unaff_XMM8_Qa;
  int local_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60 [7];
  
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x40) + -8 + (param_4 & 0xff) * 8);
  puVar4 = *(undefined4 **)(lVar3 + 0x30);
  uVar1 = *puVar4;
  uVar2 = puVar4[1];
  if (param_3 < 8) {
    bVar6 = ((int)CONCAT71((int7)((ulonglong)puVar4 >> 8),1) << (param_3 & 0x1f) & 0x22U) != 0;
  }
  else {
    bVar6 = false;
  }
  if (!bVar6) {
    pdVar5 = *(double **)(lVar3 + 0x18);
    unaff_XMM6_Qa = *pdVar5;
    unaff_XMM7_Qa = pdVar5[1];
    unaff_XMM8_Qa = pdVar5[2];
  }
  local_84 = 0;
  FUN_017de460(*(undefined8 *)(param_2 + 0xd8),0x3ff0000000000000,*(undefined8 *)(lVar3 + 0x58),
               &local_84);
  FUN_017de460(*(undefined8 *)(param_2 + 0xd8),0x3ff0000000000000,*(undefined8 *)(lVar3 + 0x58),
               &local_84);
  if ((param_3 == 1) || (param_3 == 5)) {
    FUN_017de390(*(undefined8 *)(param_2 + 0xd8),0,*(undefined8 *)(lVar3 + 0x58),1,&local_84);
    FUN_017de390(*(undefined8 *)(param_2 + 0xd8),0,*(undefined8 *)(lVar3 + 0x58),1,&local_84);
    FUN_017de390(*(undefined8 *)(param_2 + 0xd8),0,*(undefined8 *)(lVar3 + 0x58),1,&local_84);
    FUN_017de390(*(undefined8 *)(param_2 + 0xd8),0,*(undefined8 *)(lVar3 + 0x58),1,&local_84);
    FUN_017de390(*(undefined8 *)(param_2 + 0xd8),0,*(undefined8 *)(lVar3 + 0x58),1,&local_84);
    FUN_017de390(*(undefined8 *)(param_2 + 0xd8),0,*(undefined8 *)(lVar3 + 0x58),1,&local_84);
  }
  else if (param_3 == 6) {
    FUN_017c5600(param_2,uVar1,uVar2,unaff_XMM6_Qa,unaff_XMM7_Qa,unaff_XMM8_Qa,local_60,&local_68,
                 &local_70,&local_78,&local_80);
    FUN_017de390(*(undefined8 *)(param_2 + 0xd8),local_60[0],*(undefined8 *)(lVar3 + 0x58),1,
                 &local_84);
    FUN_017de390(*(undefined8 *)(param_2 + 0xd8),local_68,*(undefined8 *)(lVar3 + 0x58),1,&local_84)
    ;
    FUN_017de390(*(undefined8 *)(param_2 + 0xd8),local_70,*(undefined8 *)(lVar3 + 0x58),1,&local_84)
    ;
    FUN_017de390(*(undefined8 *)(param_2 + 0xd8),local_70,*(undefined8 *)(lVar3 + 0x58),1,&local_84)
    ;
    FUN_017de390(*(undefined8 *)(param_2 + 0xd8),local_78,*(undefined8 *)(lVar3 + 0x58),1,&local_84)
    ;
    FUN_017de390(*(undefined8 *)(param_2 + 0xd8),local_80,*(undefined8 *)(lVar3 + 0x58),1,&local_84)
    ;
  }
  else if (param_3 == 8) {
    FUN_017de420(*(undefined8 *)(param_2 + 0xd8),param_5 * unaff_XMM6_Qa,
                 *(undefined8 *)(lVar3 + 0x58),local_84);
    local_84 = local_84 + 1;
    FUN_017de420(*(undefined8 *)(param_2 + 0xd8),param_5 * unaff_XMM7_Qa,
                 *(undefined8 *)(lVar3 + 0x58),local_84);
    local_84 = local_84 + 1;
    FUN_017de420(*(undefined8 *)(param_2 + 0xd8),param_5 * unaff_XMM8_Qa,
                 *(undefined8 *)(lVar3 + 0x58),local_84);
    local_84 = local_84 + 1;
    FUN_017de420(*(undefined8 *)(param_2 + 0xd8),param_5 * unaff_XMM8_Qa,
                 *(undefined8 *)(lVar3 + 0x58),local_84);
  }
  return;
}

