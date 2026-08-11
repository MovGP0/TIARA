/* Ghidra address: 00cce220 */
/* Ghidra symbol: FUN_00cce220 */


longlong * FUN_00cce220(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  longlong *local_20;
  
  local_50 = auStack_78;
  local_20 = (longlong *)FUN_00882aa0(&PTR_FUN_00cc8028,1,0);
  (**(code **)(*local_20 + 0x210))(local_20,1);
  (**(code **)(*local_20 + 0x138))(local_20);
  cVar2 = FUN_00c8f7a0(local_20[0x2b],*(undefined8 *)(param_2 + 0x20));
  plVar1 = local_20;
  if (cVar2 == '\0') {
    local_40 = local_20;
    local_20 = (longlong *)0x0;
    FUN_00410f20(plVar1);
  }
  else {
    local_30 = local_20 + 0x39;
    local_38 = *local_30;
    *local_30 = 0;
    FUN_00410f20(local_38);
    *(undefined1 *)((longlong)local_20 + 0x1b1) = 1;
    local_20[0x39] = *(longlong *)(param_1 + 0xf8);
    lVar3 = FUN_00cd0ec0(&DAT_00cc7968,1,param_1);
    local_20[0x3a] = lVar3;
    local_20[0x38] = *(longlong *)(param_1 + 0x100);
  }
  return local_20;
}

