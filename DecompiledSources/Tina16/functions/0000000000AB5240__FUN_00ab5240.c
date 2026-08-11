/* Ghidra address: 00ab5240 */
/* Ghidra symbol: FUN_00ab5240 */


void FUN_00ab5240(longlong param_1,char param_2,undefined8 param_3,longlong param_4,
                 undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  char local_29;
  
  lVar2 = FUN_004aeac0(*(longlong *)(param_1 + 0x118),
                       *(int *)(*(longlong *)(param_1 + 0x118) + 0x10) + -1);
  if (*(int *)(lVar2 + 0x30) == *(int *)(param_1 + 0x6c)) {
    uVar3 = FUN_00a5b160(param_6);
    FUN_00a94390(lVar2,uVar3);
  }
  else {
    uVar3 = FUN_00a5b160(param_6);
    lVar2 = FUN_00a93d20(&DAT_00a7d4d0,1,param_1,uVar3,*(undefined4 *)(param_1 + 0x6c));
    FUN_004ae7e0(*(undefined8 *)(param_1 + 0x118),lVar2);
  }
  if (param_2 == '\0') {
    if (*(longlong *)(lVar2 + 0x40) != 0) {
      FUN_00410f20(*(longlong *)(lVar2 + 0x40));
      *(undefined8 *)(lVar2 + 0x40) = 0;
    }
  }
  else {
    FUN_00a94360(lVar2);
    FUN_00a5c040(param_6,*(undefined8 *)(lVar2 + 0x40));
    FUN_00a943c0(lVar2,*(longlong *)(lVar2 + 0x40) + 8);
    iVar1 = FUN_004aeba0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 600),lVar2);
    if (iVar1 == -1) {
      FUN_004ae7e0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 600),lVar2);
    }
    if (*(char *)(*(longlong *)(param_1 + 0x18) + 0x2c9) == '\0') {
      FUN_00a94140(lVar2,*(undefined4 *)(param_4 + 0x30));
    }
  }
  FUN_00a72ea0(*(undefined8 *)(lVar2 + 8),param_4);
  uVar3 = FUN_00a53e80(param_6,&local_29);
  if ((char)uVar3 != '\0') {
    if ((byte)(local_29 - 8U) < 8) {
      bVar4 = ((int)CONCAT71((int7)((ulonglong)uVar3 >> 8),1) << (local_29 - 8U & 0x1f) & 3U) != 0;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      *(char *)(lVar2 + 0x5c) = local_29;
      return;
    }
  }
  *(undefined1 *)(lVar2 + 0x5c) = 0;
  return;
}

