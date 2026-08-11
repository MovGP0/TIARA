/* Ghidra address: 006626f0 */
/* Ghidra symbol: FUN_006626f0 */


void FUN_006626f0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_34 [16];
  undefined1 local_24 [12];
  
  FUN_004238d0(local_34,param_3,param_4,param_5,param_6);
  plVar1 = (longlong *)FUN_00781840();
  (**(code **)(*plVar1 + 400))(plVar1,local_24,param_2);
  uVar2 = FUN_00781840();
  uVar3 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x78));
  FUN_00778dc0(uVar2,uVar3,local_24,local_34,0,0);
  return;
}

