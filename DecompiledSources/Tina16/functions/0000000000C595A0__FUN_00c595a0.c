/* Ghidra address: 00c595a0 */
/* Ghidra symbol: FUN_00c595a0 */


void FUN_00c595a0(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [40];
  undefined1 local_40 [16];
  undefined1 *local_30;
  longlong *local_20;
  
  local_30 = auStack_68;
  cVar1 = FUN_00781870();
  if (cVar1 == '\0') {
    FUN_00658480(param_1,param_2);
  }
  else {
    local_20 = (longlong *)FUN_005fe0d0(&PTR_FUN_005f54e0,1);
    FUN_005ffb10(local_20,*(undefined8 *)(param_2 + 8));
    uVar3 = FUN_00781840();
    uVar2 = FUN_007793c0(uVar3,0xff00000f);
    FUN_005fdab0(local_20[0x10],uVar2);
    (**(code **)(*param_1 + 0xe0))(param_1,local_40);
    (**(code **)(*local_20 + 0xa8))(local_20,local_40);
    FUN_005ffb10(local_20,0);
    FUN_00410f20(local_20);
    *(undefined8 *)(param_2 + 0x18) = 1;
  }
  return;
}

