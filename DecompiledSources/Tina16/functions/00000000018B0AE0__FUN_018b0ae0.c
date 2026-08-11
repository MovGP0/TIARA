/* Ghidra address: 018b0ae0 */
/* Ghidra symbol: FUN_018b0ae0 */


void FUN_018b0ae0(longlong param_1,int param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar2 = FUN_004b2060(param_1);
  if (iVar2 != 0) {
    iVar2 = FUN_004b2060(param_1);
    if (param_2 < iVar2) {
      iVar2 = *(int *)(param_1 + 0x40);
      if ((iVar2 != param_2) && (-1 < iVar2)) {
        lVar3 = FUN_018b0ad0(param_1,iVar2);
        cVar1 = *(char *)(*(longlong *)(param_1 + 0x38) + 0x560);
        if (cVar1 == '\0') {
          *(undefined8 *)(lVar3 + 0x48) = *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x558);
        }
        else {
          *(char *)(lVar3 + 0x50) = cVar1;
        }
        *(undefined4 *)(lVar3 + 0x24) = *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x4a0);
        *(undefined4 *)(lVar3 + 0x20) = *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x4b4);
        *(undefined4 *)(lVar3 + 0x28) = *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x528);
      }
      *(int *)(param_1 + 0x40) = param_2;
      lVar4 = FUN_018b0ad0(param_1,param_2);
      FUN_01977ff0(*(undefined8 *)(lVar4 + 0x30),*(undefined8 *)(lVar4 + 0x38));
      lVar3 = *(longlong *)(param_1 + 0x38);
      *(undefined1 *)(lVar3 + 0x571) = 1;
      FUN_01977650(*(undefined8 *)(lVar4 + 0x30),lVar3);
      lVar3 = *(longlong *)(param_1 + 0x38);
      *(undefined1 *)(lVar3 + 0x571) = 0;
      *(undefined4 *)(lVar3 + 0x528) = *(undefined4 *)(lVar4 + 0x28);
      if (*(int *)(lVar4 + 0x28) == 0) {
        iVar2 = (**(code **)**(undefined8 **)(lVar4 + 0x38))(*(undefined8 **)(lVar4 + 0x38));
        if (0 < iVar2) {
          lVar3 = *(longlong *)(param_1 + 0x38);
          *(undefined4 *)(lVar3 + 0x528) = 1;
          *(undefined4 *)(*(longlong *)(lVar3 + 0x550) + 0x530) = 1;
        }
      }
      if (*(char *)(lVar4 + 0x50) == '\0') {
        FUN_018a8d30(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(lVar4 + 0x48));
      }
      else {
        FUN_018a8d80(*(undefined8 *)(param_1 + 0x38),*(char *)(lVar4 + 0x50));
      }
      FUN_018a70e0(*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x550));
      lVar3 = *(longlong *)(param_1 + 0x30);
      if (*(int *)(lVar3 + 0x4b8) - *(int *)(lVar3 + 0x4b0) < *(int *)(lVar4 + 0x20)) {
        FUN_01893490(lVar3,*(int *)(lVar4 + 0x20) + *(int *)(lVar3 + 0x4b0));
      }
      FUN_018933f0(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(lVar4 + 0x20));
      FUN_018abf10(*(undefined8 *)(param_1 + 0x38));
    }
  }
  return;
}

