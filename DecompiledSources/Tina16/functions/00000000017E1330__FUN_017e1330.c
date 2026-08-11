/* Ghidra address: 017e1330 */
/* Ghidra symbol: FUN_017e1330 */


void FUN_017e1330(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  char *pcVar8;
  int local_274;
  char local_268 [240];
  undefined4 local_178;
  
  if ((*(int *)(param_1 + 0x10) < 1) || (iVar4 = FUN_00f06b50(L"GridViewDesign",0), iVar4 != 1)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    FUN_013ddb20(L"Design");
  }
  iVar4 = *(int *)(param_1 + 0x10);
  local_274 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar5 = FUN_004aeac0(param_1,local_274);
      lVar1 = *(longlong *)(lVar5 + 8);
      puVar7 = (undefined8 *)(lVar1 + 0x68);
      pcVar8 = local_268;
      for (lVar6 = 0x48; cVar3 = local_268[0], lVar6 != 0; lVar6 = lVar6 + -1) {
        *(undefined8 *)pcVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        pcVar8 = pcVar8 + 8;
      }
      if (local_268[0] == '\0') {
        FUN_013ddd60(local_268,lVar1);
      }
      if (cVar3 == '\x01') {
        FUN_013de3f0(local_268,*(undefined8 *)(lVar5 + 8));
      }
      if (cVar3 == '\x02') {
        FUN_013dea80(local_268,*(undefined8 *)(lVar5 + 8));
      }
      if (cVar3 == '\x03') {
        FUN_013dfb30(local_268,*(undefined8 *)(lVar5 + 8));
      }
      if (cVar3 == '\x04') {
        FUN_013df540(local_268,*PTR_DAT_02001af0,*(undefined8 *)(lVar5 + 8));
      }
      if (cVar3 == '\x05') {
        cVar3 = FUN_01116830(local_178);
        if (cVar3 == '\0') {
          FUN_013ddd60(local_268,*(undefined8 *)(lVar5 + 8));
        }
        else {
          FUN_013d99f0(*(undefined8 *)(lVar5 + 8),0x22,1,1,1);
        }
      }
      local_274 = local_274 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (bVar2) {
    FUN_013ddbc0();
  }
  return;
}

