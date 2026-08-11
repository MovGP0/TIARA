/* Ghidra address: 01729d90 */
/* Ghidra symbol: FUN_01729d90 */


void FUN_01729d90(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 local_res10 [3];
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20;
  
  local_40 = auStack_68;
  local_30 = 0;
  local_38 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_20 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
  local_28 = (longlong *)FUN_015e1d70(&PTR_FUN_015be748,1,0);
  FUN_00414ad0(local_28 + 0x16,*(undefined8 *)PTR_DAT_020030c8);
  FUN_00414ad0(local_28 + 0x11,local_res10[0]);
  (**(code **)(*local_28 + 0x88))(local_28,"N=g4W9%x2?-(A+\\q#K1}");
  FUN_015dc950(local_28);
  FUN_015dda60(local_28,L"clcf.xml",local_20);
  FUN_015dcd20(local_28);
  if (*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x10) != 0) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x80) + 0x10);
    (**(code **)(*plVar1 + 0x178))(plVar1,local_20);
  }
  FUN_00410f20(local_20);
  FUN_00410f20(local_28);
  FUN_004144d0(&local_38);
  FUN_0041b800(&local_30);
  FUN_00414480(local_res10);
  return;
}

