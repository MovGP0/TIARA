/* Ghidra address: 006dba00 */
/* Ghidra symbol: FUN_006dba00 */


void FUN_006dba00(longlong param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  code *pcVar6;
  int iVar7;
  undefined1 auStack_58 [40];
  
  if (*param_2 == 0x200) {
    cVar5 = FUN_006db9c0(auStack_58);
    if ((cVar5 != '\0') && (*(longlong *)(param_1 + 0x4d8) != 0)) {
      cVar5 = FUN_0064e170(param_1);
      if (cVar5 != '\0') {
        iVar7 = *(int *)(param_1 + 0x4e0) + ((int)(short)param_2[4] - *(int *)(param_1 + 0x4e4));
        lVar2 = *(longlong *)(param_1 + 0x4d8);
        iVar1 = *(int *)(lVar2 + 0x24);
        bVar3 = iVar7 < iVar1;
        if (bVar3) {
          iVar7 = iVar7 - iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x28);
        bVar4 = iVar1 < iVar7;
        if (bVar4) {
          iVar7 = iVar7 - iVar1;
        }
        pcVar6 = (code *)FUN_00411550(param_1,0xffa6);
        (*pcVar6)(param_1,lVar2,iVar7,1);
        if (bVar4 || bVar3) {
          *(short *)(param_2 + 4) = (short)param_2[4] - (short)iVar7;
        }
      }
    }
  }
  FUN_00656570(param_1,param_2);
  return;
}

