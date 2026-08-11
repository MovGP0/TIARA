/* Ghidra address: 00c83600 */
/* Ghidra symbol: FUN_00c83600 */


undefined8 FUN_00c83600(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_28;
  longlong *local_20;
  
  local_20 = (longlong *)0x0;
  local_28 = 0;
  FUN_0041b800(param_2);
  iVar1 = FUN_004170c0(&LAB_00c83744,*param_3,1);
  if (iVar1 < 1) {
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x100))(*(longlong **)(param_1 + 0x38),param_2);
  }
  else {
    FUN_00416dc0(&local_28,*param_3,1,iVar1 + -1);
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0xb0))
                      (*(longlong **)(param_1 + 0x30),local_28);
    if (-1 < iVar2) {
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x30))
                        (*(longlong **)(param_1 + 0x30),iVar2);
      FUN_0041b840(&local_20,uVar3);
      (**(code **)(*local_20 + 0x100))(local_20,param_2);
      FUN_00416e20(param_3,1,iVar1);
    }
  }
  FUN_00414480(&local_28);
  FUN_0041b800(&local_20);
  return param_2;
}

