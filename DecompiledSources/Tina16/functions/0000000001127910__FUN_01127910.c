/* Ghidra address: 01127910 */
/* Ghidra symbol: FUN_01127910 */


void FUN_01127910(longlong param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_48 = 0;
  local_38 = 0;
  local_40 = 0;
  local_30[0] = 0;
  local_20[0] = 0;
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0xde8) + 0xa8))(*(longlong **)(param_1 + 0xde8));
  if (cVar1 != '\0') {
    puVar2 = (undefined8 *)FUN_01c8a3c0(*(undefined8 *)PTR_DAT_02004e40,0);
    FUN_00414b50(local_20,*puVar2);
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x888) + 0x260))(*(longlong **)(param_1 + 0x888))
    ;
    if (cVar1 == '\0') {
      FUN_00724270(*(undefined8 *)(param_1 + 0xde8),&local_40);
      FUN_00441d00(&local_38,local_20[0],local_40);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x838),local_38);
    }
    else {
      FUN_00724270(*(undefined8 *)(param_1 + 0xde8),local_30);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x838),local_30[0]);
    }
    FUN_00724270(*(undefined8 *)(param_1 + 0xde8),&local_48);
    FUN_011143a0(*(undefined8 *)(param_1 + 0x7d8),local_48);
    FUN_01112a40(*(undefined8 *)(param_1 + 0x7d8));
    (**(code **)(**(longlong **)(param_1 + 0x870) + 0x268))(*(longlong **)(param_1 + 0x870),0);
    (**(code **)(**(longlong **)(param_1 + 0x860) + 0x268))(*(longlong **)(param_1 + 0x860),0);
    (**(code **)(**(longlong **)(param_1 + 0x848) + 0x268))(*(longlong **)(param_1 + 0x848),1);
  }
  FUN_00414560(&local_48,2);
  FUN_00414480(&local_38);
  FUN_00414480(local_30);
  FUN_00414480(local_20);
  return;
}

