/* Ghidra address: 006ab000 */
/* Ghidra symbol: FUN_006ab000 */


void FUN_006ab000(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_30 = 0;
  local_48 = 0;
  local_20[0] = 0;
  lVar1 = *(longlong *)(param_1 + 0x178);
  if (lVar1 != 0) {
    FUN_007267a0(*(undefined8 *)(param_1 + 0x170),local_20);
    cVar2 = FUN_006aaba0(lVar1,local_20[0],*(undefined2 *)(*(longlong *)(param_1 + 0x170) + 0xd0),
                         *(undefined1 *)(param_1 + 0x180));
    if (cVar2 == '\0') {
      FUN_0041ddd0(&local_30,PTR_PTR_02003bb0);
      FUN_007267a0(*(undefined8 *)(param_1 + 0x170),&local_48);
      local_40 = local_48;
      local_38 = 0x11;
      FUN_00442f70(&local_28,local_30,&local_40,0);
      FUN_0072d730(local_28,0xffffffff,0xffffffff);
    }
  }
  FUN_00414480(&local_48);
  FUN_00414560(&local_30,3);
  return;
}

