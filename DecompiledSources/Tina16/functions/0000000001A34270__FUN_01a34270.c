/* Ghidra address: 01a34270 */
/* Ghidra symbol: FUN_01a34270 */


void FUN_01a34270(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 local_30 [2];
  undefined1 local_1c [4];
  
  local_30[0] = 0;
  FUN_00414610(param_5);
  cVar2 = FUN_01a340d0(param_1,param_2,param_3,local_1c);
  if (cVar2 == '\0') {
    FUN_01a34170(param_1,param_2,param_3,param_4);
  }
  else {
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    uVar1 = *(undefined4 *)(param_1 + 0x40);
    FUN_00416ba0(local_30,L"<split>",param_5);
    uVar3 = FUN_01a32700(&DAT_01a30bb0,1,local_30[0]);
    FUN_01a34170(param_1,param_2,uVar1,param_4);
    FUN_01a34170(param_1,uVar1,param_3,uVar3);
  }
  FUN_00414480(local_30);
  FUN_00414480(&param_5);
  return;
}

