/* Ghidra address: 01b1d1c0 */
/* Ghidra symbol: FUN_01b1d1c0 */


void FUN_01b1d1c0(longlong *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 *local_40;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  longlong *local_20;
  
  local_40 = auStack_68;
  local_48 = 0;
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  iVar1 = (**(code **)(*param_1 + 0x28))(param_1);
  local_24 = 0;
  local_2c = iVar1;
  if (-1 < iVar1 + -1) {
    do {
      uVar2 = (**(code **)(*param_1 + 0x28))(param_1);
      local_28 = FUN_00409e80(uVar2);
      (**(code **)(*param_1 + 0x18))(param_1,&local_48,local_28);
      uVar3 = (**(code **)(*param_1 + 0x30))(param_1,local_28);
      (**(code **)(*local_20 + 0x80))(local_20,local_48,uVar3);
      (**(code **)(*param_1 + 0x98))(param_1,local_28);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_01b1d100(param_1,local_20);
  FUN_00410f20(local_20);
  FUN_00414480(&local_48);
  return;
}

