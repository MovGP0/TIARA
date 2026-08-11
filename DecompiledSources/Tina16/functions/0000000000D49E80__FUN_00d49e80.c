/* Ghidra address: 00d49e80 */
/* Ghidra symbol: FUN_00d49e80 */


void FUN_00d49e80(longlong param_1,undefined8 param_2)

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
  
  FUN_00d49c30(param_1,&local_48);
  if (*(char *)(param_1 + 0x65) == '\0') {
    thunk_FUN_04176532(&local_48,0xfffffffe,0xfffffffe);
    cVar1 = FUN_00d49cf0(param_1);
    if (cVar1 == '\0') {
      iVar2 = FUN_004230a0(&local_48);
    }
    else {
      iVar2 = FUN_004230c0(&local_48);
    }
    fVar6 = (float)FUN_00d49d30(param_1);
    iVar2 = FUN_0040c770((double)iVar2 * (double)fVar6);
    local_38 = local_48;
    local_30 = uStack_40;
    cVar1 = FUN_00d49cf0(param_1);
    if (cVar1 == '\0') {
      local_30 = CONCAT44(local_30._4_4_,(int)local_38 + iVar2);
      plVar3 = (longlong *)FUN_00781840();
      (**(code **)(*plVar3 + 0x188))(plVar3,local_54,4);
    }
    else {
      local_38 = CONCAT44(local_30._4_4_ - iVar2,(int)local_38);
      plVar3 = (longlong *)FUN_00781840();
      (**(code **)(*plVar3 + 0x188))(plVar3,local_54,5);
    }
    uVar4 = FUN_00781840();
    uVar5 = FUN_005ffa40(param_2);
    FUN_00778dc0(uVar4,uVar5,local_54,&local_38,0,0);
  }
  else {
    thunk_FUN_04176532(&local_48,0xfffffffe,0xfffffffe);
    cVar1 = FUN_00d49cf0(param_1);
    if (cVar1 == '\0') {
      iVar2 = FUN_004230a0(&local_48);
    }
    else {
      iVar2 = FUN_004230c0(&local_48);
    }
    iVar2 = FUN_0040c770((double)iVar2 * 0.05);
    local_38 = local_48;
    local_30 = uStack_40;
    cVar1 = FUN_00d49cf0(param_1);
    if (cVar1 == '\0') {
      local_30 = CONCAT44(local_30._4_4_,(int)local_38 + iVar2);
      plVar3 = (longlong *)FUN_00781840();
      (**(code **)(*plVar3 + 0x188))(plVar3,local_54,4);
    }
    else {
      local_38 = CONCAT44(local_30._4_4_ - iVar2,(int)local_38);
      plVar3 = (longlong *)FUN_00781840();
      (**(code **)(*plVar3 + 0x188))(plVar3,local_54,5);
    }
    iVar2 = FUN_004230a0(&local_38);
    FUN_00423470(&local_38,*(int *)(param_1 + 0x60) * iVar2,local_38._4_4_);
    uVar4 = FUN_00781840();
    uVar5 = FUN_005ffa40(param_2);
    FUN_00778dc0(uVar4,uVar5,local_54,&local_38,0,0);
  }
  return;
}

