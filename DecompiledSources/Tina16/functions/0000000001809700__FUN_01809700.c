/* Ghidra address: 01809700 */
/* Ghidra symbol: FUN_01809700 */


void FUN_01809700(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00414650(local_res18);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0xb0))
                    (*(longlong **)(param_1 + 0x18),param_2);
  if (iVar1 == -1) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x28))(*(longlong **)(param_1 + 0x30));
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x80))
              (*(longlong **)(param_1 + 0x18),param_2,(longlong)iVar1);
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x70))
              (*(longlong **)(param_1 + 0x30),local_res18[0]);
  }
  else {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x30))
                      (*(longlong **)(param_1 + 0x18),iVar1);
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x40))
              (*(longlong **)(param_1 + 0x30),uVar2,local_res18[0]);
  }
  FUN_00414520(local_res18);
  return;
}

