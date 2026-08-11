/* Ghidra address: 017c12c0 */
/* Ghidra symbol: FUN_017c12c0 */


void FUN_017c12c0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong local_30 [2];
  
  local_30[0] = 0;
  FUN_01cf0770(param_1,param_2);
  *(undefined4 *)(param_2 + 0x90) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(param_2 + 0x94) = *(undefined4 *)(param_1 + 0x94);
  FUN_017c2de0(param_2);
  FUN_017c2e00(param_2,*(undefined8 *)(param_1 + 0x2d0));
  FUN_017c2bc0(param_2);
  if (*(longlong *)(param_1 + 0x3f0) == 0) {
    *(undefined8 *)(param_2 + 0x3f0) = 0;
  }
  else {
    uVar1 = FUN_017c5070(*(longlong *)(param_1 + 0x3f0));
    *(undefined8 *)(param_2 + 0x3f0) = uVar1;
  }
  FUN_017feb40(param_2);
  puVar3 = (undefined8 *)(param_1 + 0x26);
  puVar4 = (undefined8 *)(param_2 + 0x26);
  for (lVar2 = 5; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)puVar3;
  *(undefined2 *)(param_2 + 0x24) = *(undefined2 *)(param_1 + 0x24);
  *(undefined2 *)(param_2 + 0x50) = *(undefined2 *)(param_1 + 0x50);
  FUN_00414ff0(param_2 + 0x2d8,param_1 + 0x2d8);
  *(undefined1 *)(param_2 + 0x3d8) = *(undefined1 *)(param_1 + 0x3d8);
  *(undefined1 *)(param_2 + 0x3da) = *(undefined1 *)(param_1 + 0x3da);
  *(undefined1 *)(param_2 + 0x3db) = *(undefined1 *)(param_1 + 0x3db);
  *(undefined1 *)(param_2 + 0x3d9) = *(undefined1 *)(param_1 + 0x3d9);
  *(undefined8 *)(param_2 + 0x3e0) = *(undefined8 *)(param_1 + 0x3e0);
  *(undefined8 *)(param_2 + 1000) = *(undefined8 *)(param_1 + 1000);
  *(undefined1 *)(param_2 + 0x3dc) = *(undefined1 *)(param_1 + 0x3dc);
  *(undefined1 *)(param_2 + 0x3f9) = *(undefined1 *)(param_1 + 0x3f9);
  *(undefined1 *)(param_2 + 0x3f8) = *(undefined1 *)(param_1 + 0x3f8);
  FUN_017ff570(param_1,local_30);
  if (local_30[0] != 0) {
    FUN_017ff590(param_2,local_30[0]);
  }
  FUN_00414480(local_30);
  return;
}

