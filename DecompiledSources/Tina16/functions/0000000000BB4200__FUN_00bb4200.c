/* Ghidra address: 00bb4200 */
/* Ghidra symbol: FUN_00bb4200 */


void FUN_00bb4200(longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40;
  undefined1 *local_30;
  longlong local_20;
  
  local_30 = auStack_68;
  local_48 = FUN_00bb4050(auStack_68);
  local_40 = 0;
  local_20 = FUN_00bad320(&PTR_FUN_00b9f300,1,param_2,1);
  FUN_00bad550(local_20,param_3);
  if (local_20 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = local_20 + 0x60;
  }
  (**(code **)(*param_1 + 0x20))(param_1,lVar1);
  FUN_00410f20(local_20);
  return;
}

