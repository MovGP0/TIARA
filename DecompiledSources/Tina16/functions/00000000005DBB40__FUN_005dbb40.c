/* Ghidra address: 005dbb40 */
/* Ghidra symbol: FUN_005dbb40 */


undefined1 FUN_005dbb40(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 local_39;
  undefined1 local_28 [8];
  undefined4 local_20;
  
  FUN_00417580(local_28,&DAT_005d3e40);
  iVar1 = FUN_005db820(param_1,param_2,local_28);
  if (iVar1 < 0) {
    local_39 = 0;
  }
  else {
    local_39 = 1;
    uVar2 = (**(code **)*param_1)(param_1,param_2);
    uVar3 = 0;
    if (param_1[1] != 0) {
      uVar3 = *(ulonglong *)(param_1[1] + -8);
    }
    local_20 = param_3;
    FUN_00595470(*(longlong *)
                  (param_1[1] + (longlong)(int)((ulonglong)uVar2 % (uVar3 & 0xffffffff)) * 8) + 8,
                 local_28,iVar1);
  }
  FUN_00417740(local_28,&DAT_005d3e40);
  return local_39;
}

