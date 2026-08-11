/* Ghidra address: 017b52f0 */
/* Ghidra symbol: FUN_017b52f0 */


undefined8 FUN_017b52f0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 local_50 [2];
  int local_40;
  int iStack_3c;
  
  uVar2 = 0xffffffff;
  if (*(char *)(param_1 + 0x21) != '\0') {
    uVar2 = FUN_00498310(2);
    local_40 = (int)uVar2;
    iStack_3c = (int)((ulonglong)uVar2 >> 0x20);
    _local_40 = CONCAT44(iStack_3c + *(int *)(param_1 + 0x158),
                         local_40 + (*(byte *)(param_1 + 0x145) / 0x10) * 4 +
                         *(int *)(param_1 + 0x154));
    lVar3 = FUN_017ae270(&DAT_017ad878,1,0);
    *(undefined8 *)(lVar3 + 0x14) = *(undefined8 *)(param_1 + 0x18);
    *(undefined1 *)(lVar3 + 0x1c) = *(undefined1 *)(param_1 + 0x147);
    *(undefined1 *)(lVar3 + 0x1d) = 0;
    uVar2 = FUN_017ae4e0(lVar3,&local_40);
    local_40 = (int)uVar2;
    iStack_3c = (int)((ulonglong)uVar2 >> 0x20);
    _local_40 = CONCAT44(iStack_3c + *(int *)(param_1 + 0x1c),local_40 + *(int *)(param_1 + 0x18));
    FUN_00410f20(lVar3);
    local_50[0] = FUN_00498310(param_2,param_3);
    cVar1 = FUN_017ad570(&local_40,local_50);
    uVar2 = 0xffffffff;
    if (cVar1 != '\0') {
      uVar2 = 0;
    }
  }
  return uVar2;
}

