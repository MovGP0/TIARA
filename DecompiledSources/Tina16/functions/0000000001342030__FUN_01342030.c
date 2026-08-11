/* Ghidra address: 01342030 */
/* Ghidra symbol: FUN_01342030 */


void FUN_01342030(longlong param_1,char param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  FUN_01341830(param_1);
  if (*(char *)(param_1 + 0x24) != '\0') {
    if (param_2 != '\0') {
      *(undefined4 *)(param_1 + 0xc) = param_3;
      FUN_01341a60(param_1);
    }
    iVar4 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 8) + 0x10);
    iVar3 = 0;
    if (-1 < iVar4 + -1) {
      do {
        lVar1 = FUN_01d347d0(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 8),iVar3);
        if (*(char *)(lVar1 + 8) == '\0') {
          *(undefined1 *)(lVar1 + 0x19) = 1;
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    if (*(char *)(param_1 + 0x60) != '\0') {
      uVar2 = FUN_014cdce0(*(undefined8 *)(*(longlong *)(param_1 + 0x68) + 0xe8));
      _disable_preview(uVar2);
      iVar4 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x68) + 0xc0) + 8) + 0x10
                      );
      iVar3 = 0;
      if (-1 < iVar4 + -1) {
        do {
          lVar1 = FUN_01d347d0(*(undefined8 *)
                                (*(longlong *)(*(longlong *)(param_1 + 0x68) + 0xc0) + 8),iVar3);
          if (*(char *)(lVar1 + 8) == '\0') {
            *(undefined1 *)(lVar1 + 0x19) = 1;
          }
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
    FUN_013d3770(*(undefined1 *)(param_1 + 0x60));
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  return;
}

