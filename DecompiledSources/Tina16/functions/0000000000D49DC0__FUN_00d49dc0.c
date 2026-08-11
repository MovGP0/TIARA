/* Ghidra address: 00d49dc0 */
/* Ghidra symbol: FUN_00d49dc0 */


void FUN_00d49dc0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 local_34 [12];
  
  plVar3 = (longlong *)FUN_00781840();
  cVar2 = (**(code **)(*plVar3 + 0x90))(plVar3);
  if (cVar2 != '\0') {
    local_34[0] = 0xf;
    uVar4 = FUN_00781840();
    cVar2 = FUN_007794c0(uVar4,local_34);
    if (cVar2 != '\0') {
      uVar4 = FUN_00781840();
      lVar1 = param_1[1];
      uVar5 = FUN_005ffa40(param_2);
      FUN_00778e90(uVar4,lVar1,uVar5,local_34,0,0);
    }
  }
  (**(code **)(*param_1 + 0x80))(param_1,param_2);
  (**(code **)(*param_1 + 0x78))(param_1,param_2);
  return;
}

