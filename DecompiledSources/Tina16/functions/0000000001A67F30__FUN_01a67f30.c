/* Ghidra address: 01a67f30 */
/* Ghidra symbol: FUN_01a67f30 */


void FUN_01a67f30(longlong param_1,undefined4 param_2,int param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_30[0] = 0;
  local_38 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x748) + 0x18))
            (*(longlong **)(param_1 + 0x748),local_30,param_2);
  plVar1 = (longlong *)FUN_01b21300(local_30[0],&LAB_01a68078,0);
  (**(code **)(*plVar1 + 0x18))(plVar1,&local_38,param_3 + 1);
  plVar2 = (longlong *)FUN_01b21480(local_38);
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_40,0);
  FUN_00414ad0(param_4,local_40);
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_48,1);
  FUN_00414ad0(param_5,local_48);
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_50,2);
  FUN_00414ad0(param_6,local_50);
  FUN_00410f20(plVar1);
  FUN_00414560(&local_50,5);
  return;
}

