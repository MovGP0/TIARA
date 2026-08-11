/* Ghidra address: 0132f6f0 */
/* Ghidra symbol: FUN_0132f6f0 */


undefined8 FUN_0132f6f0(short *param_1,short *param_2)

{
  undefined8 uVar1;
  undefined8 unaff_XMM6_Qa;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [3];
  
  local_48 = 0;
  if (*param_1 == *param_2) {
    local_30[0] = FUN_0132def0(1,1);
    local_38 = FUN_0132def0(1,*param_1);
    uVar1 = FUN_0132e5a0(&local_48,local_38,0);
    FUN_0132d960(uVar1,param_1);
    FUN_0132cce0(&local_48);
    local_40 = FUN_0132def0(*param_2,1);
    uVar1 = FUN_0132e6f0(&local_48,local_40,0);
    FUN_0132d960(uVar1,param_2);
    FUN_0132cce0(&local_48);
    FUN_0132eff0(local_38,local_40,local_30);
    unaff_XMM6_Qa = FUN_0132ec30(local_30[0],0,0);
    FUN_0132e400(local_30);
    FUN_0132e400(&local_38);
    FUN_0132e400(&local_40);
  }
  else {
    FUN_0132c080(L"vectors sizes are not conformant",0x13);
  }
  return unaff_XMM6_Qa;
}

