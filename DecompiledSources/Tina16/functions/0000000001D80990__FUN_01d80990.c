/* Ghidra address: 01d80990 */
/* Ghidra symbol: FUN_01d80990 */


void FUN_01d80990(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  double local_38;
  char local_29 [9];
  
  uVar1 = *(undefined8 *)(param_1 + 0xa88);
  cVar3 = FUN_004113d0(uVar1,&PTR_FUN_012a1d38);
  if (cVar3 == '\0') {
    cVar3 = FUN_004113d0(uVar1,&DAT_012a0d00);
    if (cVar3 != '\0') {
      FUN_004113f0(uVar1,&DAT_012a0d00);
    }
  }
  else {
    plVar5 = (longlong *)FUN_004113f0(uVar1,&PTR_FUN_012a1d38);
    if (*(char *)(param_1 + 0x7ec) == '\0') {
      (**(code **)(*plVar5 + 0xf8))(plVar5,plVar5 + 0x14,&local_38,1);
      FUN_012a5d70(plVar5,param_1 + 0xac8,local_29);
      if (*(char *)((longlong)plVar5 + 300) != '\0') {
        *(int *)(plVar5 + 0x25) = (int)plVar5[0x25] + 1;
      }
      if ((double)*(byte *)(param_1 + 0xa61) * local_38 <= (double)plVar5[0x26]) {
        iVar4 = (**(code **)(**(longlong **)(param_1 + 0x920) + 0x260))
                          (*(longlong **)(param_1 + 0x920));
        if (iVar4 == 0) {
          (**(code **)(*plVar5 + 0x168))(plVar5);
        }
        else {
          *(undefined1 *)((longlong)plVar5 + 0x12e) = 0;
          *(undefined1 *)((longlong)plVar5 + 300) = 0;
          *(undefined1 *)((longlong)plVar5 + 0x12d) = 1;
          FUN_01cc60b0(*(undefined8 *)PTR_DAT_020027c0,0);
          if (*(longlong *)PTR_DAT_020037b0 != 0) {
            FUN_01cc60b0(*(undefined8 *)PTR_DAT_020037b0,0);
          }
        }
        plVar5[0x26] = 0;
        *(undefined4 *)(plVar5 + 0x25) = 0;
        if (local_29[0] != '\0') {
          if (*(longlong *)(param_1 + 0xac0) != 0) {
            FUN_01cc6030(*(longlong *)(param_1 + 0xac0));
          }
          *(undefined8 *)(param_1 + 0xac0) = 0;
          lVar2 = *(longlong *)(param_1 + 0xac8);
          if (lVar2 != 0) {
            *(longlong *)(param_1 + 0xac0) = lVar2;
            FUN_01cc6020(lVar2);
          }
          *(undefined1 *)(param_1 + 0xafc) = 1;
          while (((*(char *)(param_1 + 0xafc) != '\0' && (*(char *)(param_1 + 0x7ec) == '\0')) &&
                 (*(char *)(param_1 + 0x8d1) == '\0'))) {
            FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
          }
        }
      }
    }
  }
  return;
}

