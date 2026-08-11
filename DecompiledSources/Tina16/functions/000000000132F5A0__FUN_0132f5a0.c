/* Ghidra address: 0132f5a0 */
/* Ghidra symbol: FUN_0132f5a0 */


undefined8 FUN_0132f5a0(undefined2 *param_1,short *param_2)

{
  undefined8 uVar1;
  undefined8 unaff_RDI;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_38 = 0;
  if (param_1[1] == *param_2) {
    local_30[0] = FUN_0132def0(*param_1,1);
    unaff_RDI = FUN_0132c700(*param_1);
    local_40 = FUN_0132def0(*param_2,1);
    uVar1 = FUN_0132e6f0(&local_38,local_40,0);
    FUN_0132d960(uVar1,param_2);
    FUN_0132cce0(&local_38);
    FUN_0132eff0(param_1,local_40,local_30);
    uVar1 = FUN_0132e6f0(&local_38,local_30[0],0);
    FUN_0132d960(unaff_RDI,uVar1);
    FUN_0132cce0(&local_38);
    FUN_0132e400(local_30);
    FUN_0132e400(&local_40);
  }
  else {
    FUN_0132c080(L"matrix and vector sizes are not conformant",0x13);
  }
  return unaff_RDI;
}

