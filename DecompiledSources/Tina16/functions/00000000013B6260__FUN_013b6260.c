/* Ghidra address: 013b6260 */
/* Ghidra symbol: FUN_013b6260 */


undefined4 FUN_013b6260(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined1 *local_50;
  longlong local_40;
  int local_34;
  undefined4 local_24;
  
  local_50 = auStack_98;
  local_58 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_40 = *(longlong *)(param_1 + 0x58);
  (**(code **)(**(longlong **)(local_40 + 200) + 0x90))(*(longlong **)(local_40 + 200));
  FUN_013bb8f0(local_40);
  local_78 = 60000;
  local_70 = 0;
  local_68 = 0;
  local_34 = FUN_01054cd0(*(undefined8 *)(local_40 + 200),local_res10[0],
                          *(undefined8 *)(local_40 + 0x108),1);
  if (local_34 == 0x102) {
    (**(code **)(**(longlong **)(local_40 + 200) + 0x78))
              (*(longlong **)(local_40 + 200),L"Timeout received");
  }
  FUN_00416ba0(&local_58,*(undefined8 *)(local_40 + 0x108),L"\\py_msg.txt");
  (**(code **)(**(longlong **)(local_40 + 200) + 0x100))(*(longlong **)(local_40 + 200),local_58);
  local_24 = FUN_013b6200(param_1);
  FUN_00414480(&local_58);
  FUN_00414480(local_res10);
  return local_24;
}

