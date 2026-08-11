/* Ghidra address: 016496b0 */
/* Ghidra symbol: FUN_016496b0 */


void FUN_016496b0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 local_res10 [3];
  ulonglong in_stack_ffffffffffffffb8;
  undefined4 local_20;
  undefined4 local_1c [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  if (*(longlong *)(param_1 + 0xb8) == 0) {
    uVar4 = FUN_004b6930(&PTR_FUN_00478280,1);
    *(undefined8 *)(param_1 + 0xb8) = uVar4;
  }
  iVar2 = FUN_01648ef0(*(undefined8 *)(param_1 + 0x13980),local_res10[0],param_1);
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0xb0))
                    (*(longlong **)(param_1 + 0xb8),local_res10[0]);
  if (iVar3 == -1) {
    if (iVar2 == -1) {
      cVar1 = FUN_01615f20(local_res10[0]);
      if (cVar1 != '\0') {
        FUN_01616360(*(undefined8 *)(param_1 + 0x13980),param_1,local_res10[0],local_1c,&local_20);
        uVar4 = FUN_01619f50(&DAT_01618348,1,1,local_1c[0],local_20);
        (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x80))
                  (*(longlong **)(param_1 + 0xb8),local_res10[0],uVar4);
      }
    }
    else {
      uVar4 = FUN_01619f50(&DAT_01618348,1,0,iVar2,in_stack_ffffffffffffffb8 & 0xffffffff00000000);
      (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x80))
                (*(longlong **)(param_1 + 0xb8),local_res10[0],uVar4);
    }
  }
  FUN_00414480(local_res10);
  return;
}

