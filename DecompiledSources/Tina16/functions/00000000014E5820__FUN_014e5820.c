/* Ghidra address: 014e5820 */
/* Ghidra symbol: FUN_014e5820 */


undefined8 FUN_014e5820(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x5d8) + 0xb0))
                    (*(longlong **)(param_1 + 0x5d8),local_res18[0]);
  if (iVar1 == -1) {
    FUN_00414ad0(param_2,&LAB_014e5924);
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x5d8) + 0x78))
                      (*(longlong **)(param_1 + 0x5d8),local_res18[0]);
    (**(code **)(**(longlong **)(param_1 + 0x5d8) + 0x48))(*(longlong **)(param_1 + 0x5d8),uVar2,1);
  }
  else {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x5d8) + 0x30))
                      (*(longlong **)(param_1 + 0x5d8),iVar1);
    FUN_0043f750(param_2,iVar3 + 1);
    (**(code **)(**(longlong **)(param_1 + 0x5d8) + 0x48))
              (*(longlong **)(param_1 + 0x5d8),iVar1,(longlong)(iVar3 + 1));
  }
  FUN_00414480(local_res18);
  return param_2;
}

