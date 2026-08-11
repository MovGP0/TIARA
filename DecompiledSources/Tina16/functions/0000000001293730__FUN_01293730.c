/* Ghidra address: 01293730 */
/* Ghidra symbol: FUN_01293730 */


void FUN_01293730(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  longlong *local_40;
  undefined8 local_38;
  undefined1 *local_30;
  longlong local_28 [3];
  
  local_30 = auStack_78;
  local_38 = 0;
  local_40 = (longlong *)0x0;
  local_28[0] = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_0041b910(param_2);
  FUN_00414610(local_res18);
  (**(code **)(*local_res10 + 0x100))(local_res10,&local_40);
  (**(code **)(*local_40 + 0xd8))(local_40,&local_38,L"/schematic/circuit");
  FUN_0041b890(local_28,local_38,&DAT_0129393a);
  if (local_28[0] != 0) {
    local_58 = local_res20;
    local_50 = local_res18;
    FUN_012927b0(param_1,param_1,local_res10,local_28[0]);
    FUN_019a4ba0(param_1,1);
    FUN_0198c3b0(param_1);
  }
  FUN_01284d20(param_1,local_res10,local_res20);
  FUN_0041b800(&local_40);
  FUN_0041b800(&local_38);
  FUN_0041b800(local_28);
  FUN_0041b800(&local_res10);
  FUN_00414480(&local_res18);
  return;
}

