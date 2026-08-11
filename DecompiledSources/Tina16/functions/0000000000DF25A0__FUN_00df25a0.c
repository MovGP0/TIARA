/* Ghidra address: 00df25a0 */
/* Ghidra symbol: FUN_00df25a0 */


void FUN_00df25a0(longlong param_1,longlong param_2,char param_3,ulonglong param_4,double param_5)

{
  undefined2 uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  undefined8 uVar6;
  undefined8 in_stack_ffffffffffffff88;
  undefined4 uVar8;
  double dVar7;
  undefined8 in_stack_ffffffffffffff90;
  undefined4 uVar9;
  ulonglong local_48;
  undefined8 local_40 [3];
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffff90 >> 0x20);
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x40) + -8 + (param_4 & 0xff) * 8);
  iVar3 = FUN_01b05600(param_1,**(undefined1 **)(lVar2 + 8));
  iVar4 = FUN_01b05600(param_1,*(undefined1 *)(*(longlong *)(lVar2 + 8) + 1));
  dVar7 = **(double **)(lVar2 + 0x18);
  if ((param_3 == '\x01') || (param_3 == '\x05')) {
    FUN_017dc6a0(*(undefined8 *)(param_2 + 0xd8),0,0,iVar3,CONCAT44(uVar8,iVar4));
    FUN_017dc990(*(undefined8 *)(param_2 + 0xd8),0,0,iVar3,iVar4,
                 CONCAT44(uVar9,*(undefined4 *)(param_2 + 0x308)));
  }
  else if (param_3 == '\x06') {
    if ((*(byte *)(param_2 + 0x88) & 0x80) == 0) {
      uVar8 = 0;
      FUN_016eeca0(param_1,param_2 + 0x1b8,0,*(undefined2 *)(lVar2 + 0x6c),
                   dVar7 * (*(double *)(*(longlong *)(param_2 + 0x118) + (longlong)iVar3 * 8) -
                           *(double *)(*(longlong *)(param_2 + 0x118) + (longlong)iVar4 * 8)),0);
    }
    else {
      uVar1 = *(undefined2 *)(lVar2 + 0x6c);
      uVar6 = FUN_016eebe0(param_1,param_2 + 0x1b8,1,uVar1,0);
      uVar8 = 0;
      FUN_016eeca0(param_1,param_2 + 0x1b8,0,uVar1,uVar6,0);
    }
    if ((*(byte *)(param_2 + 0x88) & 0x40) != 0) {
      uVar1 = *(undefined2 *)(lVar2 + 0x6c);
      uVar6 = FUN_016eebe0(param_1,param_2 + 0x1b8,0,uVar1,0);
      uVar8 = 0;
      FUN_016eeca0(param_1,param_2 + 0x1b8,1,uVar1,uVar6,0);
    }
    uVar6 = CONCAT44(uVar8,*(undefined4 *)(lVar2 + 0x6c));
    FUN_00dafac0(param_1,param_2,local_40,&local_48,dVar7,uVar6,0,1);
    uVar9 = (undefined4)((ulonglong)uVar6 >> 0x20);
    uVar8 = (undefined4)((ulonglong)dVar7 >> 0x20);
    if ((*(byte *)(param_2 + 0x88) & 0x40) != 0) {
      sVar5 = *(short *)(lVar2 + 0x6c) + 1;
      uVar6 = FUN_016eebe0(param_1,param_2 + 0x1b8,0,sVar5,0);
      uVar9 = 0;
      FUN_016eeca0(param_1,param_2 + 0x1b8,1,sVar5,uVar6,0);
      uVar8 = (undefined4)((ulonglong)uVar6 >> 0x20);
    }
    FUN_017dc6a0(*(undefined8 *)(param_2 + 0xd8),0,local_40[0],iVar3,CONCAT44(uVar8,iVar4));
    FUN_017dc990(*(undefined8 *)(param_2 + 0xd8),0,local_48 ^ 0x8000000000000000,iVar3,iVar4,
                 CONCAT44(uVar9,*(undefined4 *)(param_2 + 0x308)));
  }
  else if (param_3 == '\b') {
    FUN_017dc6a0(*(undefined8 *)(param_2 + 0xd8),1,param_5 * dVar7,iVar3,CONCAT44(uVar8,iVar4));
  }
  return;
}

