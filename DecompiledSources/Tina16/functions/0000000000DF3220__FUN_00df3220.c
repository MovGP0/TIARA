/* Ghidra address: 00df3220 */
/* Ghidra symbol: FUN_00df3220 */


void FUN_00df3220(longlong param_1,longlong param_2,byte param_3,ulonglong param_4,double param_5)

{
  undefined2 uVar1;
  int iVar2;
  longlong lVar3;
  short sVar4;
  bool bVar5;
  undefined8 uVar6;
  double unaff_XMM6_Qa;
  undefined4 uVar7;
  longlong local_58;
  undefined4 local_4c;
  ulonglong local_48;
  undefined8 local_40 [3];
  
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x40) + -8 + (param_4 & 0xff) * 8);
  iVar2 = **(int **)(lVar3 + 0x30);
  if (param_3 < 8) {
    bVar5 = ((int)CONCAT71((int7)((ulonglong)*(int **)(lVar3 + 0x30) >> 8),1) << (param_3 & 0x1f) &
            0x22U) != 0;
  }
  else {
    bVar5 = false;
  }
  if (!bVar5) {
    unaff_XMM6_Qa = **(double **)(lVar3 + 0x18);
  }
  local_4c = 0;
  FUN_017de460(*(undefined8 *)(param_2 + 0xd8),0x3ff0000000000000,*(undefined8 *)(lVar3 + 0x58),
               &local_4c);
  if ((param_3 == 1) || (param_3 == 5)) {
    FUN_017de390(*(undefined8 *)(param_2 + 0xd8),0,*(undefined8 *)(lVar3 + 0x58),1,&local_4c);
    FUN_017de390(*(undefined8 *)(param_2 + 0xd8),0,*(undefined8 *)(lVar3 + 0x58),0,&local_4c);
  }
  else if (param_3 == 6) {
    if ((*(byte *)(param_2 + 0x88) & 0x80) == 0) {
      FUN_016ee260(param_1,&local_58,0x50,0);
      if (((*(byte *)(param_2 + 0x88) & 0x40) == 0) || ((*(byte *)(param_2 + 0x88) & 0x10) == 0)) {
        uVar7 = 0;
        FUN_016eeca0(param_1,param_2 + 0x1b8,0,*(undefined2 *)(lVar3 + 0x6c),
                     unaff_XMM6_Qa *
                     *(double *)(*(longlong *)(param_2 + 0x118) + (longlong)iVar2 * 8),0);
      }
      else if (*(char *)(local_58 + 0x40) == '\0') {
        uVar7 = 0;
        FUN_016eeca0(param_1,param_2 + 0x1b8,0,*(undefined2 *)(lVar3 + 0x6c),
                     unaff_XMM6_Qa *
                     *(double *)(*(longlong *)(param_2 + 0x118) + (longlong)iVar2 * 8),0);
      }
      else {
        uVar7 = 0;
        FUN_016eeca0(param_1,param_2 + 0x1b8,0,*(undefined2 *)(lVar3 + 0x6c),
                     unaff_XMM6_Qa * *(double *)(local_58 + 0x10),0);
      }
    }
    else {
      uVar1 = *(undefined2 *)(lVar3 + 0x6c);
      uVar6 = FUN_016eebe0(param_1,param_2 + 0x1b8,1,uVar1,0);
      uVar7 = 0;
      FUN_016eeca0(param_1,param_2 + 0x1b8,0,uVar1,uVar6,0);
    }
    if ((*(byte *)(param_2 + 0x88) & 0x40) != 0) {
      uVar1 = *(undefined2 *)(lVar3 + 0x6c);
      uVar6 = FUN_016eebe0(param_1,param_2 + 0x1b8,0,uVar1,0);
      uVar7 = 0;
      FUN_016eeca0(param_1,param_2 + 0x1b8,1,uVar1,uVar6,0);
    }
    FUN_00dafac0(param_1,param_2,local_40,&local_48,unaff_XMM6_Qa,
                 CONCAT44(uVar7,*(undefined4 *)(lVar3 + 0x6c)),0,1);
    if ((*(byte *)(param_2 + 0x88) & 0x40) != 0) {
      sVar4 = *(short *)(lVar3 + 0x6c) + 1;
      uVar6 = FUN_016eebe0(param_1,param_2 + 0x1b8,0,sVar4,0);
      FUN_016eeca0(param_1,param_2 + 0x1b8,1,sVar4,uVar6,0);
    }
    FUN_017de390(*(undefined8 *)(param_2 + 0xd8),local_40[0],*(undefined8 *)(lVar3 + 0x58),1,
                 &local_4c);
    FUN_017de390(*(undefined8 *)(param_2 + 0xd8),local_48 ^ 0x8000000000000000,
                 *(undefined8 *)(lVar3 + 0x58),0,&local_4c);
  }
  else if (param_3 == 8) {
    FUN_017de420(*(undefined8 *)(param_2 + 0xd8),param_5 * unaff_XMM6_Qa,
                 *(undefined8 *)(lVar3 + 0x58),local_4c);
  }
  return;
}

