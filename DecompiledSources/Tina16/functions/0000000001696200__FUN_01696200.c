/* Ghidra address: 01696200 */
/* Ghidra symbol: FUN_01696200 */


void FUN_01696200(longlong param_1,char param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  cVar2 = FUN_016961d0(param_1);
  if (cVar2 == '\0') {
    piVar1 = (int *)(param_1 + 0x20);
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))
              (*(longlong **)(param_1 + 0x18),&local_20,*piVar1);
    FUN_00414ad0(param_1 + 0x330,local_20);
    iVar3 = 0;
    if (*(longlong *)(param_1 + 0x330) != 0) {
      iVar3 = *(int *)(*(longlong *)(param_1 + 0x330) + -4);
    }
    if (iVar3 < *(int *)(param_1 + 0x24)) {
      *piVar1 = *piVar1 + 1;
      *(undefined4 *)(param_1 + 0x24) = 1;
      cVar2 = FUN_016961d0(param_1);
      if (cVar2 == '\0') {
        *(undefined2 *)(param_1 + 0x30) = DAT_01f80bea;
      }
      else {
        *(undefined2 *)(param_1 + 0x30) = DAT_01f80be8;
      }
    }
    else {
      cVar2 = FUN_01695e80(param_1);
      if (cVar2 != '\0') {
        FUN_00416780(&local_28,*(undefined2 *)(param_1 + 0x30));
        FUN_00416ad0(param_1 + 0x2e0,local_28);
      }
      cVar2 = FUN_01695ea0(param_1);
      if (cVar2 != '\0') {
        FUN_00416780(&local_30,*(undefined2 *)(param_1 + 0x30));
        FUN_00416ad0(param_1 + 0x2e8,local_30);
      }
      cVar2 = FUN_01695ec0(param_1);
      if (cVar2 != '\0') {
        FUN_00416780(&local_38,*(undefined2 *)(param_1 + 0x30));
        FUN_00416ad0(param_1 + 0x2f0,local_38);
      }
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))
                (*(longlong **)(param_1 + 0x18),&local_40,*piVar1);
      FUN_00414ad0(param_1 + 0x330,local_40);
      *(undefined2 *)(param_1 + 0x30) =
           *(undefined2 *)
            (*(longlong *)(param_1 + 0x330) + -2 + (longlong)*(int *)(param_1 + 0x24) * 2);
      *(bool *)(param_1 + 0x10) = *(int *)(param_1 + 0x24) == 1;
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
      if (param_2 != '\0') {
        if (((*(int *)(param_1 + 0x318) == 0) && (*(short *)(param_1 + 0x30) == 0x7b)) &&
           (*(char *)(param_1 + 0x11) == '\0')) {
          *(undefined1 *)(param_1 + 0x11) = 1;
          FUN_01696e60();
        }
        if (((*(int *)(param_1 + 0x318) == 0) && (*(short *)(param_1 + 0x30) == 0x7d)) &&
           (*(char *)(param_1 + 0x11) == '\0')) {
          FUN_01696e00(param_1,*(undefined2 *)(param_1 + 0x30));
        }
      }
    }
  }
  else {
    *(undefined2 *)(param_1 + 0x30) = 0xff;
  }
  FUN_00414560(&local_40,5);
  return;
}

