/* Ghidra address: 0183a650 */
/* Ghidra symbol: FUN_0183a650 */


void FUN_0183a650(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 local_30 [2];
  
  local_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  local_30[0] = 0;
  uVar1 = FUN_0181e3c0(param_2,0);
  FUN_0181e5f0(uVar1,local_30,L"text");
  uVar1 = FUN_0181e3c0(param_2,0);
  FUN_01837010(param_1,uVar1);
  FUN_01837080(param_1,param_3,local_30[0]);
  uVar1 = FUN_0181e3c0(param_2,1);
  plVar2 = (longlong *)FUN_0183a030(param_1,uVar1,param_3);
  plVar3 = (longlong *)FUN_01847460(&DAT_01843700,1,local_30[0],(char)plVar2[9],plVar2[10]);
  (**(code **)(*plVar2 + 0x10))(plVar2,&local_50);
  (**(code **)(*plVar3 + 8))(plVar3,&local_50);
  *(undefined1 *)((longlong)plVar3 + 0x19) = 1;
  FUN_00410f20(plVar2);
  FUN_0184caa0(param_3,local_30[0],plVar3);
  FUN_00460ba0(&local_50);
  FUN_00414480(local_30);
  return;
}

