/* Ghidra address: 00f62f10 */
/* Ghidra symbol: FUN_00f62f10 */


void FUN_00f62f10(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_40 = 0;
  local_30 = *param_3;
  FUN_00f62c10(param_1,param_2,&local_30);
  iVar4 = *(int *)(*(longlong *)(param_2 + 0x18) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar1 = FUN_004aeac0(*(undefined8 *)(param_2 + 0x18),iVar3);
      if (*(char *)(lVar1 + 0x10) == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0xd8))
                  (*(longlong **)(param_1 + 0x10),*(undefined8 *)(lVar1 + 0x20),
                   *(int *)(lVar1 + 0x2c) + -2);
      }
      else if (*(char *)(lVar1 + 0x10) == '\x02') {
        (**(code **)(**(longlong **)(param_1 + 0x10) + 200))
                  (*(longlong **)(param_1 + 0x10),**(undefined4 **)(lVar1 + 0x20),
                   (*(undefined4 **)(lVar1 + 0x20))[1]);
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0xc0))
                  (*(longlong **)(param_1 + 0x10),*(undefined4 *)(*(longlong *)(lVar1 + 0x20) + 8),
                   *(undefined4 *)(*(longlong *)(lVar1 + 0x20) + 0xc));
      }
      else if ((((*(char *)(param_1 + 0x80) == '\0') && (*(char *)(lVar1 + 0x10) == '\x03')) &&
               (*(char *)(param_1 + 0x61) == '\0')) &&
              (((*(char *)(lVar1 + 0x70) == '\0' &&
                (*(longlong *)(param_1 + 0x10) == *(longlong *)(param_1 + 0x88))) ||
               (*(longlong *)(param_1 + 0x10) == *(longlong *)(param_1 + 0x90))))) {
        FUN_00f62b90(param_1,*(undefined8 *)(param_1 + 0x10));
        lVar2 = *(longlong *)(param_1 + 0x10);
        if (lVar2 == *(longlong *)(param_1 + 0x88)) {
          FUN_005fce30(*(undefined8 *)(lVar2 + 0x70),*(undefined4 *)(lVar1 + 0x54));
          FUN_00414b50(&local_40,*(undefined8 *)(lVar1 + 0x68));
        }
        else {
          FUN_005fce30(*(undefined8 *)(lVar2 + 0x70),*(undefined4 *)(lVar1 + 0x50));
          FUN_00414b50(&local_40,*(undefined8 *)(lVar1 + 0x60));
        }
        if (*(char *)(lVar1 + 0x71) == '\0') {
          FUN_00f62b60(param_1,*(undefined8 *)(param_1 + 0x10));
        }
        else {
          local_38 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x118))
                               (*(longlong **)(param_1 + 0x10),local_40);
          lVar2 = FUN_00f6f0c0(param_2);
          *(int *)(lVar1 + 0x48) = *(int *)(lVar2 + 0x38) - (int)local_38 / 2;
          *(int *)(lVar1 + 0x4c) = *(int *)(lVar2 + 0x3c) - local_38._4_4_ / 2;
        }
        FUN_005fc860(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x70),
                     *(undefined4 *)(lVar1 + 0x58));
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0x120))
                  (*(longlong **)(param_1 + 0x10),*(undefined4 *)(lVar1 + 0x48),
                   *(undefined4 *)(lVar1 + 0x4c),local_40);
        FUN_00f62bd0(param_1,*(undefined8 *)(param_1 + 0x10));
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00414480(&local_40);
  return;
}

