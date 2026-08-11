/* Ghidra address: 014cc240 */
/* Ghidra symbol: FUN_014cc240 */


undefined8 FUN_014cc240(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x300) + 0xb0))
                    (*(longlong **)(param_1 + 0x300),local_res18[0]);
  if (iVar1 == -1) {
    FUN_00414ad0(param_2,&LAB_014cc344);
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x300) + 0x78))
                      (*(longlong **)(param_1 + 0x300),local_res18[0]);
    (**(code **)(**(longlong **)(param_1 + 0x300) + 0x48))(*(longlong **)(param_1 + 0x300),uVar2,1);
  }
  else {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x300) + 0x30))
                      (*(longlong **)(param_1 + 0x300),iVar1);
    FUN_0043f750(param_2,iVar3 + 1);
    (**(code **)(**(longlong **)(param_1 + 0x300) + 0x48))
              (*(longlong **)(param_1 + 0x300),iVar1,(longlong)(iVar3 + 1));
  }
  FUN_00414480(local_res18);
  return param_2;
}

