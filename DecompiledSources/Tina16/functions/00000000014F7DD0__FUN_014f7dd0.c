/* Ghidra address: 014f7dd0 */
/* Ghidra symbol: FUN_014f7dd0 */


undefined1 FUN_014f7dd0(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46;
  undefined1 local_45;
  undefined1 local_40;
  undefined8 local_38;
  
  (**(code **)(*param_2 + 0x2d0))(param_2,4,&local_78);
  local_70 = *local_78;
  (**(code **)(*param_2 + 0x2d0))(param_2,5,&local_78);
  local_68 = *local_78;
  (**(code **)(*param_2 + 0x2d0))(param_2,0,&local_78);
  local_58 = *local_78;
  (**(code **)(*param_2 + 0x2d0))(param_2,6,&local_78);
  local_48 = *(undefined1 *)local_78;
  (**(code **)(*param_2 + 0x2d0))(param_2,7,&local_78);
  local_47 = *(undefined1 *)local_78;
  (**(code **)(*param_2 + 0x2d0))(param_2,1,&local_78);
  local_60 = *local_78;
  (**(code **)(*param_2 + 0x2d0))(param_2,2,&local_78);
  local_46 = *(undefined1 *)local_78;
  (**(code **)(*param_2 + 0x2d0))(param_2,3,&local_78);
  local_45 = *(undefined1 *)local_78;
  local_50 = 0;
  FUN_014f7c40(&local_70,param_1);
  *param_3 = local_38;
  return local_40;
}

