/* Ghidra address: 00b9d4f0 */
/* Ghidra symbol: FUN_00b9d4f0 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00b9d4f0(undefined8 param_1,undefined8 param_2,longlong *param_3,short *param_4)

{
  char cVar1;
  longlong lVar2;
  longlong *local_res18 [2];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58 [3];
  longlong *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_21;
  undefined8 local_20 [2];
  
  local_68 = 0;
  local_70 = 0;
  local_60 = 0;
  local_58[0] = 0;
  local_58[1] = 0;
  local_20[0] = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = (longlong *)0x0;
  local_res18[0] = param_3;
  FUN_0041b910(param_3);
  lVar2 = FUN_00badb60(&DAT_00ba1a00,1);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar2 + 0x38;
  }
  FUN_0041b840(&local_40,lVar2);
  if (param_4 != (short *)0x0) {
    if (*param_4 == 0x2f) {
      (**(code **)(*local_res18[0] + 0x58))(local_res18[0],local_58);
      if (local_58[0] == 0) {
        (**(code **)(*local_40 + 0x60))(local_40,&local_60,local_res18[0]);
      }
      else {
        (**(code **)(*local_res18[0] + 0x58))(local_res18[0],&local_70);
        (**(code **)(*local_40 + 0x60))(local_40,&local_68,local_70);
      }
    }
    else {
      (**(code **)(*local_40 + 0x60))(local_40,local_58 + 1,local_res18[0]);
    }
    FUN_00b9ea80(param_1,param_4);
    while( true ) {
      cVar1 = FUN_00b9e6b0(param_1,local_20,&local_30,&local_21);
      if (cVar1 == '\0') break;
      FUN_0041b840(&local_38,local_40);
      lVar2 = FUN_00badb60(&DAT_00ba1a00,1);
      if (lVar2 == 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = lVar2 + 0x38;
      }
      FUN_0041b840(&local_40,lVar2);
      FUN_00b9daa0(param_1,local_38,local_20[0],local_30,local_21,local_40);
    }
  }
  FUN_0041b840(param_2,local_40);
  FUN_0041b800(&local_70);
  FUN_00417840(&local_68,&DAT_00b9f8e0,2);
  FUN_0041b800(local_58);
  FUN_0041b800(local_58 + 1);
  FUN_00417840(&local_40,&DAT_00b9f960,2);
  FUN_00414480(&local_30);
  FUN_00414480(local_20);
  FUN_0041b800(local_res18);
  return param_2;
}

