/* Ghidra address: 006de900 */
/* Ghidra symbol: FUN_006de900 */


void FUN_006de900(longlong param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 local_4a;
  undefined4 local_46;
  undefined4 local_42;
  undefined4 local_3e;
  undefined4 local_3a;
  undefined8 local_36;
  int local_2e;
  undefined1 local_2a;
  byte local_29;
  longlong local_28;
  int local_1c;
  
  local_28 = 0;
  FUN_00414b50(&local_28,*(undefined8 *)(param_1 + 0x10));
  uVar2 = 0;
  if (local_28 != 0) {
    uVar2 = *(uint *)(local_28 + -4);
  }
  if (0xff < (int)uVar2) {
    uVar2 = 0xff;
  }
  local_29 = (byte)uVar2;
  local_1c = (uVar2 & 0xff) * 2 + 0x22;
  local_4a = *(undefined4 *)(param_1 + 0x28);
  local_46 = *(undefined4 *)(param_1 + 0x2c);
  local_3e = *(undefined4 *)(param_1 + 0x30);
  local_42 = *(undefined4 *)(param_1 + 0x34);
  local_36 = *(undefined8 *)(param_1 + 0x18);
  local_3a = *(undefined4 *)(param_1 + 0x3c);
  local_2a = *(char *)(param_1 + 0x3a) != '\0';
  iVar3 = FUN_006dd8c0(param_1);
  if ((iVar3 == 0) && (cVar1 = FUN_006dd2b0(param_1), cVar1 != '\0')) {
    local_2e = -1;
  }
  else {
    local_2e = FUN_006dd8c0(param_1);
  }
  FUN_004b89e0(param_2,&local_1c,4);
  FUN_004b89e0(param_2,&local_4a,0x22);
  uVar4 = FUN_00414de0(&local_28);
  FUN_004b89e0(param_2,uVar4,(uint)local_29 * 2);
  iVar5 = 0;
  iVar3 = local_2e;
  if (-1 < local_2e + -1) {
    do {
      uVar4 = FUN_006dd770(param_1,iVar5);
      FUN_006de900(uVar4,param_2);
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00414480(&local_28);
  return;
}

