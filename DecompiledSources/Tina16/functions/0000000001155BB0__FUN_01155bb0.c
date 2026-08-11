/* Ghidra address: 01155bb0 */
/* Ghidra symbol: FUN_01155bb0 */


void FUN_01155bb0(longlong param_1,undefined8 param_2,char *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_1c;
  
  if (*(int *)(*(longlong *)(param_1 + 0x758) + 0x4a8) == 0) {
    uVar2 = FUN_019a4600();
    cVar1 = FUN_0114ee40(uVar2,&local_1c);
    *param_3 = cVar1;
    if (*param_3 != '\0') {
      FUN_00f04fa0(*(undefined8 *)(param_1 + 0x750),local_1c);
    }
  }
  return;
}

