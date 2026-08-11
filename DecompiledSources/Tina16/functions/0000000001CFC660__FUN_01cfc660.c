/* Ghidra address: 01cfc660 */
/* Ghidra symbol: FUN_01cfc660 */


void FUN_01cfc660(longlong *param_1,undefined8 param_2,undefined1 param_3,char param_4,int param_5)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  bool bVar5;
  
  if (*(char *)((longlong)param_1 + 0xaa) != '\0') {
    return;
  }
  cVar3 = FUN_01cfc630(param_1);
  if (cVar3 == '\0') {
    return;
  }
  lVar2 = param_1[1];
  if ((char)lVar2 != '\0') {
    (**(code **)(*param_1 + 0xa8))(param_1,param_2);
  }
  if (param_4 != '\0') {
    if (*(byte *)((longlong)param_1 + 0xd1) < 8) {
      bVar5 = ((int)CONCAT71((int7)((ulonglong)param_1 >> 8),1) <<
               (*(byte *)((longlong)param_1 + 0xd1) & 0x1f) & 5U) != 0;
    }
    else {
      bVar5 = false;
    }
    if (!bVar5) goto LAB_01cfc701;
  }
  *(undefined1 *)((longlong)param_1 + 0xd3) = param_3;
LAB_01cfc701:
  if (param_4 != '\0') {
    iVar1 = *(int *)((longlong)param_1 + 0xc);
    iVar4 = param_5 * 2 - iVar1;
    *(int *)((longlong)param_1 + 0xc) = iVar4;
    if (*(char *)((longlong)param_1 + 0xb) != '\0') {
      *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + (iVar4 - iVar1);
    }
  }
  if ((char)lVar2 != '\0') {
    (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  }
  return;
}

