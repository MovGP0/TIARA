/* Ghidra address: 00f05050 */
/* Ghidra symbol: FUN_00f05050 */


longlong * FUN_00f05050(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_28 = 0;
  local_18 = 0;
  local_20 = 0;
  local_10 = 0;
  FUN_005fccd0(param_2,&local_10);
  FUN_00416ba0(param_1,L"Name: ",local_10);
  uVar5 = FUN_00b89270();
  FUN_00b8e520(uVar5,&local_18,0x855);
  uVar3 = FUN_005fce00(param_2);
  FUN_0043f750(&local_20,uVar3);
  uVar5 = local_20;
  FUN_00416cd0(param_1,5,*param_1,&DAT_00f052a4,local_18,&DAT_00f052a4,local_20);
  cVar2 = FUN_005fce60(param_2);
  if (cVar2 == '\0') {
    FUN_00416ad0(param_1,L" Style: Normal");
  }
  else {
    uVar6 = FUN_00b89270();
    FUN_00b8e520(uVar6,&local_28,0x856);
    FUN_00416cd0(param_1,4,*param_1,&DAT_00f052a4,local_28,&DAT_00f052a4,uVar5);
    uVar7 = FUN_005fce60(param_2);
    if ((uVar7 & 1) != 0) {
      FUN_00416ad0(param_1,L"Bold,");
    }
    uVar7 = FUN_005fce60(param_2);
    if ((uVar7 & 2) != 0) {
      FUN_00416ad0(param_1,L"Italic,");
    }
    uVar7 = FUN_005fce60(param_2);
    if ((uVar7 & 4) != 0) {
      FUN_00416ad0(param_1,L"UnderLine,");
    }
    uVar7 = FUN_005fce60(param_2);
    if ((uVar7 & 8) != 0) {
      FUN_00416ad0(param_1,L"StrikeOut,");
    }
    iVar4 = 0;
    lVar1 = *param_1;
    if (lVar1 != 0) {
      iVar4 = *(int *)(lVar1 + -4);
    }
    if (*(short *)(*param_1 + -2 + (longlong)iVar4 * 2) == 0x2c) {
      uVar3 = 0;
      if (lVar1 != 0) {
        uVar3 = *(undefined4 *)(lVar1 + -4);
      }
      FUN_00416e20(param_1,uVar3,1);
    }
  }
  FUN_00414560(&local_28,3);
  FUN_00414480(&local_10);
  return param_1;
}

