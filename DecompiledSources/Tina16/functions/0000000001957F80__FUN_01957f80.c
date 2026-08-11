/* Ghidra address: 01957f80 */
/* Ghidra symbol: FUN_01957f80 */


void FUN_01957f80(longlong param_1,longlong *param_2,int param_3,int param_4,int param_5,int param_6
                 )

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 local_38 [16];
  
  if (*(int *)(param_1 + 8) != 0x1fffffff) {
    uVar2 = FUN_005fdaa0(param_2[0x10]);
    uVar3 = FUN_005fdca0(param_2[0x10]);
    FUN_005fdab0(param_2[0x10],*(undefined4 *)(param_1 + 8));
    FUN_005fdcb0(param_2[0x10],0);
    FUN_00498350(local_38,param_3,param_4,param_5,param_6);
    (**(code **)(*param_2 + 0xa8))(param_2,local_38);
    uVar4 = FUN_01957eb0(param_1);
    FUN_005fdab0(param_2[0x10],uVar4);
    FUN_005fdcb0(param_2[0x10],0);
    cVar1 = *(char *)(param_1 + 0x19);
    if (cVar1 == '\0') {
      FUN_00498350(local_38,param_3,param_4,param_5 - (param_5 - param_3) / 2,param_6);
      (**(code **)(*param_2 + 0xa8))(param_2,local_38);
    }
    else if (cVar1 == '\x01') {
      FUN_00498350(local_38,param_3,param_4,param_5,param_6 - (param_6 - param_4) / 2);
      (**(code **)(*param_2 + 0xa8))(param_2,local_38);
    }
    else if (cVar1 == '\x02') {
      FUN_00498350(local_38,param_3 + (param_5 - param_3) / 2,param_4,param_5,param_6);
      (**(code **)(*param_2 + 0xa8))(param_2,local_38);
    }
    else if (cVar1 == '\x03') {
      FUN_00498350(local_38,param_3,param_4 + (param_6 - param_4) / 2,param_5,param_6);
      (**(code **)(*param_2 + 0xa8))(param_2,local_38);
    }
    FUN_005fdab0(param_2[0x10],uVar2);
    FUN_005fdcb0(param_2[0x10],uVar3);
    if (*(char *)(param_1 + 0x18) != '\0') {
      uVar2 = FUN_019586a0(param_1);
      uVar5 = thunk_FUN_04116d68(3,uVar2);
      uVar6 = FUN_005ffa40(param_2);
      uVar6 = thunk_FUN_041a19a1(uVar6,uVar5);
      FUN_0180c8a0(param_2,1);
      uVar2 = FUN_005fd660(param_2[0xf]);
      FUN_005fd670(param_2[0xf],5);
      (**(code **)(*param_2 + 0xf8))(param_2,param_3,param_4,param_5 + 1,param_6 + 1);
      uVar7 = FUN_005ffa40(param_2);
      thunk_FUN_041a19a1(uVar7,uVar6);
      thunk_FUN_0416f828(uVar5);
      FUN_005fd670(param_2[0xf],uVar2);
    }
  }
  return;
}

