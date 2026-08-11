/* Ghidra address: 00687fa0 */
/* Ghidra symbol: FUN_00687fa0 */


void FUN_00687fa0(longlong *param_1)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  cVar1 = FUN_0044f0c0(5,1);
  if (((cVar1 == '\0') || (param_1[0x9c] == 0)) || (cVar1 = FUN_0065be20(param_1), cVar1 == '\0')) {
    FUN_006886b0(param_1,0);
    return;
  }
  if (param_1[0x9d] == 0) {
    lVar3 = FUN_007d5080(&PTR_FUN_006441f8,1,0);
    param_1[0x9d] = lVar3;
  }
  lVar3 = param_1[0x9d];
  FUN_007d64c0(lVar3,*(undefined1 *)(param_1[0x9c] + 0xe0));
  *(undefined1 *)(lVar3 + 0xa9) = *(undefined1 *)(param_1[0x9c] + 0xa9);
  *(undefined1 *)(lVar3 + 0xab) = *(undefined1 *)(param_1[0x9c] + 0xab);
  FUN_007d7850(lVar3,*(undefined1 *)(param_1[0x9c] + 0xa8));
  FUN_007d55a0(lVar3,*(undefined1 *)(param_1[0x9c] + 0xaa));
  FUN_007d6540(lVar3,*(undefined4 *)(param_1[0x9c] + 0x94),*(undefined4 *)(param_1[0x9c] + 0x90));
  cVar1 = FUN_007d53b0(lVar3);
  if (cVar1 == '\0') {
    FUN_0065b830(param_1);
  }
  else {
    uVar4 = FUN_007d56e0(lVar3);
    thunk_FUN_0419d3ec(uVar4,*(undefined4 *)(lVar3 + 0x94),*(undefined4 *)(lVar3 + 0x90));
  }
  uVar4 = FUN_007d56e0(param_1[0x9c]);
  uVar2 = thunk_FUN_041d5618(uVar4);
  uVar2 = FUN_00687f70(uVar2);
  FUN_007d6470(lVar3,uVar2);
  *(undefined4 *)(lVar3 + 0xb0) = *(undefined4 *)(param_1[0x9c] + 0xb0);
  (**(code **)(*param_1 + 0x280))(param_1);
  if ((int)param_1[0x9a] == -1) {
    return;
  }
  uVar4 = FUN_007d56e0(param_1[0x9d]);
  FUN_006886b0(param_1,uVar4);
  return;
}

