/* Ghidra address: 01051600 */
/* Ghidra symbol: FUN_01051600 */


void FUN_01051600(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 local_1c;
  
  local_1c = 0;
  iVar3 = 0;
  if (*(char *)(*(longlong *)(param_1 + 0x6e0) + 0x4a0) != '\0') {
    FUN_00f60d70(&local_1c,0);
  }
  if (*(char *)(*(longlong *)(param_1 + 0x6e8) + 0x4a0) != '\0') {
    FUN_00f60d70(&local_1c,1);
  }
  if (*(char *)(*(longlong *)(param_1 + 0x768) + 0x4a0) != '\0') {
    FUN_00f60d70(&local_1c,2);
  }
  if (*(char *)(*(longlong *)(param_1 + 0x7a8) + 0x4a0) != '\0') {
    FUN_00f60d70(&local_1c,3);
  }
  DAT_0202f410 = -1;
  DAT_0202f414 = -1;
  DAT_0202f418 = -1;
  DAT_0202f41c = -1;
  iVar2 = 0;
  do {
    cVar1 = FUN_00f60d90(local_1c,iVar2);
    if (cVar1 != '\0') {
      if (iVar2 == 0) {
        DAT_0202f410 = iVar3;
      }
      if (iVar2 == 1) {
        DAT_0202f414 = iVar3;
      }
      if (iVar2 == 2) {
        DAT_0202f418 = iVar3;
      }
      if (iVar2 == 3) {
        DAT_0202f41c = iVar3;
      }
      iVar3 = iVar3 + 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 4);
  return;
}

