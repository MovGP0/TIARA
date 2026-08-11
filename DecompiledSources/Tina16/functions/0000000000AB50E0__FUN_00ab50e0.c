/* Ghidra address: 00ab50e0 */
/* Ghidra symbol: FUN_00ab50e0 */


void FUN_00ab50e0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  char local_29;
  
  lVar3 = FUN_004aeac0(*(longlong *)(param_1 + 0x118),
                       *(int *)(*(longlong *)(param_1 + 0x118) + 0x10) + -1);
  lVar1 = *(longlong *)(lVar3 + 8);
  if (*(int *)(lVar3 + 0x30) == *(int *)(param_1 + 0x6c)) {
    uVar4 = FUN_00a5b160(param_2);
    FUN_00a94390(lVar3,uVar4);
  }
  else {
    uVar4 = FUN_00a5b160(param_2);
    lVar3 = FUN_00a93d20(&DAT_00a7d4d0,1,param_1,uVar4,*(undefined4 *)(param_1 + 0x6c));
    FUN_00a72ea0(*(undefined8 *)(lVar3 + 8),lVar1);
    FUN_004ae7e0(*(undefined8 *)(param_1 + 0x118),lVar3);
  }
  FUN_00414ad0(lVar3 + 0x20,*(undefined8 *)(param_2 + 0x58));
  if (*(longlong *)(lVar1 + 8) != 0) {
    FUN_00a94360(lVar3);
    FUN_00a5c040(param_2,*(undefined8 *)(lVar3 + 0x40));
    FUN_00a943c0(lVar3,*(longlong *)(lVar3 + 0x40) + 8);
    iVar2 = FUN_004aeba0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 600),lVar3);
    if (iVar2 == -1) {
      FUN_004ae7e0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 600),lVar3);
    }
  }
  uVar4 = FUN_00a53e80(param_2,&local_29);
  if ((char)uVar4 != '\0') {
    if ((byte)(local_29 - 8U) < 8) {
      bVar5 = ((int)CONCAT71((int7)((ulonglong)uVar4 >> 8),1) << (local_29 - 8U & 0x1f) & 3U) != 0;
    }
    else {
      bVar5 = false;
    }
    if (bVar5) {
      *(char *)(lVar3 + 0x5c) = local_29;
      return;
    }
  }
  *(undefined1 *)(lVar3 + 0x5c) = 0;
  return;
}

