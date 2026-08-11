/* Ghidra address: 00ccf760 */
/* Ghidra symbol: FUN_00ccf760 */


longlong FUN_00ccf760(longlong *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  longlong local_30;
  
  local_40 = auStack_68;
  local_30 = FUN_00882aa0(&PTR_FUN_00cc8028,1,0);
  (**(code **)(**(longlong **)(local_30 + 0x1c8) + 0x10))
            (*(longlong **)(local_30 + 0x1c8),param_1[0x39]);
  *(longlong **)(local_30 + 0x1e0) = param_1;
  *(undefined8 *)(local_30 + 0x1d8) = *(undefined8 *)(*param_1 + 0x238);
  *(longlong **)(local_30 + 0x200) = param_1;
  *(undefined8 *)(local_30 + 0x1f8) = *(undefined8 *)(*param_1 + 0x240);
  *(longlong *)(local_30 + 0x208) = param_1[0x41];
  *(longlong *)(local_30 + 0x210) = param_1[0x42];
  *(longlong **)(local_30 + 0x220) = param_1;
  *(undefined8 *)(local_30 + 0x218) = *(undefined8 *)(*param_1 + 0x250);
  uVar1 = FUN_00cd0ec0(&DAT_00cc7968,1,param_1);
  *(undefined8 *)(local_30 + 0x1d0) = uVar1;
  return local_30;
}

