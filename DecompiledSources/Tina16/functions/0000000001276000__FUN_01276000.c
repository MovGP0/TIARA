/* Ghidra address: 01276000 */
/* Ghidra symbol: FUN_01276000 */


void FUN_01276000(longlong *param_1,longlong param_2,byte param_3,short *param_4)

{
  longlong *local_res8;
  longlong local_res10 [3];
  undefined8 local_30;
  longlong *local_28;
  longlong local_20 [2];
  
  local_20[0] = 0;
  local_28 = (longlong *)0x0;
  local_30 = 0;
  local_res8 = param_1;
  local_res10[0] = param_2;
  FUN_0041b910(param_1);
  FUN_00414610(local_res10[0]);
  if (local_res8 != (longlong *)0x0) {
    if (local_res10[0] == 0) {
      FUN_0041b840(local_20,local_res8);
    }
    else {
      (**(code **)(*local_res8 + 0xd8))(local_res8,local_20,local_res10[0]);
    }
    if (local_20[0] != 0) {
      FUN_0041b890(&local_28,local_20[0],&DAT_01276208);
      if (param_3 < 4) {
        if (param_3 == 3) {
          FUN_0043f750(&local_30,*param_4);
        }
        else if (param_3 == 0) {
          FUN_0043f750(&local_30,*(undefined4 *)param_4);
        }
        else if (param_3 == 1) {
          FUN_0043f750(&local_30,(longlong)*param_4);
        }
      }
      else if (param_3 == 4) {
        FUN_0043f750(&local_30,(char)*param_4);
      }
      else if (param_3 == 5) {
        FUN_00b8fd60(&local_30,*(undefined8 *)param_4,6,0,1);
      }
      (**(code **)(*local_28 + 0x108))(local_28,L"value",local_30);
    }
  }
  FUN_00414480(&local_30);
  FUN_0041b800(&local_28);
  FUN_0041b800(local_20);
  FUN_0041b800(&local_res8);
  FUN_00414480(local_res10);
  return;
}

