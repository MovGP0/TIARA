/* Ghidra address: 00df29b0 */
/* Ghidra symbol: FUN_00df29b0 */


void FUN_00df29b0(longlong param_1,longlong param_2,char param_3,ulonglong param_4,double param_5)

{
  double dVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  short sVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  longlong local_58;
  undefined4 local_4c;
  ulonglong local_48;
  undefined8 local_40 [3];
  
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x40) + -8 + (param_4 & 0xff) * 8);
  iVar3 = **(int **)(lVar5 + 0x10);
  iVar4 = (*(int **)(lVar5 + 0x10))[1];
  dVar1 = **(double **)(lVar5 + 0x18);
  local_4c = 0;
  if ((param_3 == '\x01') || (param_3 == '\x05')) {
    FUN_017de110(*(undefined8 *)(param_2 + 0xd8),0,*(undefined8 *)(lVar5 + 0x58),&local_4c);
    FUN_017de540(*(undefined8 *)(param_2 + 0xd8),0,*(undefined8 *)(lVar5 + 0x58),0,&local_4c);
  }
  else if (param_3 == '\x06') {
    if ((*(byte *)(param_2 + 0x88) & 0x80) == 0) {
      FUN_016ee260(param_1,&local_58,0x40,0);
      if (((*(byte *)(param_2 + 0x88) & 0x40) == 0) || ((*(byte *)(param_2 + 0x88) & 0x10) == 0)) {
        uVar8 = 0;
        FUN_016eeca0(param_1,param_2 + 0x1b8,0,*(undefined2 *)(lVar5 + 0x6c),
                     dVar1 * (*(double *)(*(longlong *)(param_2 + 0x118) + (longlong)iVar3 * 8) -
                             *(double *)(*(longlong *)(param_2 + 0x118) + (longlong)iVar4 * 8)),0);
      }
      else if (*(char *)(local_58 + 0x30) == '\0') {
        uVar8 = 0;
        FUN_016eeca0(param_1,param_2 + 0x1b8,0,*(undefined2 *)(lVar5 + 0x6c),
                     dVar1 * (*(double *)(*(longlong *)(param_2 + 0x118) + (longlong)iVar3 * 8) -
                             *(double *)(*(longlong *)(param_2 + 0x118) + (longlong)iVar4 * 8)),0);
      }
      else {
        uVar8 = 0;
        FUN_016eeca0(param_1,param_2 + 0x1b8,0,*(undefined2 *)(lVar5 + 0x6c),
                     dVar1 * *(double *)(local_58 + 0x10),0);
      }
    }
    else {
      uVar2 = *(undefined2 *)(lVar5 + 0x6c);
      uVar7 = FUN_016eebe0(param_1,param_2 + 0x1b8,1,uVar2,0);
      uVar8 = 0;
      FUN_016eeca0(param_1,param_2 + 0x1b8,0,uVar2,uVar7,0);
    }
    if ((*(byte *)(param_2 + 0x88) & 0x40) != 0) {
      uVar2 = *(undefined2 *)(lVar5 + 0x6c);
      uVar7 = FUN_016eebe0(param_1,param_2 + 0x1b8,0,uVar2,0);
      uVar8 = 0;
      FUN_016eeca0(param_1,param_2 + 0x1b8,1,uVar2,uVar7,0);
    }
    FUN_00dafac0(param_1,param_2,local_40,&local_48,dVar1,
                 CONCAT44(uVar8,*(undefined4 *)(lVar5 + 0x6c)),0,1);
    if ((*(byte *)(param_2 + 0x88) & 0x40) != 0) {
      sVar6 = *(short *)(lVar5 + 0x6c) + 1;
      uVar7 = FUN_016eebe0(param_1,param_2 + 0x1b8,0,sVar6,0);
      FUN_016eeca0(param_1,param_2 + 0x1b8,1,sVar6,uVar7,0);
    }
    FUN_017de110(*(undefined8 *)(param_2 + 0xd8),local_40[0],*(undefined8 *)(lVar5 + 0x58),&local_4c
                );
    FUN_017de540(*(undefined8 *)(param_2 + 0xd8),local_48 ^ 0x8000000000000000,
                 *(undefined8 *)(lVar5 + 0x58),0,&local_4c);
  }
  else if (param_3 == '\b') {
    FUN_017dc6a0(*(undefined8 *)(param_2 + 0xd8),1,param_5 * dVar1,iVar3,iVar4);
  }
  return;
}

