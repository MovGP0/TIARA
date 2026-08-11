/* Ghidra address: 00bf5150 */
/* Ghidra symbol: FUN_00bf5150 */


void FUN_00bf5150(longlong param_1,longlong param_2,int *param_3,int param_4)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  bool bVar6;
  
  if ((*(char *)(param_2 + 0x21) == '\0') &&
     (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x170) + 0x5b8) + 8) != 0)) {
    plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x170) + 0x5b8) + 8);
    iVar4 = (**(code **)(*plVar1 + 0x90))(plVar1);
    if (*(int *)(param_2 + 0x10) <= iVar4) {
      cVar3 = FUN_00c11270(param_2);
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x170) + 0x5b8);
      if (cVar3 == *(char *)(lVar2 + 0x10)) {
        *param_3 = 0;
      }
      else if (*param_3 == 0) {
        *param_3 = *(int *)(lVar2 + 0x20);
      }
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x170) + 0x5b8);
      FUN_007d6c70(*(undefined8 *)(lVar2 + 8),
                   *(undefined8 *)(*(longlong *)(param_1 + 0x170) + 0x490),
                   *(int *)(lVar2 + 0x14) + *param_3,
                   (param_4 - *(int *)(*(longlong *)(param_1 + 0x170) + 0x534)) *
                   *(int *)(*(longlong *)(param_1 + 0x170) + 0x52c),*(undefined4 *)(param_2 + 0x10),
                   1);
      *param_3 = *param_3 + *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x170) + 0x5b8) + 0x20);
    }
  }
  else {
    if (*(uint *)(param_2 + 0x10) < 0x10) {
      bVar6 = ((int)CONCAT62((int6)((ulonglong)param_2 >> 0x10),1) <<
               ((byte)*(uint *)(param_2 + 0x10) & 0x1f) & 0x3ffU) != 0;
    }
    else {
      bVar6 = false;
    }
    if (bVar6) {
      if (*(longlong *)(*(longlong *)(param_1 + 0x170) + 0x918) == 0) {
        puVar5 = (undefined8 *)
                 FUN_00bbc340(&PTR_FUN_00bb9c00,1,PTR_IMAGE_DOS_HEADER_0200c280,
                              L"SynEditInternalImages",10);
        *(undefined8 **)(*(longlong *)(param_1 + 0x170) + 0x918) = puVar5;
        if (0x77 < *(int *)(*(longlong *)PTR_DAT_02005950 + 0x98)) {
          (**(code **)*puVar5)(puVar5,*(int *)(*(longlong *)PTR_DAT_02005950 + 0x98),0x60);
        }
      }
      if (*param_3 == 0) {
        iVar4 = *(int *)(*(longlong *)(param_1 + 0x170) + 0x52c);
        FUN_00bbc6e0(*(undefined8 *)(*(longlong *)(param_1 + 0x170) + 0x918),
                     *(undefined8 *)(*(longlong *)(param_1 + 0x170) + 0x490),
                     *(undefined4 *)(param_2 + 0x10),
                     *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x170) + 0x5b8) + 0x14) +
                     *param_3,(param_4 - *(int *)(*(longlong *)(param_1 + 0x170) + 0x534)) * iVar4,
                     iVar4);
      }
      *param_3 = *param_3 + *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x170) + 0x5b8) + 0x20);
    }
  }
  return;
}

