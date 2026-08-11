/* Ghidra address: 01650080 */
/* Ghidra symbol: FUN_01650080 */


void FUN_01650080(char *param_1,undefined8 param_2,longlong param_3,char param_4)

{
  undefined8 in_RAX;
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  if ((byte)(param_4 - 8U) < 8) {
    bVar3 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (param_4 - 8U & 0x1f) & 0x11U) != 0;
  }
  else {
    bVar3 = false;
  }
  if ((!bVar3) && ((*(byte *)(param_3 + 0x88) & 0x20) == 0)) {
    dVar7 = 0.0;
    iVar2 = *(int *)(param_1 + 4);
    iVar1 = 0;
    if (-1 < iVar2 + -1) {
      do {
        uVar4 = FUN_016ee640(param_2,*(undefined8 *)(param_3 + 0x118),
                             *param_1 + (char)iVar1 + '\x02',1,1);
        *(undefined8 *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar1 * 8) = uVar4;
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    dVar5 = (double)FUN_00dff9c0(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                                 *(undefined8 *)(param_1 + 0x48),*(undefined2 *)(param_1 + 8),
                                 *(undefined4 *)(param_1 + 4),0);
    iVar2 = *(int *)(param_1 + 4);
    iVar1 = 1;
    dVar6 = 0.0;
    if (0 < iVar2) {
      do {
        dVar6 = (double)FUN_00dff9c0(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28)
                                     ,*(undefined8 *)(param_1 + 0x48),*(undefined2 *)(param_1 + 8),
                                     *(undefined4 *)(param_1 + 4),iVar1);
        dVar7 = dVar7 + dVar6 * *(double *)
                                 (*(longlong *)(param_1 + 0x28) + (longlong)(iVar1 + -1) * 8);
        FUN_016ed220(param_2,*param_1 + (char)iVar1 + '\x01',dVar6,0);
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + -1;
        dVar6 = dVar7;
      } while (iVar2 != 0);
    }
    if (param_1[0x6c] == '\0') {
      *(double *)(param_1 + 0x88) = dVar5 - dVar6;
      FUN_016ed320(param_2,*param_1 + '\x01',*(undefined8 *)(param_1 + 0x88),
                   *(undefined8 *)PTR_DAT_02003468,0);
    }
    else {
      *(double *)(param_1 + 0x88) = dVar5 - dVar6;
      FUN_016ed320(param_2,*param_1 + '\x01',*(undefined8 *)(param_1 + 0x88),
                   *(undefined8 *)(param_3 + 0x438),0);
    }
  }
  return;
}

