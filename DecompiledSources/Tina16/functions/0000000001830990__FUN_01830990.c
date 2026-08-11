/* Ghidra address: 01830990 */
/* Ghidra symbol: FUN_01830990 */


undefined8 FUN_01830990(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  local_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x88) + 0x10))(*(longlong **)(param_1 + 0x88),param_2);
  if (*(char *)(param_1 + 0xa2) == '\0') {
    FUN_00461840(&local_30,param_2);
    (**(code **)(**(longlong **)(param_1 + 0x90) + 0x10))(*(longlong **)(param_1 + 0x90),&local_48);
    FUN_0046f280(&local_30,&local_48);
    FUN_00461840(param_2,&local_30);
  }
  else {
    iVar1 = FUN_004644a0(param_2);
    if (iVar1 == 0) {
      (**(code **)(**(longlong **)(param_1 + 0x90) + 0x10))(*(longlong **)(param_1 + 0x90),param_2);
    }
  }
  FUN_00417840(&local_48,&DAT_004013d8,2);
  return param_2;
}

