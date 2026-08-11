/* Ghidra address: 013738c0 */
/* Ghidra symbol: FUN_013738c0 */


void FUN_013738c0(longlong param_1,undefined1 param_2,undefined1 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 local_78 [11];
  
  FUN_00414610(param_5);
  lVar1 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x478),0);
  if (*(char *)(lVar1 + 0x12) == '\0') {
    FUN_013731c0(param_1,param_2,param_3,param_4,param_5);
  }
  else if (*(char *)(lVar1 + 0x12) == '\x01') {
    iVar4 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x468) + 0x10);
    iVar2 = 1;
    if (0 < iVar4) {
      puVar3 = local_78;
      do {
        lVar1 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x468),iVar2 + -1);
        *puVar3 = *(undefined8 *)(lVar1 + 0x1c);
        iVar2 = iVar2 + 1;
        puVar3 = puVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    FUN_01372cf0(param_1,param_2,local_78,param_3,param_4,param_5);
  }
  FUN_00414480(&param_5);
  return;
}

