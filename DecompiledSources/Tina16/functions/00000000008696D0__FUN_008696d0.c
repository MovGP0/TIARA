/* Ghidra address: 008696d0 */
/* Ghidra symbol: FUN_008696d0 */


undefined4 FUN_008696d0(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_18 = 0;
  local_20 = (longlong *)0x0;
  *param_2 = 0;
  FUN_008687d0(param_1,&local_20);
  uVar2 = FUN_0041b800(&local_18);
  uVar1 = (**(code **)(*local_20 + 0x160))(local_20,uVar2);
  FUN_0041d630(uVar1);
  lVar3 = FUN_008631f0(&DAT_0085e538,1,local_18);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = lVar3 + 0x20;
  }
  FUN_0041b840(param_2,lVar3);
  local_10 = 0;
  FUN_0041b800(&local_20);
  FUN_0041b800(&local_18);
  return local_10;
}

