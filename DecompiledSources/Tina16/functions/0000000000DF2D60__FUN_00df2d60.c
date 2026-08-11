/* Ghidra address: 00df2d60 */
/* Ghidra symbol: FUN_00df2d60 */


void FUN_00df2d60(longlong param_1,longlong param_2,byte param_3,ulonglong param_4,double param_5)

{
  undefined2 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  int iVar6;
  short sVar7;
  bool bVar8;
  undefined8 uVar9;
  double unaff_XMM6_Qa;
  undefined8 in_stack_ffffffffffffff78;
  undefined4 uVar10;
  undefined8 in_stack_ffffffffffffff80;
  undefined4 uVar11;
  ulonglong local_48;
  undefined8 local_40 [3];
  
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff80 >> 0x20);
  uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x40) + -8 + (param_4 & 0xff) * 8);
  uVar3 = FUN_01b05600(param_1,**(undefined1 **)(lVar2 + 8));
  uVar4 = FUN_01b05600(param_1,*(undefined1 *)(*(longlong *)(lVar2 + 8) + 1));
  uVar5 = FUN_01b05690(param_1,param_4 & 0xffffffff,1);
  if (param_3 < 8) {
    bVar8 = ((int)CONCAT71((int7)(uVar5 >> 8),1) << (param_3 & 0x1f) & 0x22U) != 0;
  }
  else {
    bVar8 = false;
  }
  if (!bVar8) {
    unaff_XMM6_Qa = **(double **)(lVar2 + 0x18);
  }
  iVar6 = (int)uVar5;
  FUN_017dc8c0(*(undefined8 *)(param_2 + 0xd8),0,0x3ff0000000000000,uVar3,CONCAT44(uVar10,uVar4),
               CONCAT44(uVar11,iVar6));
  if ((param_3 == 1) || (param_3 == 5)) {
    FUN_017dc850(*(undefined8 *)(param_2 + 0xd8),0,0,uVar5 & 0xffffffff,uVar5 & 0xffffffff);
    FUN_017dc850(*(undefined8 *)(param_2 + 0xd8),0,0,uVar5 & 0xffffffff,
                 *(undefined4 *)(param_2 + 0x308));
  }
  else if (param_3 == 6) {
    if ((*(byte *)(param_2 + 0x88) & 0x80) == 0) {
      uVar3 = 0;
      FUN_016eeca0(param_1,param_2 + 0x1b8,0,*(undefined2 *)(lVar2 + 0x6c),
                   unaff_XMM6_Qa * *(double *)(*(longlong *)(param_2 + 0x118) + (longlong)iVar6 * 8)
                   ,0);
    }
    else {
      uVar1 = *(undefined2 *)(lVar2 + 0x6c);
      uVar9 = FUN_016eebe0(param_1,param_2 + 0x1b8,1,uVar1,0);
      uVar3 = 0;
      FUN_016eeca0(param_1,param_2 + 0x1b8,0,uVar1,uVar9,0);
    }
    if ((*(byte *)(param_2 + 0x88) & 0x40) != 0) {
      uVar1 = *(undefined2 *)(lVar2 + 0x6c);
      uVar9 = FUN_016eebe0(param_1,param_2 + 0x1b8,0,uVar1,0);
      uVar3 = 0;
      FUN_016eeca0(param_1,param_2 + 0x1b8,1,uVar1,uVar9,0);
    }
    FUN_00dafac0(param_1,param_2,local_40,&local_48,unaff_XMM6_Qa,
                 CONCAT44(uVar3,*(undefined4 *)(lVar2 + 0x6c)),0,1);
    uVar3 = (undefined4)((ulonglong)unaff_XMM6_Qa >> 0x20);
    if ((*(byte *)(param_2 + 0x88) & 0x40) != 0) {
      sVar7 = *(short *)(lVar2 + 0x6c) + 1;
      uVar9 = FUN_016eebe0(param_1,param_2 + 0x1b8,0,sVar7,0);
      FUN_016eeca0(param_1,param_2 + 0x1b8,1,sVar7,uVar9,0);
      uVar3 = (undefined4)((ulonglong)uVar9 >> 0x20);
    }
    FUN_017dc850(*(undefined8 *)(param_2 + 0xd8),0,local_40[0],uVar5 & 0xffffffff,
                 CONCAT44(uVar3,iVar6));
    FUN_017dc850(*(undefined8 *)(param_2 + 0xd8),0,local_48 ^ 0x8000000000000000,uVar5 & 0xffffffff,
                 *(undefined4 *)(param_2 + 0x308));
  }
  else if (param_3 == 8) {
    FUN_017dc850(*(undefined8 *)(param_2 + 0xd8),1,param_5 * unaff_XMM6_Qa,uVar5 & 0xffffffff,
                 uVar5 & 0xffffffff);
  }
  return;
}

