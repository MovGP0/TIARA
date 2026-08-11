/* Ghidra address: 00782c40 */
/* Ghidra symbol: FUN_00782c40 */


undefined1
FUN_00782c40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5)

{
  undefined8 uVar1;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 *local_30;
  undefined1 local_19;
  
  local_30 = auStack_88;
  local_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  local_58 = 0;
  local_19 = 1;
  FUN_004167d0(&local_58,param_4);
  FUN_00780e40(param_1,&local_50,local_58,2);
  local_68 = &local_50;
  uVar1 = FUN_00780b50(param_1,param_2,param_3,param_4);
  *param_5 = uVar1;
  FUN_00414480(&local_58);
  FUN_00417740(&local_50,&DAT_0075cb10);
  return local_19;
}

