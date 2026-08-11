/* Ghidra address: 0127f380 */
/* Ghidra symbol: FUN_0127f380 */


void FUN_0127f380(longlong param_1,longlong *param_2)

{
  longlong *local_res10 [3];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  longlong *local_30;
  longlong *local_28;
  longlong *local_20 [2];
  
  local_68 = 0;
  local_58 = 0;
  local_60 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_20[0] = (longlong *)0x0;
  local_28 = (longlong *)0x0;
  local_30 = (longlong *)0x0;
  local_38 = 0;
  local_res10[0] = param_2;
  FUN_0041b910(param_2);
  if (local_res10[0] != (longlong *)0x0) {
    (**(code **)(*local_res10[0] + 0xd8))(local_res10[0],&local_40,L"detail[@idx=\"bompars\"]");
    FUN_0041b890(local_20,local_40,&DAT_0127f6c2);
    if (local_20[0] != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x3e0) + 0x90))(*(longlong **)(param_1 + 0x3e0));
      (**(code **)(*local_20[0] + 0xe8))(local_20[0],&local_30,L"parameter");
      (**(code **)(*local_30 + 0x68))(local_30);
      (**(code **)(*local_30 + 0x70))(local_30,&local_48);
      FUN_0041b890(&local_28,local_48,&DAT_0127f6c2);
      while (local_28 != (longlong *)0x0) {
        (**(code **)(*local_28 + 0x100))(local_28,&local_50,L"value");
        FUN_0043ea00(&local_38,local_50);
        if (local_38 != 0) {
          (**(code **)(*local_28 + 0x100))(local_28,&local_60,&DAT_0127f718);
          FUN_00416cd0(&local_58,3,local_60,&DAT_0127f72c,local_38);
          (**(code **)(**(longlong **)(param_1 + 0x3e0) + 0x78))
                    (*(longlong **)(param_1 + 0x3e0),local_58);
        }
        (**(code **)(*local_30 + 0x70))(local_30,&local_68);
        FUN_0041b890(&local_28,local_68,&DAT_0127f6c2);
      }
    }
  }
  FUN_0041b800(&local_68);
  FUN_00414560(&local_60,3);
  FUN_00417840(&local_48,&DAT_00b9f8e0,2);
  FUN_00414480(&local_38);
  FUN_0041b800(&local_30);
  FUN_00417840(&local_28,&LAB_00b9fca0,2);
  FUN_0041b800(local_res10);
  return;
}

