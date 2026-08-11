/* Ghidra address: 01809cc0 */
/* Ghidra symbol: FUN_01809cc0 */


longlong * FUN_01809cc0(longlong param_1,undefined8 param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_30[0] = 0;
  local_20[0] = 0;
  FUN_0043f750(local_30,param_3);
  FUN_00416ba0(local_20,param_2,local_30[0]);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0xb0))
                    (*(longlong **)(param_1 + 0x48),local_20[0]);
  if (iVar1 == -1) {
    uVar3 = FUN_007d5080(&PTR_FUN_006441f8,1,0);
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x80))
                      (*(longlong **)(param_1 + 0x48),local_20[0],uVar3);
  }
  plVar4 = (longlong *)
           (**(code **)(**(longlong **)(param_1 + 0x48) + 0x30))
                     (*(longlong **)(param_1 + 0x48),iVar1);
  iVar1 = (**(code **)(*plVar4 + 0x90))(plVar4);
  if (iVar1 == 0) {
    uVar2 = FUN_0040c770((double)param_4 * ((double)param_3 / 96.0));
    FUN_007d55b0(plVar4,uVar2);
    uVar2 = FUN_0040c770((double)param_5 * ((double)param_3 / 96.0));
    FUN_007d5610(plVar4,uVar2);
  }
  FUN_00414480(local_30);
  FUN_00414480(local_20);
  return plVar4;
}

