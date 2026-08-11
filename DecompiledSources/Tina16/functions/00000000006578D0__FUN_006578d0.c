/* Ghidra address: 006578d0 */
/* Ghidra symbol: FUN_006578d0 */


void FUN_006578d0(undefined8 param_1,undefined8 param_2,int *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined1 *local_30;
  undefined1 local_28 [12];
  undefined4 local_1c;
  
  local_30 = auStack_68;
  local_1c = thunk_FUN_03b57162(param_2);
  local_48 = CONCAT44(local_48._4_4_,param_3[3] + -2);
  thunk_FUN_041a27b3(param_2,*param_3 + 2,param_3[1] + 2,param_3[2] + -2);
  plVar1 = (longlong *)FUN_00781840();
  (**(code **)(*plVar1 + 0x118))(plVar1,local_28,2);
  uVar2 = FUN_00781840();
  local_48 = 0;
  local_40 = 0;
  FUN_00778dc0(uVar2,param_2,local_28,param_3);
  thunk_FUN_0402759f(param_2,local_1c);
  FUN_00423b10(param_3,0xfffffffe,0xfffffffe);
  return;
}

