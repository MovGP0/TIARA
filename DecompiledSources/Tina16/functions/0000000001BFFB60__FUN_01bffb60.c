/* Ghidra address: 01bffb60 */
/* Ghidra symbol: FUN_01bffb60 */


longlong * FUN_01bffb60(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  code *pcVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  longlong *local_30;
  longlong local_28;
  longlong *local_20;
  
  local_40 = auStack_68;
  local_20 = (longlong *)0x0;
  if (param_2 != 0) {
    puVar1 = auStack_68;
    if (*(longlong *)(param_2 + 0x80) != 0) {
      FUN_00410f20(*(longlong *)(param_2 + 0x80));
      FUN_01bfe090(param_2,0);
      puVar1 = local_40;
    }
    local_40 = puVar1;
    pcVar2 = (code *)FUN_00411550(param_1,0xffac);
    local_28 = (*pcVar2)(param_1,param_2);
    if (local_28 != 0) {
      *(short *)(param_1 + 99) = (short)param_1[99] + 1;
      local_30 = param_1;
      local_20 = (longlong *)(**(code **)(local_28 + 0x78))(local_28,1,param_1);
      uVar3 = (**(code **)(*param_1 + 0x2c8))(param_1);
      (**(code **)(*local_20 + 0x120))(local_20,(&DAT_01fe216c)[uVar3 & 0xff]);
      FUN_0064c650(local_20,6);
      local_20[99] = (longlong)param_1;
      (**(code **)(*local_20 + 0x130))(local_20,param_1);
      (**(code **)(*local_20 + 0x140))(local_20,*(undefined1 *)((longlong)param_1 + 0xb1));
      (**(code **)(*local_20 + 0x248))(local_20,param_2);
      FUN_01bfe090(local_20[100],local_20);
      (**(code **)(*local_20 + 0x108))(local_20);
      FUN_00654410(param_1);
    }
  }
  return local_20;
}

