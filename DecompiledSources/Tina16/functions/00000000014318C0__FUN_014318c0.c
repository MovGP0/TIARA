/* Ghidra address: 014318c0 */
/* Ghidra symbol: FUN_014318c0 */


/* WARNING: Removing unreachable block (ram,0x01431920) */
/* WARNING: Removing unreachable block (ram,0x01431946) */
/* WARNING: Removing unreachable block (ram,0x01431958) */
/* WARNING: Removing unreachable block (ram,0x0143196c) */
/* WARNING: Removing unreachable block (ram,0x01431982) */
/* WARNING: Removing unreachable block (ram,0x01431998) */
/* WARNING: Removing unreachable block (ram,0x014319ec) */
/* WARNING: Removing unreachable block (ram,0x014319fa) */
/* WARNING: Removing unreachable block (ram,0x01431a21) */
/* WARNING: Removing unreachable block (ram,0x01431a75) */
/* WARNING: Removing unreachable block (ram,0x01431aba) */

void FUN_014318c0(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined1 local_29;
  undefined8 local_28;
  undefined8 local_20;
  
  local_40 = auStack_a8;
  local_78 = 0;
  local_68 = 0;
  local_70 = 0;
  local_48 = 0;
  local_50 = 0;
  local_28 = 0;
  local_29 = 1;
  local_20 = FUN_00b8f030(param_2);
  (**(code **)(*param_1 + 0x40))(param_1,local_20);
  local_88 = 1;
  FUN_00b8fd60(&local_28,local_20,*PTR_DAT_02005310,0);
  (**(code **)(*param_1 + 0x58))(param_1,local_28);
  FUN_00414560(&local_78,3);
  FUN_00414560(&local_50,2);
  FUN_00414480(&local_28);
  return;
}

