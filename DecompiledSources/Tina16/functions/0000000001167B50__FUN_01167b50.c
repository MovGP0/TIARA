/* Ghidra address: 01167b50 */
/* Ghidra symbol: FUN_01167b50 */


longlong FUN_01167b50(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,byte *param_6)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  byte *pbVar4;
  undefined8 local_res10 [3];
  undefined1 local_148 [264];
  undefined1 local_40;
  byte local_3f [15];
  
  uVar3 = (ulonglong)*param_6;
  if (4 < uVar3) {
    uVar3 = 5;
  }
  local_40 = (undefined1)uVar3;
  pbVar4 = local_3f;
  for (; param_6 = param_6 + 1, uVar3 != 0; uVar3 = uVar3 - 1) {
    *pbVar4 = *param_6;
    pbVar4 = pbVar4 + 1;
  }
  local_res10[0] = param_2;
  lVar2 = FUN_00410920(param_1,local_res10);
  if (lVar2 != -1) {
    FUN_01167ab0(lVar2,0,param_3,param_4);
    *(undefined4 *)(lVar2 + 0x20) = 2;
    *(undefined4 *)(lVar2 + 0x24) = param_5;
    FUN_00415020(lVar2 + 0x28,&local_40,5);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_0040e840(local_148,*(undefined4 *)(lVar2 + 0x24));
      FUN_00415020(lVar2 + 0x28,local_148,5);
    }
    iVar1 = *(int *)(lVar2 + 0x24);
    *(undefined4 *)(&DAT_0203ac80 + (longlong)iVar1 * 4) = param_3;
    *(undefined4 *)(&DAT_0203ad24 + (longlong)iVar1 * 4) = param_4;
    param_1 = lVar2;
  }
  return param_1;
}

