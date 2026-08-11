/* Ghidra address: 006dc8a0 */
/* Ghidra symbol: FUN_006dc8a0 */


void FUN_006dc8a0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  bool bVar4;
  undefined4 local_50 [2];
  undefined8 local_48;
  undefined8 local_38;
  
  if (*(char *)(param_1 + 0x38) == '\0') {
    iVar1 = FUN_00416db0(param_2,*(undefined8 *)(param_1 + 0x10));
    if (iVar1 != 0) {
      FUN_00414ad0(param_1 + 0x10,param_2);
      local_50[0] = 1;
      local_48 = *(undefined8 *)(param_1 + 0x20);
      local_38 = 0xffffffffffffffff;
      uVar2 = FUN_006dc7a0(param_1);
      thunk_FUN_041b2403(uVar2,0x113f,0,local_50);
      lVar3 = FUN_006dc7c0(param_1);
      if (*(byte *)(lVar3 + 0x52f) < 8) {
        bVar4 = ((int)CONCAT71((int7)((ulonglong)lVar3 >> 8),1) << (*(byte *)(lVar3 + 0x52f) & 0x1f)
                & 0xcU) != 0;
      }
      else {
        bVar4 = false;
      }
      if ((bVar4) && (*(char *)(param_1 + 0x39) != '\0')) {
        lVar3 = FUN_006dd390(param_1);
        if (lVar3 == 0) {
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

