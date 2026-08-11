/* Ghidra address: 00dda1a0 */
/* Ghidra symbol: FUN_00dda1a0 */


void FUN_00dda1a0(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *local_10;
  
  local_10 = (longlong *)0x0;
  FUN_0041b890(&local_10,*(undefined8 *)(param_1 + 0x48),&LAB_00dda238);
  lVar2 = FUN_004d4fa0(&PTR_FUN_0047dd60,1,param_2,0);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar2 + 0x28;
  }
  uVar1 = (**(code **)(*local_10 + 0x30))(local_10,lVar2,0xffffffff);
  FUN_006245b0(uVar1);
  FUN_0041b800(&local_10);
  return;
}

