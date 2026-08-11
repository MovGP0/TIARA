/* Ghidra address: 00f78bb0 */
/* Ghidra symbol: FUN_00f78bb0 */


void FUN_00f78bb0(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  iVar4 = 0;
  iVar5 = *(int *)(param_1 + 0x3c);
  if (-1 < iVar5 + -1) {
    do {
      FUN_00f78f10(param_1,local_30,iVar4);
      FUN_00f78b20(param_1,local_30[0]);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x90) + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x90),iVar4);
      if (*(char *)(lVar3 + 0x30) == '\x03') {
        iVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0xb0))
                          (*(longlong **)(param_1 + 0x18),*(undefined8 *)(lVar3 + 0x110));
        if (iVar2 == -1) {
          FUN_00f78b20(param_1,*(undefined8 *)(lVar3 + 0x110));
        }
        if ((*(char *)(lVar3 + 0x124) == '\0') &&
           (iVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0xb0))
                              (*(longlong **)(param_1 + 0x18),*(undefined8 *)(lVar3 + 0x118)),
           iVar2 == -1)) {
          FUN_00f78b20(param_1,*(undefined8 *)(lVar3 + 0x118));
        }
      }
      else if (*(char *)(lVar3 + 0x30) == '\x04') {
        iVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0xb0))
                          (*(longlong **)(param_1 + 0x18),*(undefined8 *)(lVar3 + 0x110));
        if (iVar2 == -1) {
          FUN_00f78b20(param_1,*(undefined8 *)(lVar3 + 0x110));
        }
      }
      else {
        cVar1 = *(char *)(lVar3 + 0x30);
        if ((cVar1 == '\x02') || (cVar1 == '\x01')) {
          iVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0xb0))
                            (*(longlong **)(param_1 + 0x18),*(undefined8 *)(lVar3 + 0x110));
          if (iVar2 == -1) {
            FUN_00f78b20(param_1,*(undefined8 *)(lVar3 + 0x110));
          }
        }
        else if (cVar1 == '\x06') {
          iVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0xb0))
                            (*(longlong **)(param_1 + 0x18),*(undefined8 *)(lVar3 + 0x110));
          if (iVar2 == -1) {
            FUN_00f78b20(param_1,*(undefined8 *)(lVar3 + 0x110));
          }
        }
        else if (((cVar1 == '\a') && (*(char *)(lVar3 + 0x128) == '\0')) &&
                (iVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0xb0))
                                   (*(longlong **)(param_1 + 0x18),*(undefined8 *)(lVar3 + 0x118)),
                iVar2 == -1)) {
          FUN_00f78b20(param_1,*(undefined8 *)(lVar3 + 0x118));
        }
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00414480(local_30);
  return;
}

