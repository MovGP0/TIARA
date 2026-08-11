/* Ghidra address: 00aa3a00 */
/* Ghidra symbol: FUN_00aa3a00 */


int FUN_00aa3a00(longlong *param_1,undefined8 param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  
  if (*(char *)((longlong)param_1 + 0x4c) == '\x02') {
    *(undefined1 *)(param_1 + 0xac) = 1;
  }
  iVar4 = *(int *)((longlong)param_1 + 0x484) + *(int *)((longlong)param_1 + 0x494) +
          *(int *)((longlong)param_1 + 0x4a4);
  iVar5 = *(int *)((longlong)param_1 + 0x47c) + *(int *)((longlong)param_1 + 0x48c) +
          *(int *)((longlong)param_1 + 0x49c);
  iVar2 = (int)param_1[0x99];
  if (iVar2 < 1) {
    iVar7 = (param_3 - iVar4) - iVar5;
    if (iVar7 < 0xf) {
      iVar7 = 0xf;
    }
  }
  else {
    iVar7 = (param_3 - iVar4) - iVar5;
    if (iVar2 < iVar7) {
      iVar7 = iVar2;
    }
  }
  *(int *)(param_1 + 0x99) = iVar7;
  bVar1 = *(byte *)(param_1 + 0xac);
  uVar6 = (ulonglong)bVar1;
  if (bVar1 != 1) {
    iVar5 = ((param_3 - iVar7) - iVar4) - iVar5;
    if (0 < iVar5) {
      if (bVar1 == 2) {
        uVar6 = (longlong)iVar5 % 2 & 0xffffffff;
        *(int *)((longlong)param_1 + 0x484) = *(int *)((longlong)param_1 + 0x484) + iVar5 / 2;
      }
      else {
        uVar6 = (ulonglong)(byte)(bVar1 - 3);
        if ((byte)(bVar1 - 3) == 0) {
          *(int *)((longlong)param_1 + 0x484) = *(int *)((longlong)param_1 + 0x484) + iVar5;
        }
      }
    }
  }
  cVar3 = (**(code **)(*param_1 + 0x30))(param_1,uVar6);
  if (cVar3 == '\0') {
    *(undefined4 *)(param_1[0xad] + 0xa8) = *(undefined4 *)((longlong)param_1 + 0x4cc);
  }
  return iVar7;
}

