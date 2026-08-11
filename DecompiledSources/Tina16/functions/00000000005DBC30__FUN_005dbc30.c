/* Ghidra address: 005dbc30 */
/* Ghidra symbol: FUN_005dbc30 */


void FUN_005dbc30(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 local_28 [24];
  
  FUN_00417580(local_28,&DAT_005d3e40);
  iVar1 = FUN_005db820(param_1,param_2,local_28);
  if (-1 < iVar1) {
    uVar2 = (**(code **)*param_1)(param_1,param_2);
    uVar3 = 0;
    if (param_1[1] != 0) {
      uVar3 = *(ulonglong *)(param_1[1] + -8);
    }
    FUN_00599740(*(longlong *)
                  (param_1[1] + (longlong)(int)((ulonglong)uVar2 % (uVar3 & 0xffffffff)) * 8) + 8,
                 iVar1,5);
  }
  FUN_00417740(local_28,&DAT_005d3e40);
  return;
}

