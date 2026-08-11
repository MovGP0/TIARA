/* Ghidra address: 00df39a0 */
/* Ghidra symbol: FUN_00df39a0 */


void FUN_00df39a0(longlong param_1,longlong param_2,char param_3,ulonglong param_4,double param_5)

{
  undefined2 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  short sVar6;
  undefined8 uVar7;
  undefined8 in_stack_ffffffffffffff78;
  undefined4 uVar9;
  double dVar8;
  undefined8 in_stack_ffffffffffffff80;
  undefined4 uVar10;
  ulonglong local_48;
  undefined8 local_40 [3];
  
  uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffff80 >> 0x20);
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x40) + -8 + (param_4 & 0xff) * 8);
  uVar3 = FUN_01b05600(param_1,**(undefined1 **)(lVar2 + 8));
  uVar4 = FUN_01b05600(param_1,*(undefined1 *)(*(longlong *)(lVar2 + 8) + 1));
  iVar5 = FUN_01b05690(param_1,param_4 & 0xffffffff,1);
  dVar8 = **(double **)(lVar2 + 0x18);
  if (param_3 == '\x01') {
    FUN_017dc8c0(*(undefined8 *)(param_2 + 0xd8),0,0x3ff0000000000000,uVar3,CONCAT44(uVar9,uVar4),
                 CONCAT44(uVar10,iVar5));
    FUN_017dc850(*(undefined8 *)(param_2 + 0xd8),0,0,iVar5,iVar5);
    FUN_017dc850(*(undefined8 *)(param_2 + 0xd8),0,0,iVar5,*(undefined4 *)(param_2 + 0x308));
  }
  else if (param_3 == '\x05') {
    FUN_017dc8c0(*(undefined8 *)(param_2 + 0xd8),0,0x3ff0000000000000,uVar3,CONCAT44(uVar9,uVar4),
                 CONCAT44(uVar10,iVar5));
    FUN_017dc850(*(undefined8 *)(param_2 + 0xd8),0,0,iVar5,iVar5);
    FUN_017dc850(*(undefined8 *)(param_2 + 0xd8),0,0,iVar5,*(undefined4 *)(param_2 + 0x308));
  }
  else if (param_3 == '\x06') {
    FUN_017dc8c0(*(undefined8 *)(param_2 + 0xd8),0,0x3ff0000000000000,uVar3,CONCAT44(uVar9,uVar4),
                 CONCAT44(uVar10,iVar5));
    if ((*(byte *)(param_2 + 0x88) & 0x80) == 0) {
      uVar3 = 0;
      FUN_016eeca0(param_1,param_2 + 0x1b8,0,*(undefined2 *)(lVar2 + 0x6c),
                   dVar8 * *(double *)(*(longlong *)(param_2 + 0x118) + (longlong)iVar5 * 8),0);
    }
    else {
      uVar1 = *(undefined2 *)(lVar2 + 0x6c);
      uVar7 = FUN_016eebe0(param_1,param_2 + 0x1b8,1,uVar1,0);
      uVar3 = 0;
      FUN_016eeca0(param_1,param_2 + 0x1b8,0,uVar1,uVar7,0);
    }
    if ((*(byte *)(param_2 + 0x88) & 0x40) != 0) {
      uVar1 = *(undefined2 *)(lVar2 + 0x6c);
      uVar7 = FUN_016eebe0(param_1,param_2 + 0x1b8,0,uVar1,0);
      uVar3 = 0;
      FUN_016eeca0(param_1,param_2 + 0x1b8,1,uVar1,uVar7,0);
    }
    FUN_00dafac0(param_1,param_2,local_40,&local_48,dVar8,
                 CONCAT44(uVar3,*(undefined4 *)(lVar2 + 0x6c)),0,1);
    uVar3 = (undefined4)((ulonglong)dVar8 >> 0x20);
    if ((*(byte *)(param_2 + 0x88) & 0x40) != 0) {
      sVar6 = *(short *)(lVar2 + 0x6c) + 1;
      uVar7 = FUN_016eebe0(param_1,param_2 + 0x1b8,0,sVar6,0);
      FUN_016eeca0(param_1,param_2 + 0x1b8,1,sVar6,uVar7,0);
      uVar3 = (undefined4)((ulonglong)uVar7 >> 0x20);
    }
    FUN_017dc850(*(undefined8 *)(param_2 + 0xd8),0,local_40[0],iVar5,CONCAT44(uVar3,iVar5));
    FUN_017dc850(*(undefined8 *)(param_2 + 0xd8),0,local_48 ^ 0x8000000000000000,iVar5,
                 *(undefined4 *)(param_2 + 0x308));
  }
  else if (param_3 == '\b') {
    FUN_017dc8c0(*(undefined8 *)(param_2 + 0xd8),0,0x3ff0000000000000,uVar3,CONCAT44(uVar9,uVar4),
                 CONCAT44(uVar10,iVar5));
    FUN_017dc850(*(undefined8 *)(param_2 + 0xd8),1,param_5 * dVar8,iVar5,iVar5);
  }
  return;
}

