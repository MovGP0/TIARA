/* Ghidra address: 017b7960 */
/* Ghidra symbol: FUN_017b7960 */


void FUN_017b7960(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 in_RAX;
  longlong lVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    lVar3 = FUN_017ae270(&DAT_017ad878,CONCAT71((int7)((ulonglong)in_RAX >> 8),1) & 0xffffffff,
                         param_2);
    *(undefined8 *)(lVar3 + 0x14) = *(undefined8 *)(param_1 + 0x18);
    *(undefined1 *)(lVar3 + 0x1c) = *(undefined1 *)(param_1 + 0x78);
    if ((*(char *)(param_1 + 0x20) != '\0') || (*(char *)(param_1 + 0x21) != '\0')) {
      FUN_005fd640(*(undefined8 *)(*(longlong *)(lVar3 + 8) + 0x78),0xf);
      FUN_005fd670(*(undefined8 *)(*(longlong *)(lVar3 + 8) + 0x78),0);
      FUN_005fd6d0(*(undefined8 *)(*(longlong *)(lVar3 + 8) + 0x78),0);
      FUN_005fd4e0(*(undefined8 *)(*(longlong *)(lVar3 + 8) + 0x78),0x8000);
      FUN_005fdcb0(*(undefined8 *)(*(longlong *)(lVar3 + 8) + 0x80),1);
      uVar1 = FUN_0040c840((double)*(int *)(param_1 + 0x70) / (double)*(float *)(param_1 + 0x7c));
      uVar2 = FUN_0040c840((double)*(int *)(param_1 + 0x74) / (double)*(float *)(param_1 + 0x7c));
      FUN_017aecd0(lVar3,0,0,uVar1,uVar2);
    }
    if (*(char *)(param_1 + 0x20) == '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x48) + 0x80))(*(longlong **)(param_1 + 0x48),1);
      plVar4 = (longlong *)FUN_00609e10(*(undefined8 *)(param_1 + 0x40));
      uVar1 = (**(code **)(*plVar4 + 0x30))(plVar4,0,0);
      FUN_0060be30(*(undefined8 *)(param_1 + 0x48),uVar1);
      uVar1 = FUN_0040c840((double)*(int *)(param_1 + 0x70) / (double)*(float *)(param_1 + 0x7c));
      uVar2 = FUN_0040c840((double)*(int *)(param_1 + 0x74) / (double)*(float *)(param_1 + 0x7c));
      FUN_017af980(lVar3,0,0,uVar1,uVar2,*(undefined8 *)(param_1 + 0x48));
    }
    FUN_00410f20(lVar3);
  }
  return;
}

