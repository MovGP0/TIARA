/* Ghidra address: 006f38e0 */
/* Ghidra symbol: FUN_006f38e0 */


void FUN_006f38e0(longlong param_1,char param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  
  if (param_2 != *(char *)(param_1 + 0x4a1)) {
    *(char *)(param_1 + 0x4a1) = param_2;
    cVar2 = FUN_0065be20(param_1);
    if (cVar2 != '\0') {
      uVar4 = FUN_0065b870(param_1);
      uVar3 = thunk_FUN_04118143(uVar4,0xfffffff0);
      uVar1 = *(uint *)(&DAT_01e014f8 + (ulonglong)*(byte *)(param_1 + 0x4a1) * 4);
      uVar4 = FUN_0065b870(param_1);
      thunk_FUN_03c9d277(uVar4,0xfffffff0,(longlong)(int)(uVar3 & 0xfffffffc | uVar1));
      FUN_006f74d0(param_1);
      if (*(byte *)(param_1 + 0x4a1) < 2) {
        if (*(char *)(*(longlong *)(param_1 + 0x4f0) + 0x10) == '\0') {
          FUN_006f7410(param_1,3);
        }
        else {
          FUN_006f7410(param_1,1);
        }
      }
      if ((*(ushort *)(param_1 + 0x34) & 1) == 0) {
        FUN_00655b90(param_1);
      }
    }
  }
  return;
}

