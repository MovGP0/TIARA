/* Ghidra address: 0116d220 */
/* Ghidra symbol: FUN_0116d220 */


void FUN_0116d220(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar3 = 0x28;
  puVar1 = &DAT_0203a864;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  DAT_0203a71c = 0;
  DAT_0203a720 = 0;
  DAT_0203d94c = 0;
  for (; 0 < DAT_0203a700; DAT_0203a700 = DAT_0203a700 + -1) {
    uVar2 = FUN_01169040(*(undefined8 *)(&DAT_0203ff40 + (longlong)DAT_0203a700 * 8),param_1);
    FUN_004095f0(uVar2);
  }
  for (; 0 < DAT_0203a708; DAT_0203a708 = DAT_0203a708 + -1) {
    uVar2 = FUN_0116a280(*(undefined8 *)(&DAT_0203fa90 + (longlong)DAT_0203a708 * 8),param_1);
    FUN_004095f0(uVar2);
  }
  for (; 0 < DAT_0203a704; DAT_0203a704 = DAT_0203a704 + -1) {
    uVar2 = FUN_0116aac0(*(undefined8 *)(&DAT_020403f0 + (longlong)DAT_0203a704 * 8),param_1);
    FUN_004095f0(uVar2);
  }
  for (; 0 < DAT_0203a6fc; DAT_0203a6fc = DAT_0203a6fc + -1) {
    uVar2 = FUN_0116b310(*(undefined8 *)(&DAT_0203f5e0 + (longlong)DAT_0203a6fc * 8),param_1);
    FUN_004095f0(uVar2);
  }
  for (; 0 < DAT_0203a6f8; DAT_0203a6f8 = DAT_0203a6f8 + -1) {
    uVar2 = FUN_0116c030(*(undefined8 *)(&DAT_0203f130 + (longlong)DAT_0203a6f8 * 8),param_1);
    FUN_004095f0(uVar2);
  }
  for (; 0 < DAT_0203a70c; DAT_0203a70c = DAT_0203a70c + -1) {
    uVar2 = FUN_0116cae0(*(undefined8 *)(&DAT_020408a0 + (longlong)DAT_0203a70c * 8),param_1);
    FUN_004095f0(uVar2);
  }
  for (; 0 < DAT_0203a710; DAT_0203a710 = DAT_0203a710 + -1) {
    uVar2 = FUN_011686f0(*(undefined8 *)(&DAT_02040d50 + (longlong)DAT_0203a710 * 8),param_1);
    FUN_004095f0(uVar2);
  }
  for (; 0 < DAT_0203a714; DAT_0203a714 = DAT_0203a714 + -1) {
    uVar2 = FUN_01167f40(*(undefined8 *)(&DAT_0203dce0 + (longlong)DAT_0203a714 * 8),param_1);
    FUN_004095f0(uVar2);
  }
  for (; 0 < DAT_0203a718; DAT_0203a718 = DAT_0203a718 + -1) {
    uVar2 = FUN_011680a0(*(undefined8 *)(&DAT_0203e190 + (longlong)DAT_0203a718 * 8),param_1);
    FUN_004095f0(uVar2);
  }
  DAT_0203a6d4 = 0;
  DAT_0203a6d8 = 0;
  DAT_0203a6dc = 0;
  DAT_0203a6e0 = 0;
  DAT_0203a6f4 = 0;
  DAT_0203a6e8 = 0;
  DAT_0203a6ec = 0;
  DAT_0203a6f0 = 0;
  DAT_0203a9a4 = 0;
  DAT_0203a71c = 0;
  DAT_0203a6e4 = 0;
  return;
}

