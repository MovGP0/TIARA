/* Ghidra address: 01991160 */
/* Ghidra symbol: FUN_01991160 */


void FUN_01991160(longlong param_1,longlong *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auStack_88 [40];
  undefined1 *local_60;
  int local_44;
  undefined1 local_40 [16];
  undefined1 local_30 [8];
  int local_28;
  int local_24;
  longlong *local_20;
  
  local_60 = auStack_88;
  FUN_01a98210(*(undefined8 *)(param_1 + 0x210),local_30);
  FUN_01a98060(*(undefined8 *)(param_1 + 0x210),local_40);
  (**(code **)(*param_2 + 0x88))(param_2,param_3);
  (**(code **)(*param_2 + 0x70))(param_2,param_4);
  uVar2 = FUN_00609e10(param_2);
  uVar2 = FUN_005ffa40(uVar2);
  local_20 = (longlong *)FUN_01a976c0(0,&PTR_FUN_01a96ef0,uVar2,local_30);
  (**(code **)(*local_20 + 0x10))(local_20,local_40);
  FUN_01a98210(local_20,local_30);
  FUN_00b95860(local_30,0xffffffce,0xffffffce);
  local_28 = local_28 + 100;
  local_24 = local_24 + 100;
  FUN_0199c750(param_1,local_30,local_20);
  iVar3 = *(int *)(param_1 + 0x10);
  local_44 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar2 = FUN_00b94e60(param_1,local_44);
      cVar1 = FUN_019910b0(auStack_88,uVar2);
      if (cVar1 != '\0') {
        FUN_00b94e60(param_1,local_44);
        break;
      }
      local_44 = local_44 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  uVar2 = (**(code **)*local_20)(local_20);
  FUN_00418590(uVar2,&DAT_01a96ff8);
  return;
}

