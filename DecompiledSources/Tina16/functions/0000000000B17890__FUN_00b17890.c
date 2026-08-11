/* Ghidra address: 00b17890 */
/* Ghidra symbol: FUN_00b17890 */


void FUN_00b17890(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined1 *local_70;
  longlong local_60 [10];
  longlong *local_10;
  
  local_70 = auStack_a8;
  local_10 = (longlong *)0x0;
  FUN_00b175f0(param_1);
  uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  FUN_0041b840(param_1 + 0x10,param_2);
  local_88 = FUN_0041b800(&local_10);
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x58))(*(longlong **)(param_1 + 0x10),0,0,0);
  if (local_10 != (longlong *)0x0) {
    (**(code **)(*local_10 + 0x28))(local_10);
    while( true ) {
      iVar1 = (**(code **)(*local_10 + 0x18))(local_10,1,local_60,0);
      if (iVar1 != 0) break;
      FUN_00b176a0(auStack_a8,local_60);
      if (local_60[0] != 0) {
        thunk_FUN_0398fb79(local_60[0]);
      }
    }
    FUN_0041b800(&local_10);
  }
  FUN_0041b800(&local_10);
  return;
}

