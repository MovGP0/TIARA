/* Ghidra address: 012adfa0 */
/* Ghidra symbol: FUN_012adfa0 */


void FUN_012adfa0(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  double local_38;
  char local_29 [9];
  
  uVar1 = *(undefined8 *)(param_1 + 0xdb8);
  cVar2 = FUN_004113d0(uVar1,&PTR_FUN_012a1d38);
  if (cVar2 == '\0') {
    cVar2 = FUN_004113d0(uVar1,&DAT_012a0d00);
    if (cVar2 != '\0') {
      FUN_004113f0(uVar1,&DAT_012a0d00);
      FUN_012ae3d0(param_1,1);
    }
  }
  else {
    plVar4 = (longlong *)FUN_004113f0(uVar1,&PTR_FUN_012a1d38);
    if (*(char *)(param_1 + 0x7ec) == '\0') {
      (**(code **)(*plVar4 + 0xf8))(plVar4,plVar4 + 0x14,&local_38,1);
      FUN_012a5d70(plVar4,param_1 + 0x880,local_29);
      if (*(char *)((longlong)plVar4 + 300) != '\0') {
        *(int *)(plVar4 + 0x25) = (int)plVar4[0x25] + 1;
        FUN_012ae3d0(param_1,1);
      }
      if ((double)*(byte *)(param_1 + 0xd91) * local_38 <= (double)plVar4[0x26]) {
        iVar3 = (**(code **)(**(longlong **)(param_1 + 0xb98) + 0x260))
                          (*(longlong **)(param_1 + 0xb98));
        if (iVar3 == 0) {
          (**(code **)(*plVar4 + 0x168))(plVar4);
        }
        else {
          *(undefined1 *)((longlong)plVar4 + 0x12e) = 0;
          *(undefined1 *)((longlong)plVar4 + 300) = 0;
          *(undefined1 *)((longlong)plVar4 + 0x12d) = 1;
          FUN_01cc60b0(plVar4[0x29],0);
          if (plVar4[0x2a] != 0) {
            FUN_01cc60b0(plVar4[0x2a],0);
          }
        }
        plVar4[0x26] = 0;
        *(undefined4 *)(plVar4 + 0x25) = 0;
        FUN_012ae340(param_1);
        if (local_29[0] != '\0') {
          if (*(longlong *)(param_1 + 0x998) != 0) {
            FUN_01cc6030(*(longlong *)(param_1 + 0x998));
          }
          *(undefined8 *)(param_1 + 0x998) = 0;
          if (*(longlong *)(param_1 + 0x880) != 0) {
            FUN_01cc4590(*(longlong *)(param_1 + 0x880),
                         *(ulonglong *)(param_1 + 0xdb0) ^ 0x8000000000000000,
                         (double)*(byte *)(param_1 + 0xd91) * local_38 -
                         *(double *)(param_1 + 0xdb0));
            *(undefined8 *)(param_1 + 0x998) = *(undefined8 *)(param_1 + 0x880);
            FUN_01cc6020(*(undefined8 *)(param_1 + 0x880));
          }
        }
      }
    }
  }
  return;
}

