/* Ghidra address: 01bc9dd0 */
/* Ghidra symbol: FUN_01bc9dd0 */


void FUN_01bc9dd0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined1 local_40 [16];
  undefined1 *local_30;
  longlong *local_20;
  
  local_30 = auStack_78;
  *(undefined8 *)(param_2 + 0x18) = 1;
  if (*(char *)(param_1 + 0x490) != '\0') {
    local_20 = (longlong *)FUN_005fe0d0(&PTR_FUN_005f54e0,1);
    FUN_005ffb10(local_20,*(undefined8 *)(param_2 + 8));
    plVar3 = (longlong *)FUN_00781840();
    cVar1 = (**(code **)(*plVar3 + 0x98))(plVar3);
    if (cVar1 == '\0') {
      FUN_005fdab0(local_20[0x10],0xff00000f);
    }
    else {
      uVar4 = FUN_00781840();
      uVar2 = FUN_007793c0(uVar4,0xff00000f);
      FUN_005fdab0(local_20[0x10],uVar2);
    }
    local_58 = *(undefined4 *)(param_1 + 0x9c);
    FUN_00498350(local_40,0,0,*(undefined4 *)(param_1 + 0x98));
    (**(code **)(*local_20 + 0xa8))(local_20,local_40);
    FUN_00410f20(local_20);
  }
  return;
}

