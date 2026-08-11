/* Ghidra address: 0140a3f0 */
/* Ghidra symbol: FUN_0140a3f0 */


void FUN_0140a3f0(longlong param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 *local_20;
  
  local_20 = auStack_58;
  local_30 = 0;
  local_38 = 0;
  local_28 = 0;
  puVar1 = auStack_58;
  if (*(longlong *)(param_1 + 0x740) != 0) {
    FUN_00724420(*(undefined8 *)(param_1 + 0x6e8),*(undefined8 *)(param_1 + 0x740));
    puVar1 = local_20;
  }
  local_20 = puVar1;
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0xa8))(*(longlong **)(param_1 + 0x6e8));
  if (cVar2 != '\0') {
    FUN_00724270(*(undefined8 *)(param_1 + 0x6e8),&local_28);
    FUN_013a67f0(local_28,param_1 + 0x718,0x10);
    FUN_00b0b020(*(undefined8 *)(param_1 + 0x6d0),0);
    FUN_01409ca0(param_1);
    FUN_00724270(*(undefined8 *)(param_1 + 0x6e8),&local_38);
    FUN_00441640(&local_30,local_38);
    FUN_00414ad0(param_1 + 0x740,local_30);
  }
  FUN_00414480(&local_38);
  FUN_00414480(&local_30);
  FUN_00414480(&local_28);
  return;
}

