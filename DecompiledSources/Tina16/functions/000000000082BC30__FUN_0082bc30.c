/* Ghidra address: 0082bc30 */
/* Ghidra symbol: FUN_0082bc30 */


void FUN_0082bc30(longlong *param_1,byte param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined8 local_28;
  longlong local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  if (param_2 == *(byte *)((longlong)param_1 + 0x529)) goto code_r0x0082bd98;
  if (param_2 != 0) {
    if (param_2 < 8) {
      uVar1 = 1 << (param_2 & 0x1f);
      uVar2 = CONCAT31((int3)(uVar1 >> 8),(uVar1 & 0x12) != 0);
    }
    else {
      uVar2 = 0;
    }
    uVar3 = FUN_00688430(param_1,uVar2);
    if (param_2 < 8) {
      bVar4 = ((int)CONCAT71((int7)((ulonglong)uVar3 >> 8),1) << (param_2 & 0x1f) & 0x24U) != 0;
    }
    else {
      bVar4 = false;
    }
    *(bool *)((longlong)param_1 + 0x499) = bVar4;
    if ((*(ushort *)((longlong)param_1 + 0x34) & 1) == 0) {
LAB_0082bcea:
      if ((*(ushort *)((longlong)param_1 + 0x34) & 1) == 0) goto LAB_0082bcfa;
    }
    else {
      FUN_0064dd90(param_1,local_20);
      if (local_20[0] != 0) goto LAB_0082bcea;
LAB_0082bcfa:
      if (*(longlong *)(&DAT_01e177c0 + (ulonglong)param_2 * 8) != 0) {
        FUN_0041ddd0(&local_28,*(longlong *)(&DAT_01e177c0 + (ulonglong)param_2 * 8));
        FUN_0064de00(param_1,local_28);
      }
    }
    *(undefined4 *)(param_1 + 0x9e) = *(undefined4 *)(&DAT_01e17818 + (ulonglong)param_2 * 4);
    uVar3 = FUN_00826740(param_2);
    FUN_00827930(param_1[0xa4],uVar3);
    FUN_0082bf80(param_1,2);
    *(undefined1 *)((longlong)param_1 + 0x535) = 0;
  }
  *(byte *)((longlong)param_1 + 0x529) = param_2;
  (**(code **)(*param_1 + 0x180))(param_1);
code_r0x0082bd98:
  FUN_00414480(&local_28);
  FUN_00414480(local_20);
  return;
}

