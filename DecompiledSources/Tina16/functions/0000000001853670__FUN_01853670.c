/* Ghidra address: 01853670 */
/* Ghidra symbol: FUN_01853670 */


void FUN_01853670(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int wSrc;
  int hSrc;
  undefined8 uVar3;
  HDC hdcDest;
  undefined8 uVar4;
  HDC hdcSrc;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  
  uVar4 = *param_2;
  uVar1 = param_2[1];
  uVar3 = FUN_005ffa40(param_1);
  uVar2 = thunk_FUN_041e8c78(uVar3,4);
  hdcDest = (HDC)FUN_005ffa40(param_1);
  local_3c = (int)uVar4;
  local_38 = (int)((ulonglong)uVar4 >> 0x20);
  uVar4 = FUN_00609e10(param_3);
  hdcSrc = (HDC)FUN_005ffa40(uVar4);
  wSrc = (**(code **)(*param_3 + 0x60))(param_3);
  hSrc = (**(code **)(*param_3 + 0x48))(param_3);
  local_34 = (int)uVar1;
  local_30 = (int)((ulonglong)uVar1 >> 0x20);
  AlphaBlend(hdcDest,local_3c,local_38,local_34 - local_3c,local_30 - local_38,hdcSrc,0,0,wSrc,hSrc,
             DAT_01fadee4);
  uVar4 = FUN_005ffa40(param_1);
  thunk_FUN_041e8c78(uVar4,uVar2);
  return;
}

