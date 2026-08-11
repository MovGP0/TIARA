/* Ghidra address: 01809b60 */
/* Ghidra symbol: FUN_01809b60 */


longlong * FUN_01809b60(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0xb0))
                    (*(longlong **)(param_1 + 0x18),param_3);
  if (iVar1 == -1) {
    FUN_00414ad0(param_2,param_3);
  }
  else {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x30))
                      (*(longlong **)(param_1 + 0x18),iVar1);
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x18))
              (*(longlong **)(param_1 + 0x30),local_20,uVar2);
    FUN_004168b0(param_2,local_20[0]);
  }
  if ((*param_2 != 0) && (*(short *)*param_2 == 0x21)) {
    FUN_00416e20(param_2,1,1);
  }
  FUN_00414520(local_20);
  return param_2;
}

