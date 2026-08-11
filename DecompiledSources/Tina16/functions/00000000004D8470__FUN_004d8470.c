/* Ghidra address: 004d8470 */
/* Ghidra symbol: FUN_004d8470 */


void FUN_004d8470(longlong param_1,undefined8 param_2,longlong *param_3,int param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_1068 [4088];
  undefined8 auStack_70 [5];
  longlong local_48 [5];
  longlong *local_20;
  
  local_48[3] = 0;
  local_48[2] = 0;
  lVar1 = (longlong)param_4 + 1;
  uVar4 = lVar1 * -0x10 & 0xfff;
  local_48[0] = param_1;
  local_48[1] = param_2;
  while (lVar1 * -0x10 < (longlong)uVar4) {
    auStack_1068[uVar4] = (char)(uVar4 - 0x1000);
    uVar4 = uVar4 - 0x1000;
  }
  plVar2 = local_48 + lVar1 * -2;
  plVar7 = plVar2;
  for (lVar6 = ((longlong)param_4 + 1) * 2; lVar5 = local_48[1], lVar6 != 0; lVar6 = lVar6 + -1) {
    *plVar7 = *param_3;
    param_3 = param_3 + 1;
    plVar7 = plVar7 + 1;
  }
  local_20 = plVar2;
  auStack_70[lVar1 * -2] = 0x4d8504;
  FUN_00442f70(local_48 + 2,lVar5,plVar2,param_4);
  lVar6 = local_48[2];
  uVar3 = *(undefined8 *)(local_48[0] + 0x10);
  auStack_70[lVar1 * -2] = 0x4d8519;
  FUN_00459ca0(uVar3,local_48 + 3,lVar6);
  lVar5 = local_48[3];
  lVar6 = local_48[0];
  auStack_70[lVar1 * -2] = 0x4d8526;
  FUN_004d8330(lVar6,lVar5);
  auStack_70[lVar1 * -2] = 0x4d8530;
  FUN_00414480(local_48 + 2);
  auStack_70[lVar1 * -2] = 0x4d8540;
  FUN_00419430(local_48 + 3,&DAT_00406578);
  return;
}

