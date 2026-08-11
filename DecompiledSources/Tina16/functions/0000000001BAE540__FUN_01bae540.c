/* Ghidra address: 01bae540 */
/* Ghidra symbol: FUN_01bae540 */


void FUN_01bae540(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  undefined *puVar4;
  
  puVar4 = (undefined *)0x0;
  if (((PTR_DAT_02004010[0x2ad] == PTR_DAT_02001120[0x2ad]) &&
      (puVar4 = PTR_DAT_02004010,
      *(double *)(PTR_DAT_02004010 + 0x2b0) == *(double *)(PTR_DAT_02001120 + 0x2b0))) &&
     (*(double *)(PTR_DAT_02004010 + 0x2b8) == *(double *)(PTR_DAT_02001120 + 0x2b8))) {
    uVar3 = 0;
  }
  else {
    uVar3 = (undefined4)CONCAT71((int7)((ulonglong)puVar4 >> 8),1);
  }
  (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x268))(*(longlong **)(param_1 + 0x6d0),uVar3);
  puVar4 = (undefined *)(ulonglong)*(ushort *)(PTR_DAT_02004010 + 0x260);
  if (((((*(ushort *)(PTR_DAT_02004010 + 0x260) == *(ushort *)(PTR_DAT_02001120 + 0x260)) &&
        (puVar4 = PTR_DAT_02004010,
        *(double *)(PTR_DAT_02004010 + 0x262) == *(double *)(PTR_DAT_02001120 + 0x262))) &&
       ((*(double *)(PTR_DAT_02004010 + 0x26a) == *(double *)(PTR_DAT_02001120 + 0x26a) &&
        ((puVar4 = (undefined *)(ulonglong)*(ushort *)(PTR_DAT_02004010 + 0x272),
         *(ushort *)(PTR_DAT_02004010 + 0x272) == *(ushort *)(PTR_DAT_02001120 + 0x272) &&
         (puVar4 = PTR_DAT_02004010,
         *(double *)(PTR_DAT_02004010 + 0x274) == *(double *)(PTR_DAT_02001120 + 0x274))))))) &&
      (*(double *)(PTR_DAT_02004010 + 0x27c) == *(double *)(PTR_DAT_02001120 + 0x27c))) &&
     (puVar4 = (undefined *)
               FUN_00416db0(*(undefined8 *)(PTR_DAT_02004010 + 0x7ce),
                            *(undefined8 *)(PTR_DAT_02001120 + 0x7ce)), (int)puVar4 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = (undefined4)CONCAT71((int7)((ulonglong)puVar4 >> 8),1);
  }
  (**(code **)(**(longlong **)(param_1 + 0x6d8) + 0x268))(*(longlong **)(param_1 + 0x6d8),uVar3);
  puVar4 = (undefined *)(ulonglong)*(ushort *)(PTR_DAT_02004010 + 0x38b);
  if ((((*(ushort *)(PTR_DAT_02004010 + 0x38b) == *(ushort *)(PTR_DAT_02001120 + 0x38b)) &&
       (puVar4 = PTR_DAT_02004010,
       *(double *)(PTR_DAT_02004010 + 0x38d) == *(double *)(PTR_DAT_02001120 + 0x38d))) &&
      (*(double *)(PTR_DAT_02004010 + 0x395) == *(double *)(PTR_DAT_02001120 + 0x395))) &&
     (puVar4 = (undefined *)0x0, PTR_DAT_02004010[0x39d] == PTR_DAT_02001120[0x39d])) {
    uVar3 = 0;
  }
  else {
    uVar3 = (undefined4)CONCAT71((int7)((ulonglong)puVar4 >> 8),1);
  }
  (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x268))(*(longlong **)(param_1 + 0x6e0),uVar3);
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x260))(*(longlong **)(param_1 + 0x6d0));
  if (((cVar2 == '\0') &&
      (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x6d8) + 0x260))
                         (*(longlong **)(param_1 + 0x6d8)), cVar2 == '\0')) &&
     (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x260))
                        (*(longlong **)(param_1 + 0x6e0)), cVar2 == '\0')) {
    (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x268))(*(longlong **)(param_1 + 0x6d0),1);
  }
  cVar2 = FUN_00f06890(L"ExtendedSpiceExport",0);
  if (cVar2 == '\0') {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4f0);
    (**(code **)(*plVar1 + 0x98))(plVar1,5);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4f0);
    (**(code **)(*plVar1 + 0x98))(plVar1,4);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4f0);
    (**(code **)(*plVar1 + 0x98))(plVar1,3);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4f0);
    (**(code **)(*plVar1 + 0x98))(plVar1,2);
  }
  return;
}

