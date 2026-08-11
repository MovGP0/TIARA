/* Ghidra address: 010f7c30 */
/* Ghidra symbol: FUN_010f7c30 */


void FUN_010f7c30(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 local_38 [32];
  
  cVar2 = FUN_00f83630(param_2,param_1 + 0x9c6);
  if (cVar2 != '\0') {
    if (*(char *)(param_1 + 0x9c0) == '\0') {
      lVar1 = *(longlong *)(param_1 + 0x9b0);
      if (*(char *)(*(longlong *)(param_1 + 0x970) + 0x328) == '\0') {
        if ((*(char *)(*(longlong *)(param_1 + 0x918) + 0x328) == '\0') ||
           (*(char *)(lVar1 + 0xc0) == '\0')) {
          if ((*(char *)(*(longlong *)(param_1 + 0x968) + 0x328) != '\0') &&
             (*(char *)(lVar1 + 0xc1) != '\0')) {
            *(undefined1 *)(lVar1 + 0xc1) = 0;
            FUN_010e7ec0(lVar1,0);
          }
        }
        else {
          *(undefined1 *)(lVar1 + 0xc0) = 0;
          FUN_010e7ec0(lVar1,1);
        }
      }
      else if ((*(char *)(*(longlong *)(param_1 + 0x918) + 0x328) == '\0') ||
              (*(char *)(lVar1 + 0xc0) != '\0')) {
        if ((*(char *)(*(longlong *)(param_1 + 0x968) + 0x328) != '\0') &&
           (*(char *)(lVar1 + 0xc1) == '\0')) {
          *(undefined1 *)(lVar1 + 0xc1) = 1;
          FUN_010e7c50(lVar1,0,*(undefined8 *)(*(longlong *)(param_1 + 0x870) + 0x40));
        }
      }
      else {
        *(undefined1 *)(lVar1 + 0xc0) = 1;
        FUN_010e7c50(lVar1,1,*(undefined8 *)(*(longlong *)(param_1 + 0x870) + 0x40));
      }
      FUN_010f6de0(param_1,local_38);
    }
    else {
      uVar3 = FUN_0065b870(param_1);
      FUN_00f83670(uVar3,param_2);
    }
  }
  return;
}

