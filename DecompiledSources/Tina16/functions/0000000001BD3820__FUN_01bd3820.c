/* Ghidra address: 01bd3820 */
/* Ghidra symbol: FUN_01bd3820 */


void FUN_01bd3820(longlong *param_1,undefined8 param_2,undefined2 param_3,int param_4,int param_5)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  
  FUN_00650ea0(param_1,param_2,param_3,param_4,param_5);
  if (*(char *)((longlong)param_1 + 0x362) == '\0') {
    return;
  }
  *(undefined1 *)((longlong)param_1 + 0x362) = 0;
  if ((((param_4 < 0) || (iVar3 = FUN_0064d0b0(param_1), iVar3 <= param_4)) || (param_5 < 0)) ||
     (iVar3 = FUN_0064d120(param_1), iVar3 < param_5)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (param_1[100] != 0) {
    uVar4 = FUN_01bfd980(param_1[100]);
    cVar2 = FUN_004113d0(uVar4,&PTR_FUN_0061c2b8);
    if ((cVar2 != '\0') &&
       ((lVar5 = FUN_01bfd980(param_1[100]), *(int *)(lVar5 + 0xdc) == 0 ||
        ((lVar5 = FUN_01bfd980(param_1[100]), *(char *)(lVar5 + 0xca) != '\0' &&
         (lVar5 = FUN_01bfd980(param_1[100]), *(char *)(lVar5 + 0xd8) != '\0')))))) {
      *(undefined1 *)((longlong)param_1 + 0x366) = 0;
      *(undefined1 *)((longlong)param_1 + 0x363) = 0;
      if (bVar1) {
        if (*(byte *)((longlong)param_1 + 0x366) < 8) {
          bVar7 = ((int)CONCAT71((int7)((ulonglong)lVar5 >> 8),1) <<
                   (*(byte *)((longlong)param_1 + 0x366) & 0x1f) & 0xcU) != 0;
        }
        else {
          bVar7 = false;
        }
        if (!bVar7) {
          (**(code **)(*param_1 + 0x180))(param_1);
        }
      }
      goto LAB_01bd398c;
    }
  }
  if (bVar1) {
    FUN_01bd3ac0(param_1,*(char *)((longlong)param_1 + 0x361) == '\0');
    if (*(char *)((longlong)param_1 + 0x361) != '\0') {
      (**(code **)(*param_1 + 0x188))(param_1);
    }
  }
  else {
    if (*(char *)((longlong)param_1 + 0x361) != '\0') {
      *(undefined1 *)((longlong)param_1 + 0x366) = 3;
    }
    (**(code **)(*param_1 + 0x188))(param_1);
  }
LAB_01bd398c:
  if (bVar1) {
    pcVar6 = (code *)FUN_00411550(param_1,0xffea);
    (*pcVar6)(param_1);
  }
  FUN_01bd3bf0(param_1);
  return;
}

