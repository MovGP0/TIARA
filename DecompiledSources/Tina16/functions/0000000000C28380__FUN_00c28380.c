/* Ghidra address: 00c28380 */
/* Ghidra symbol: FUN_00c28380 */


void FUN_00c28380(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  longlong local_30;
  char local_21;
  longlong *local_20;
  
  local_40 = auStack_78;
  local_50 = 0;
  local_48 = 0;
  iVar1 = (**(code **)(*param_2 + 0x18))(param_2,&local_21,1);
  do {
    if (iVar1 != 1) {
LAB_00c28535:
      FUN_00414560(&local_50,2);
      return;
    }
    if ((byte)(local_21 - 0x28U) < 0x20 && (1 << (local_21 - 0x28U & 0x1f) & 0x80010U) != 0) {
code_r0x00c28518:
      (**(code **)(*param_2 + 0x48))(param_2,0xffffffff,1);
      goto LAB_00c28535;
    }
    if (local_21 != '!') {
      FUN_0041ddd0(&local_50,PTR_PTR_02001490);
      (**(code **)(*param_1 + 0x18))(param_1,1,local_50);
      goto code_r0x00c28518;
    }
    local_30 = FUN_00c2ddd0(&LAB_00c13930,param_2);
    if (local_30 == 0) {
      FUN_0041ddd0(&local_48,PTR_PTR_02005ac8);
      FUN_00c1a320(local_48);
    }
    (**(code **)(*param_2 + 0x48))(param_2,0xffffffff,1);
    local_20 = (longlong *)(**(code **)(local_30 + 0x40))(local_30,1,param_1[2]);
    (**(code **)(*local_20 + 0x30))(local_20,param_2);
    FUN_00c1aa20(param_1,local_20);
    iVar1 = (**(code **)(*param_2 + 0x18))(param_2,&local_21,1);
  } while( true );
}

