/* Ghidra address: 007faa30 */
/* Ghidra symbol: FUN_007faa30 */


void FUN_007faa30(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  ulonglong uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  *(undefined4 *)(param_1 + 0x1c) = 0;
  cVar1 = *(char *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0x24) != '\0') {
    iVar3 = FUN_007fa0c0(param_1,param_2,param_3);
    iVar3 = *(int *)(param_1 + 0x18) - iVar3;
    *(int *)(param_1 + 0x1c) = iVar3;
    if (iVar3 < 0) {
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
  }
  local_44 = 0x1c;
  local_40 = 0x17;
  local_3c = 0;
  if (*(int *)(param_1 + 0x1c) < 1) {
    local_38 = 0;
  }
  else {
    local_38 = *(undefined4 *)(param_1 + 0x18);
  }
  local_34 = FUN_007fa0c0(param_1,param_2,param_3);
  local_34 = local_34 + 1;
  local_30 = *(undefined4 *)(param_1 + 0x14);
  *(undefined1 *)(param_1 + 0x4c) = 0;
  local_2c = local_30;
  FUN_007fa8c0(auStack_68,0);
  uVar4 = FUN_0065b870(*(undefined8 *)(param_1 + 8));
  thunk_FUN_041b9595(uVar4,cVar1 == '\x01',&local_44,0xffffffff);
  FUN_007fa6c0(param_1,*(undefined4 *)(param_1 + 0x14));
  iVar3 = FUN_007fa0c0(param_1,1,0);
  uVar2 = (longlong)(iVar3 * 9) / 10;
  *(short *)(param_1 + 0x12) = (short)uVar2;
  if (*(char *)(param_1 + 0x27) != '\0') {
    *(short *)(param_1 + 0x10) = (short)((uVar2 & 0xffff) / 10);
  }
  return;
}

