/* Ghidra address: 00afca30 */
/* Ghidra symbol: FUN_00afca30 */


void FUN_00afca30(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 local_38;
  undefined8 local_30 [2];
  longlong *local_20;
  
  local_30[0] = 0;
  local_38 = 0;
  cVar2 = FUN_00af2f30(param_1);
  if (cVar2 == '\0') {
    FUN_00af6dc0(param_1);
    FUN_00aa6130(param_1[0x116],(char)param_1[0x59]);
    (**(code **)(*(longlong *)param_1[0x116] + 0x10))((longlong *)param_1[0x116]);
    if ((*(ushort *)(param_1 + 0x114) & 0x10) != 0) {
      (**(code **)(**(longlong **)(param_1[0x116] + 0x2a8) + 0x90))
                (*(longlong **)(param_1[0x116] + 0x2a8));
    }
    local_20 = param_1 + 0x119;
    lVar1 = *local_20;
    *local_20 = 0;
    FUN_00410f20(lVar1);
    FUN_00414480(param_1 + 0x117);
    *(undefined1 *)(param_1 + 0x118) = 0;
    FUN_009ec420(local_30,param_1[0x96]);
    FUN_009ec420(&local_38,param_1[0x97]);
    FUN_00aa71d0(param_1[0x116],local_30[0],local_38,(int)param_1[0x98],(int)param_1[0x95],
                 *(undefined4 *)((longlong)param_1 + 0x494),(int)param_1[0x93],
                 *(undefined4 *)((longlong)param_1 + 0x49c),(int)param_1[0x92],
                 (*(ushort *)((longlong)param_1 + 0x79a) & 1) != 0,
                 (*(ushort *)((longlong)param_1 + 0x79a) & 2) == 0,
                 *(undefined4 *)((longlong)param_1 + 0x4a4),(char)param_1[0x94],(int)param_1[0x9b],
                 *(undefined4 *)((longlong)param_1 + 0x4d4));
    FUN_00414480(param_1 + 0xf0);
    FUN_00414480(param_1 + 0xf1);
    FUN_00414480(param_1 + 0xf2);
    FUN_00414480(param_1 + 0x11c);
    FUN_0064dbe0(param_1[0xeb],0);
    FUN_0064dbe0(param_1[0xea],0);
    FUN_00afe5a0(param_1,0);
    *(undefined4 *)(param_1 + 299) = 0xffffffff;
    if (param_1[0xe3] != 0) {
      (*(code *)param_1[0xe3])(param_1[0xe4],param_1,0,0,1);
    }
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  FUN_00414560(&local_38,2);
  return;
}

