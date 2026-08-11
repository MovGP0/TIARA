/* Ghidra address: 01117480 */
/* Ghidra symbol: FUN_01117480 */


void FUN_01117480(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  double dVar4;
  undefined8 local_10;
  
  local_10 = 0;
  if (*(int *)(param_1 + 0x73c) == 8) {
    dVar4 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x700));
    if (dVar4 <= 0.0) {
      uVar3 = FUN_00b89270();
      FUN_00b8e520(uVar3,&local_10,0x3ee);
      FUN_01117330(param_1,local_10);
    }
  }
  if (*(char *)(param_1 + 0x738) == '\0') {
    if (*(int *)(param_1 + 0x73c) == 8) {
      uVar3 = FUN_00b90090(*(undefined8 *)(param_1 + 0x700));
      *(undefined8 *)(*(longlong *)(param_1 + 0x730) + 0x640) = uVar3;
      uVar2 = FUN_00f04d50(*(undefined8 *)(param_1 + 0x6f0));
      lVar1 = *(longlong *)(param_1 + 0x730);
      *(undefined4 *)(lVar1 + 0x648) = uVar2;
      *(undefined1 *)(lVar1 + 0x64c) = *(undefined1 *)(*(longlong *)(param_1 + 0x6d0) + 0x4a8);
    }
    else {
      DAT_02030140 = FUN_00b90090(*(undefined8 *)(param_1 + 0x718));
      DAT_02030148 = FUN_00b90090(*(undefined8 *)(param_1 + 0x728));
      DAT_02030150 = *(undefined1 *)(*(longlong *)(param_1 + 0x6d0) + 0x4a8);
    }
  }
  FUN_00414480(&local_10);
  return;
}

