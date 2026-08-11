/* Ghidra address: 010f0640 */
/* Ghidra symbol: FUN_010f0640 */


void FUN_010f0640(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 local_38 [16];
  
  cVar1 = (**(code **)(*param_1 + 0x58))(param_1);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_005fd7d0(&PTR_FUN_005f35d8,1);
    plVar3 = (longlong *)FUN_005fd250(&PTR_FUN_005f3290,1);
    (**(code **)(*plVar2 + 0x10))(plVar2,param_2[0x10]);
    (**(code **)(*plVar3 + 0x10))(plVar3,param_2[0xf]);
    if (*(int *)((longlong)param_1 + 0x9c) == 0x3000000) {
      FUN_005fdcb0(param_2[0x10],1);
    }
    else {
      FUN_005fdab0(param_2[0x10],*(int *)((longlong)param_1 + 0x9c));
      FUN_005fdcb0(param_2[0x10],0);
    }
    if ((int)param_1[0x13] == 0x3000000) {
      FUN_005fd4e0(param_2[0xf],0xffffff);
      FUN_005fd640(param_2[0xf],4);
      FUN_005fd6d0(param_2[0xf],0);
    }
    else {
      FUN_005fd4e0(param_2[0xf],(int)param_1[0x13]);
      FUN_005fd640(param_2[0xf],4);
      FUN_005fd6d0(param_2[0xf],(longlong)(char)param_1[0x14]);
    }
    if ((*(int *)((longlong)param_1 + 0x9c) != 0x3000000) || ((int)param_1[0x13] != 0x3000000)) {
      (**(code **)(*param_2 + 0xf8))
                (param_2,(int)param_1[0x10],*(undefined4 *)((longlong)param_1 + 0x84),
                 (int)param_1[0x11],*(undefined4 *)((longlong)param_1 + 0x8c));
    }
    FUN_00498350(local_38,(int)param_1[0x10],*(undefined4 *)((longlong)param_1 + 0x84),
                 (int)param_1[0x11],*(undefined4 *)((longlong)param_1 + 0x8c));
    (**(code **)(*param_2 + 0x110))(param_2,local_38,param_1[0x12]);
    if ((char)param_1[2] != '\0') {
      FUN_010ef870(param_1,param_1 + 0x10);
      FUN_010ef3f0(param_1,param_2);
    }
    (**(code **)(*(longlong *)param_2[0x10] + 0x10))((longlong *)param_2[0x10],plVar2);
    FUN_00410f20(plVar2);
    (**(code **)(*(longlong *)param_2[0xf] + 0x10))((longlong *)param_2[0xf],plVar3);
    FUN_00410f20(plVar3);
  }
  return;
}

