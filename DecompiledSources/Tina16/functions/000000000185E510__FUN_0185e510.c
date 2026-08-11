/* Ghidra address: 0185e510 */
/* Ghidra symbol: FUN_0185e510 */


void FUN_0185e510(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  uint local_1c;
  
  lVar2 = *(longlong *)(param_1 + 0x28);
  FUN_0185e6a0(param_1,2,lVar2);
  FUN_0185e6a0(param_1,2,lVar2 + 4);
  local_1c = 0;
  if (*(char *)(lVar2 + 8) != '\0') {
    local_1c = 0x80;
  }
  local_1c = local_1c | (*(int *)(lVar2 + 0xc) - 1U & 7) << 4;
  if (*(char *)(lVar2 + 0x10) != '\0') {
    local_1c = local_1c | 8;
  }
  iVar1 = *(int *)(lVar2 + 0x14);
  if (iVar1 < 3) {
    uVar3 = 0;
  }
  else if (iVar1 < 5) {
    uVar3 = 1;
  }
  else if (iVar1 < 9) {
    uVar3 = 2;
  }
  else if (iVar1 < 0x11) {
    uVar3 = 3;
  }
  else if (iVar1 < 0x21) {
    uVar3 = 4;
  }
  else if (iVar1 < 0x41) {
    uVar3 = 5;
  }
  else if (iVar1 < 0x81) {
    uVar3 = 6;
  }
  else if (iVar1 < 0x101) {
    uVar3 = 7;
  }
  else {
    uVar3 = 7;
  }
  local_1c = local_1c | uVar3;
  FUN_0185e6a0(param_1,1,&local_1c);
  FUN_0185e6a0(param_1,1,lVar2 + 0x18);
  FUN_0185e6a0(param_1,1,lVar2 + 0x1c);
  if (*(char *)(lVar2 + 8) != '\0') {
    FUN_0185de30(param_1,*(undefined4 *)(lVar2 + 0x20));
  }
  return;
}

