/* Ghidra address: 00de6540 */
/* Ghidra symbol: FUN_00de6540 */


void FUN_00de6540(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined1 local_1c [12];
  
  local_38 = 0;
  local_30[0] = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x70) + 0x60);
  (**(code **)(*plVar1 + 0x50))(plVar1,*(longlong *)(param_1 + 0x70) + 0x6f,local_1c);
  FUN_004c1d80(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x60),local_30);
  FUN_00414b50(*(longlong *)(param_1 + 0x70) + 0x58,local_30[0]);
  FUN_004c1d80(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x60),&local_38);
  FUN_00414b50(*(longlong *)(param_1 + 0x70) + 0x50,local_38);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x70) + 0x80);
  (**(code **)(*plVar1 + 8))
            (plVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x60),
             *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x50),
             *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x58),
             *(undefined1 *)(*(longlong *)(param_1 + 0x70) + 0x6f),param_2,param_3);
  if (*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x50) == 0) {
    FUN_00414b50(*(longlong *)(param_1 + 0x70) + 0x50,
                 *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x58));
  }
  FUN_00414560(&local_38,2);
  return;
}

