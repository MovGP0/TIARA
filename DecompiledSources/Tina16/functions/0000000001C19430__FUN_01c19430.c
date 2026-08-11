/* Ghidra address: 01c19430 */
/* Ghidra symbol: FUN_01c19430 */


void FUN_01c19430(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_60 [16];
  undefined1 *local_50;
  undefined8 local_3c;
  undefined8 local_34;
  undefined4 local_2c;
  
  local_50 = auStack_98;
  local_3c = *param_2;
  local_34 = param_2[1];
  cVar1 = (**(code **)(*param_1 + 0xf0))(param_1);
  if (cVar1 != '\0') {
    plVar3 = (longlong *)FUN_01c07120(param_1);
    cVar1 = (**(code **)(*plVar3 + 0x2c8))(plVar3);
    if (cVar1 == '\0') {
      if (((*(char *)((longlong)param_1 + 0x363) == '\0') &&
          (cVar1 = (**(code **)(*param_1 + 0x228))(param_1), cVar1 == '\0')) &&
         ((char)param_1[0x6d] == '\0')) {
        return;
      }
      if (param_1[100] != 0) {
        uVar4 = FUN_00781840();
        cVar1 = FUN_00779360(uVar4);
        if (cVar1 == '\0') {
          iVar2 = (**(code **)(*param_1 + 0x280))(param_1);
          local_3c = CONCAT44(local_3c._4_4_,(int)local_34 - iVar2);
          local_34 = CONCAT44(local_34._4_4_,((int)local_34 - iVar2) + 3);
        }
        else {
          iVar2 = (**(code **)(*param_1 + 0x280))(param_1);
          local_3c = CONCAT44(local_3c._4_4_,((int)local_34 - iVar2) + -2);
        }
        uVar4 = FUN_005ffa40(param_1[0x62]);
        local_2c = thunk_FUN_03b57162(uVar4);
        uVar4 = FUN_00781840();
        uVar5 = FUN_005ffa40(param_1[0x62]);
        plVar3 = (longlong *)FUN_00781840();
        (**(code **)(*plVar3 + 0x200))(plVar3,local_60,0x23);
        local_78 = 0;
        local_70 = 0;
        FUN_00778dc0(uVar4,uVar5,local_60,&local_3c);
        uVar4 = FUN_005ffa40(param_1[0x62]);
        thunk_FUN_0402759f(uVar4,local_2c);
      }
    }
  }
  return;
}

