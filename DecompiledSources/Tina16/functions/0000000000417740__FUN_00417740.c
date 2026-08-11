/* Ghidra address: 00417740 */
/* Ghidra symbol: FUN_00417740 */


longlong FUN_00417740(longlong param_1,longlong param_2)

{
  bool bVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  
  param_2 = param_2 + (ulonglong)*(byte *)(param_2 + 1);
  iVar4 = *(int *)(param_2 + 6);
  if (iVar4 != 0) {
    bVar1 = false;
    uVar3 = 0;
    do {
      uVar2 = (ulonglong)uVar3;
      if (*(longlong *)(param_2 + 10 + uVar2 * 0x10) == 0) {
        bVar1 = true;
      }
      else if (bVar1) {
        if (*(char *)**(undefined8 **)(param_2 + 10 + uVar2 * 0x10) == '\x0f') {
          FUN_0041d480(param_1 + (ulonglong)*(uint *)(param_2 + 0x12 + uVar2 * 0x10));
        }
        else {
          FUN_004098e0(2);
        }
      }
      else {
        FUN_00417840(param_1 + (ulonglong)*(uint *)(param_2 + 0x12 + uVar2 * 0x10),
                     **(undefined8 **)(param_2 + 10 + uVar2 * 0x10),1);
      }
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return param_1;
}

