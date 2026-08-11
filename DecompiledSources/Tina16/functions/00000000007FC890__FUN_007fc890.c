/* Ghidra address: 007fc890 */
/* Ghidra symbol: FUN_007fc890 */


void FUN_007fc890(longlong *param_1,byte param_2)

{
  char cVar1;
  undefined1 auStack_98 [40];
  undefined1 *local_70;
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  longlong *local_20;
  
  local_70 = auStack_98;
  FUN_00411a80(param_1,param_2);
  FUN_0080ac00(DAT_02012668,param_1);
  if ((*(ushort *)((longlong)param_1 + 0x34) & 8) == 0) {
    (**(code **)(**(longlong **)PTR_DAT_02005910 + 0x28))(*(longlong **)PTR_DAT_02005910);
  }
  if (*(char *)((longlong)param_1 + 0x691) != '\0') {
    (**(code **)(*param_1 + 0x288))(param_1);
  }
  FUN_008027e0(param_1,0);
  cVar1 = FUN_0065be20(param_1);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x1f0))(param_1);
  }
  FUN_008081b0(DAT_02012670,param_1);
  local_20 = param_1 + 0x9c;
  local_28 = *local_20;
  *local_20 = 0;
  FUN_00410f20(local_28);
  local_30 = param_1 + 0x9e;
  local_38 = *local_30;
  *local_30 = 0;
  FUN_00410f20(local_38);
  local_40 = param_1 + 199;
  local_48 = *local_40;
  *local_40 = 0;
  FUN_00410f20(local_48);
  local_50 = param_1 + 0xca;
  local_58 = *local_50;
  *local_50 = 0;
  FUN_00410f20(local_58);
  local_60 = param_1 + 0xd1;
  local_68 = *local_60;
  *local_60 = 0;
  FUN_00410f20(local_68);
  FUN_007facc0(param_1,param_2 & 0xfc);
  (**(code **)(**(longlong **)PTR_DAT_02005910 + 0x30))(*(longlong **)PTR_DAT_02005910);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

