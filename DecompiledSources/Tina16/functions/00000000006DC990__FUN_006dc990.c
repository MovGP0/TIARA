/* Ghidra address: 006dc990 */
/* Ghidra symbol: FUN_006dc990 */


void FUN_006dc990(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  bool bVar3;
  
  if ((*(char *)(param_1 + 0x38) == '\0') && (param_2 != *(longlong *)(param_1 + 0x18))) {
    *(longlong *)(param_1 + 0x18) = param_2;
    lVar1 = FUN_006dc7c0(param_1);
    if (*(byte *)(lVar1 + 0x52f) < 8) {
      bVar3 = ((int)CONCAT71((int7)((ulonglong)lVar1 >> 8),1) << (*(byte *)(lVar1 + 0x52f) & 0x1f) &
              10U) != 0;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      lVar1 = FUN_006dc7c0(param_1);
      if (((*(longlong *)(lVar1 + 0x608) != 0) && (*(char *)(param_1 + 0x38) == '\0')) &&
         (*(char *)(param_1 + 0x39) != '\0')) {
        lVar1 = FUN_006dd390(param_1);
        if (lVar1 == 0) {
          uVar2 = FUN_006dc7c0(param_1);
          FUN_006e1e40(uVar2,0);
        }
        else {
          uVar2 = FUN_006dd390(param_1);
          FUN_006de050(uVar2,0);
        }
      }
    }
  }
  return;
}

