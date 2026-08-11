/* Ghidra address: 0070bd20 */
/* Ghidra symbol: FUN_0070bd20 */


void FUN_0070bd20(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  undefined1 local_54 [12];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  
  plVar3 = (longlong *)FUN_00777cd0();
  cVar1 = (**(code **)(*plVar3 + 0x90))(plVar3);
  if (cVar1 != '\0') {
    FUN_0070bbf0(param_1,&local_48);
    FUN_00423b10(&local_48,0xffffffff,0xffffffff);
    cVar1 = FUN_0070bf50(param_1);
    if (cVar1 == '\0') {
      iVar2 = FUN_004230a0(&local_48);
    }
    else {
      iVar2 = FUN_004230c0(&local_48);
    }
    fVar6 = (float)FUN_0070bb80(param_1);
    iVar2 = FUN_0040c770((double)iVar2 * (double)fVar6);
    local_38 = local_48;
    local_30 = uStack_40;
    cVar1 = FUN_0070bf50(param_1);
    if (cVar1 == '\0') {
      local_30 = CONCAT44(local_30._4_4_,(int)local_38 + iVar2);
      plVar3 = (longlong *)FUN_00777cd0();
      (**(code **)(*plVar3 + 0x188))(plVar3,local_54,4);
    }
    else {
      local_38 = CONCAT44(local_30._4_4_ - iVar2,(int)local_38);
      plVar3 = (longlong *)FUN_00777cd0();
      (**(code **)(*plVar3 + 0x188))(plVar3,local_54,5);
    }
    uVar4 = FUN_00777cd0();
    uVar5 = FUN_005ffa40(param_2);
    FUN_00778dc0(uVar4,uVar5,local_54,&local_38,0,0);
  }
  return;
}

