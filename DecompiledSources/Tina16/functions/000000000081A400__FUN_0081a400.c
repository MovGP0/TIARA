/* Ghidra address: 0081a400 */
/* Ghidra symbol: FUN_0081a400 */


void FUN_0081a400(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  cVar3 = FUN_00818440(param_1);
  if (cVar3 != '\0') {
    iVar1 = *(int *)(param_2 + 8);
    if (iVar1 == 0xf020) {
      if (*(char *)(*(longlong *)(param_1 + 0x10) + 0x4d6) == '\x01') {
        *(undefined1 *)(param_1 + 0x70) = 0;
      }
    }
    else if (iVar1 == 0xf060) {
      if (*(char *)(*(longlong *)(param_1 + 0x10) + 0x4d6) == '\x01') {
        uVar4 = FUN_0065b870(*(undefined8 *)(DAT_02012668 + 0xa8));
        uVar5 = FUN_0065b870(*(undefined8 *)(param_1 + 0x10));
        thunk_FUN_0413e052(uVar4,0x52d,uVar5,0);
      }
    }
    else if (iVar1 == 0xf100) {
      lVar2 = *(longlong *)(param_1 + 0xa0);
      if (lVar2 != 0) {
        if (*(short *)(param_2 + 0x10) == 0x20) {
          FUN_00817c50(lVar2);
        }
        else {
          *(undefined1 *)(lVar2 + 0x9a) = 1;
          *(undefined1 *)(lVar2 + 0x1c) = 1;
          FUN_00813f60(lVar2,0);
        }
        *(undefined1 *)(param_1 + 0x20) = 1;
      }
    }
    else if (iVar1 == 0xf120) {
      *(undefined1 *)(param_1 + 0x135) = 1;
      *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xd0);
    }
  }
  return;
}

