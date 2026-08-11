/* Ghidra address: 006a3d10 */
/* Ghidra symbol: FUN_006a3d10 */


undefined8 FUN_006a3d10(longlong *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 in_stack_ffffffffffffff88;
  uint uVar3;
  int local_48 [2];
  undefined1 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28 [12];
  undefined1 local_1c [12];
  
  uVar3 = (uint)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  local_38 = 0;
  local_30 = 0;
  iVar1 = (**(code **)(*param_1 + 0x138))(param_1);
  if (param_3 < iVar1) {
    iVar1 = (**(code **)(*param_1 + 0x138))(param_1);
    if (0 < iVar1) {
      if (param_1[0x31] == 0) {
        FUN_0041ddd0(&local_30,PTR_PTR_02004580);
        uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,local_30);
        FUN_004134c0(uVar2);
      }
      else {
        (*(code *)param_1[0x31])(param_1[0x32],param_1,param_3,param_2,local_1c,local_28);
      }
      goto code_r0x006a3e13;
    }
  }
  FUN_0041ddd0(&local_38,PTR_PTR_02004940);
  local_40 = 0;
  local_48[0] = param_3;
  uVar2 = FUN_0044d530(&PTR_FUN_004334c0,1,local_38,local_48,(ulonglong)uVar3 << 0x20);
  FUN_004134c0(uVar2);
code_r0x006a3e13:
  FUN_00414560(&local_38,2);
  return param_2;
}

