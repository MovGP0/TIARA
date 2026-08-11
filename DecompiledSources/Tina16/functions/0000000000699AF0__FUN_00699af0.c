/* Ghidra address: 00699af0 */
/* Ghidra symbol: FUN_00699af0 */


void FUN_00699af0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [32];
  undefined4 *local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  undefined1 local_48 [12];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c [16];
  undefined4 local_1c;
  
  local_50 = auStack_88;
  local_58 = 0;
  plVar2 = (longlong *)FUN_00777cd0();
  cVar1 = (**(code **)(*plVar2 + 0x90))(plVar2);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x28))(param_1,param_2);
    FUN_006996c0(param_1,&local_3c,param_2);
    FUN_00699800(param_1,local_2c,param_2);
    cVar1 = (**(code **)(*(longlong *)param_1[2] + 0xf0))((longlong *)param_1[2]);
    if (cVar1 == '\0') {
      plVar2 = (longlong *)FUN_00777cd0();
      (**(code **)(*plVar2 + 200))(plVar2,local_48,0x25);
    }
    else {
      plVar2 = (longlong *)FUN_00777cd0();
      (**(code **)(*plVar2 + 200))(plVar2,local_48,0x24);
    }
    uVar3 = FUN_005ffa40(param_2);
    local_1c = thunk_FUN_03b57162(uVar3);
    uVar3 = FUN_005ffa40(param_2);
    local_68 = (undefined4 *)CONCAT44(local_68._4_4_,local_30);
    thunk_FUN_041a27b3(uVar3,local_3c,local_38,local_34);
    uVar3 = FUN_00777cd0();
    uVar4 = FUN_005ffa40(param_2);
    local_68 = (undefined4 *)0x0;
    local_60 = 0;
    FUN_00778dc0(uVar3,uVar4,local_48,local_2c);
    uVar3 = FUN_005ffa40(param_2);
    thunk_FUN_0402759f(uVar3,local_1c);
    FUN_00785f90(param_1,&local_58);
    local_60 = FUN_006520b0(param_1[2],5);
    local_68 = &local_3c;
    FUN_00785c70(param_1,param_2,local_48,local_58);
  }
  FUN_00414480(&local_58);
  return;
}

