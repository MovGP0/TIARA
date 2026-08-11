/* Ghidra address: 012f8050 */
/* Ghidra symbol: FUN_012f8050 */


void FUN_012f8050(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_28 = 0;
  local_20[0] = 0;
  local_10 = 0;
  uVar2 = FUN_007fc180(&PTR_FUN_012e2948,1,param_1);
  *(undefined8 *)(param_1 + 0xae0) = uVar2;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x7a0),local_20);
  lVar3 = FUN_006e2530(*(undefined8 *)(param_1 + 0x700));
  FUN_00416cd0(&local_10,4,local_20[0],&DAT_012f81dc,*(undefined8 *)(lVar3 + 0x10),L" Figure.jpg");
  cVar1 = FUN_00440a20(local_10,1);
  if (cVar1 == '\0') {
    FUN_0072d730(L"Figure does not exist.",0xffffffff,0xffffffff);
  }
  else {
    lVar3 = FUN_006e2530(*(undefined8 *)(param_1 + 0x700));
    local_38 = *(undefined8 *)(lVar3 + 0x10);
    local_30 = 0x11;
    FUN_00442f70(&local_28,L"Reference figure - %s",&local_38,0);
    FUN_0064de00(*(undefined8 *)(param_1 + 0xae0),local_28);
    FUN_012e2da0(*(undefined8 *)(param_1 + 0xae0),local_10);
    FUN_008059a0(*(undefined8 *)(param_1 + 0xae0));
  }
  FUN_00414480(&local_28);
  FUN_00414480(local_20);
  FUN_00414480(&local_10);
  return;
}

